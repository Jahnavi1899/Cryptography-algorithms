#include<stdio.h>

int main()
{
	int a[10];
	//int n=16;
	int i,x;
	int sum=0;
	//even=0;odd=0;
	printf("enter the number\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	int k=10;
	for(i=0;i<9;i++)
	{
		sum=sum+(a[i]*k);
		k--;

	}

	//printf("%d",sum);
	i=0;
	if((sum%11)!=0)
	{	x=sum%11;
		while(x!=11)
		{
			x=x+1;
			i++;

		}
	}
	printf("check bit is:%d",i);


}
