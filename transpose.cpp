#include<stdio.h>
int main()
{
	int a[10][10],t[10][10];
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	printf("%d",t[i][j]);
}
}
