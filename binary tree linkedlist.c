#include<stdio.h>
#include<stdlib.h>
struct NodeLL
{
	int data;
	struct NodeLL *next;
};
typedef struct NodeLL nodell;
nodell *head=NULL, *temp,*nnll;

struct nodeT{
	struct nodeT *left;
	int data;
	struct nodeT *right;
};
typedef struct nodeT nodetree;
nodetree *root=NULL,*nnT,*queue[100];


nodell *newnodell( int val)
{
	nnll=(nodell *)malloc(sizeof(nodell));
	nnll->data=val;
	nnll->next=NULL;
	return nnll;
}
void createll(int val)
{
	nnll=newnodell(val);
	if(head==NULL)
	{
		head=nnll;
	}
	else
	{
		temp=head;
		while(temp->next)
		{
			temp=temp->next;
		}
		temp->next=nnll;
	}
}
void displayll()
{
	temp=head;
	while(temp)
	{
		printf("%d %d %d \n",temp,temp->data,temp->next);
		temp=temp->next;
	}
}
nodetree * newnodetree(int val)
{
	nnT=(nodetree *)malloc(sizeof(nodetree));
	nnT->data=val;
	nnT->right=NULL;
	nnT->left=NULL;
	return nnT;
}
nodetree * constructtree(nodell *head)
{
	int f=0 ,r=0;
	temp=head;
	nnT=newnodetree(temp->data);//10
	queue[r]=nnT;
	while(1)
	{
		if(temp->next)
		{
			nnT=newnodetree(temp->next->data);
			queue[++r]=nnT;
			queue[f]->left=nnT;
			temp=temp->next;
		}
		else
		{
			return queue[0];
		}
		if(temp->next)
		{
			nnT=newnodetree(temp->next->data);
			queue[++r]=nnT;
			queue[f]->right=nnT;
			temp=temp->next;
		}
		else
		{
			return queue[0];
		}
		f++;
	}
}
void inorder(nodetree * root)
{
	if(!root)
	{
		return;
	}
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);	
}
int main()
{
	int val,n,i;
	scanf("%d",&n); //n.o of elements or values  //5
	for (i=1;i<=n;i++)
	{
		scanf("%d",&val);//10 20 30 40 50
		createll(val); //cll(10)
	}
	//displayll();
	root=constructtree(head);
	inorder(root);
}
