#include<stdio.h>

int main()
{
	int a[13];
	//int n=16;
	int i,even,odd;
	even=0;odd=0;
	printf("enter the number\n");
	for(i=0;i<13;i++)
		scanf("%d",&a[i]);
	for(i=0;i<12;i++)
	{	if((i%2)==0)
		{
			even=even+a[i];
			//printf("%d\n",even);
		}
		else
		{
			int x=a[i]*3;
			odd=odd+x;
			//printf("%d\n",odd);
		}
	}
	int sum=even+odd;
	//printf("%d",sum);
	i=0;
	while((sum%10)!=0)
	{
		sum=sum+1;
		i++;

	}
	printf("check bit is:%d",i);


}
