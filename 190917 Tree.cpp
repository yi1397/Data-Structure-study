#include<stdio.h>
#include<stdlib.h>
typedef struct _tree{
	char data;
	struct _tree *left;
	struct _tree *right;
}tree;
tree* makenode(char data, tree* lnode, tree* rnode)
{
	tree* root = (tree*)malloc(sizeof(tree));
	root -> data = data;
	root -> left = lnode;
	root -> right = rnode;
	return root;
}

void pre(tree* root)
{
	if(root==NULL) return;
	printf("%c ",root->data);
	pre(root->left);
	pre(root->right);
}

void in(tree* root)
{
	if(root==NULL) return;
	if(root->left!=NULL) in(root->left);
	printf("%c ",root->data);
	in(root->right);
}

void post(tree* root)
{
	if(root==NULL) return;
	post(root->left);
	post(root->right);
	printf("%c ",root->data);
}

int main()
{
	tree* L = makenode('A',NULL,NULL);
	tree* K = makenode('K',NULL,L);
	tree* F = makenode('F',K,NULL);
	tree* V = makenode('V',NULL,F);
	tree* A = makenode('A',NULL,NULL);
	tree* H = makenode('H',NULL,A);
	tree* D = makenode('D',H,NULL);
	tree* P = makenode('P',NULL,NULL);
	tree* C = makenode('C',P,D);
	tree* B = makenode('B',V,C);
	tree* T = makenode('T',B,NULL);
	pre(T);
	printf("\n");
	in(T);
	printf("\n");
	post(T);
	printf("\n");
	return 0;
}
