#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[14],q,r,k;
    int odd=0;
    int even=0;
    int sum=0;
    printf("enter credit card number:");
    //for(int i=0;i<16;i++)
        scanf("%d",&a);
    for(int i=0;i<15;i++)
    {
        if(i%2!=0)
        {
            odd=odd+a[i];
        }
        else
        {
            a[i]=a[i]*2;
            if(a[i]>9)
            {
              r=a[i]%10;
              q=a[i]/10;
              k=r+q;
              even=even+k;
            }
            else
                even=even+a[i];


        }

    }
    sum=even+odd;
    if(sum%10==0)
        printf("The credit card number is valid");
    else
        printf("The credit card number is not valid");
}

  /*  int z=a[15];
    for(int i=0;i<15;i++)
    {
        if(i%2!=0)
        {
            odd=odd+a[i];
        }
        else
        {
            a[i]=a[i]*2;
            if(a[i]>9)
            {
              r=a[i]%10;
              q=a[i]/10;
              k=r+q;
            }
        even=even+k;

        }
    }

    sum1=even+odd;
    printf("%d",sum1);
    while((sum1%10)==0)
    {
        sum1=sum1+1;
        j=j+1;

    }
    printf("check no:%d",j);






}

#include<stdio.h>

int main()
{
	int a[16];
	int n=16;
	int i,even,odd;
	even=0;odd=0;
	printf("enter the number\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<15;i++)
	{	if((i%2)!=0)
			odd=odd+a[i];
		else
		{
			int x=a[i]*2;
			if(x>9)
			{
				int u=x%10;
				int t=x/10;
				even=even+u+t;
			}
			else
				even=even+x;

		}
	}

	int sum=even+odd;
	//printf("even:%d",even);
	//printf("odd:%d",odd);
	printf("sum:%d",sum);
	i=0;
	while((sum%10)!=0)
	{
		sum=sum+1;
		i=i+1;
	}

	printf("check number:%d",i);
}*/
