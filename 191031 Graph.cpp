#include<stdio.h>
int graph_matrix[5][5];
char visit[2][5] = {'A', 'B', 'C','D', 'E',
					'F', 'F', 'F', 'F', 'F'};
char stack[100];

void push()
{
	
}

void dfs(int v)
{
	int j;
	if(visit[1][v] == 'F')
	{
		visit[1][v] = 'T';
		printf("%c\n",visit[0][v]);
	}
	for(j=0;j<5;j++)
	{
		if(graph_matrix[v][j]==1 && visit[1][j]=='F')
			dfs(j);
	}
	return;
}

int main()
{
	int i,j,n;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d", &graph_matrix[i][j]);
		}
	}
	scanf("%d",&n);
	dfs(n);
}
/*
0 1 0 0 0 0 0 0 0 0 0
1 0 1 0 0 0 0 0 0 0 0
0 1 0 1 0 0 1 0 0 0 0
0 0 1 0 1 1 0 0 0 0 0 
0 0 0 1 0 0 0 0 0 0 0
0 0 0 1 0 0 0 0 0 0 0
0 0 1 0 0 0 0 1 0 1 0 
0 0 0 0 0 0 1 0 1 0 0
0 0 0 0 0 0 0 1 0 0 0
0 0 0 0 0 0 1 0 0 0 1
0 0 0 0 0 0 0 0 0 1 0
*/
