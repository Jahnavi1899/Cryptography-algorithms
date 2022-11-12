#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

void main()
{
	int i,c=0,j,p,ch,q=0,l,k=0,u=0;
	char pt[100]="";
	char ci[100]="";
	char key[100]="";
	char keyred[100]="";
	char cipher[100]="";
	char alpha[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
	char alp[50]="";
	printf("Enter the Keyword:");
	scanf(" %[^\n]%*c",key);
	l=strlen(key);
	keyred[0]=key[0];
	keyred[1]='\0';
	p=1;
	printf("\n%s\n",alpha);
	for(j=1;j<strlen(key);j++)
	{
		for(i=0;i<j;i++)
		{
			if(key[j]==keyred[i])
			{c=1;}
		}
		if(c==0)
		{
			keyred[p]=key[j];
			p++;
		}
		c=0;
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
	for(i=0;i<l;i++)
	{
		for(j=u;j<26;j=j+l)
		{
			alp[q]=cipher[j];
			q++;
		}
		u++;
	}
	printf("%s\n",alp);
	printf("\n1.Encrypt\n");
	printf("2.Decrypt\n");
	printf("\nSelect option:");
	scanf(" %d",&ch);
	if(ch==1)
	{
		printf("\nEnter plain text: ");
		scanf(" %s",pt);
		printf("\nCipher: ");
		for(i=0;i<strlen(pt);i++)
		{
			pt[i]=pt[i]-97;
			printf("%c",alp[pt[i]]);
		}
		printf("\n");
	}
	else if(ch==2)
	{
		printf("\nEnter Cipher text: ");
		scanf(" %s",pt);
		printf("\nWord: ");
		for(i=0;i<strlen(pt);i++)
		{
			for(j=0;j<27;j++)
			{

				if(pt[i]==alp[j])
				{
					printf("%c",alpha[j]);
					break;
				}
			}
		}
		printf("\n");
	}
}

