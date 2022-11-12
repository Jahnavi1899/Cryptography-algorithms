#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int i,j,l,lk,p,q,c=0,rw1=0,rw2=0,cl1=0,cl2=0;
	char key[30]="";
	char alpha[26]={'a','b','c','d','e','f','g','h','i','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
	char pt[50]="";
	char keyred[30]="";
	char cipher[30]="";
	char tam[5][5];
	printf("Welcome\n");
	printf("Enter key:");
	scanf(" %[^\n]%*c",&key);
	l=strlen(key);
	keyred[0]=key[0];
	keyred[1]='\0';
	p=1;
	for(j=1;j<strlen(key);j++)
	{
		for(i=0;i<j;i++)
		{
			//printf("%c(%d)-%c(%d)\n",key[j],j,keyred[i],i);
			if(key[j]==keyred[i])
			{c=1;}
		}
		if(c==0)
		{
			keyred[p]=key[j];
			p++;
		}
		c=0;
		//printf("keyred:%s\n",keyred);
	}
	lk=p-1;
	for(i=0;i<p;i++)
	{
		if(keyred[i]=='j')
			keyred[i]='i';
	}
	for(i=0;i<strlen(keyred);i++)
	{
		cipher[i]=keyred[i];
	}
	l=strlen(keyred);
	p=l;
	for(i=0;i<26;i++)
	{
		for(j=0;j<l;j++)
		{
			if(alpha[i]==keyred[j])
			{c=1;}
		}
		if(c==0)
		{
			cipher[p]=alpha[i];
			p++;
		}
		c=0;
	}
	c=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			tam[i][j]=cipher[c];
			c++;
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%c\t",tam[i][j]);
		}
		printf("\n");
	}
	printf("Enter the plain text:");
	scanf(" %[^\n]%*c",&pt);
	l=strlen(pt);
	if(l%2!=0)
	{
		pt[l]='z';
		pt[l+1]='\0';
	}
	l=strlen(pt);
	printf("Cipher text is:");
	for(i=0;i<l;i=i+2)
	{
		for(j=i+1;j<i+2;j++)
		{
			for(p=0;p<5;p++)
			{
				for(q=0;q<5;q++)
				{
					if(pt[i]==tam[p][q])
					{
						rw1=p;cl1=q;
					}
					if(pt[j]==tam[p][q])
					{
						rw2=p;cl2=q;
					}
				}
			}
			if(rw1!=rw2 && cl1!=cl2)
			{
				printf("%c%c",tam[rw1][cl2],tam[rw2][cl1]);
			}
			else if(rw1==rw2)
			{
				cl1=cl1+1;cl2=cl2+1;
				if(cl1>lk)
					cl1=cl1-lk-1;
				if(cl2>lk)
					cl2=cl2-lk-1;
				printf("%c%c",tam[rw1][cl1],tam[rw2][cl2]);
			}
			else if(cl1==cl2)
			{
				rw1=rw1+1;rw2=rw2+1;
				if(rw1>lk)
					rw1=rw1-lk-1;
				if(rw2>lk)
					rw2=rw2-lk-1;
				printf("%c%c",tam[rw1][cl1],tam[rw2][cl2]);
			}
		}
	}
	printf("\n");
}