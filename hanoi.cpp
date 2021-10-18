#include<stdio.h>
void hana(int,char,char,char);
int main()
{
	int n;
	char a,b,c;
	printf("input the number of disks  ");
	scanf("%d",&n);
	printf("tower of hanoi for %d disc",n);
	hana(n,'a','b','c');
}
void hana(int n,char beg, char aux, char end)
{
	if (n==1)
	{
		printf("\nmove disc from %c to %c",beg,end);
	}
	else
	{
		hana(n-1,beg,end,aux);
		hana(1,beg,aux,end);
		hana(n-1,aux,beg,end);
	}
}
