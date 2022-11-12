#include<stdio.h>
#include<string.h>
int main()
{
char plain[50],cipher[50],decode[50];
int n,key,i;
printf("Enter the plain text:");
scanf("%[^\n]",plain);
n=strlen(plain);
printf("Enter the key:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
	if(plain[i]>=65 && plain[i]<=90)
    	{
        	cipher[i] = (plain[i]-65+key)%26+65;
    	}
	else{
        cipher[i]=(plain[i]-97+key)%26+97;
    	}


}
cipher[n]='\0';
printf("\nThe cipher text:");
printf("%s",cipher);
n=strlen(cipher);
for(int i=0;i<n;i++)
{
	decode[i]=(cipher[i]-key);
	if(decode[i]>=65 && decode[i]<=90)
	{
	    decode[i] = (decode[i]-65)%26+65;
	}
	else{
	    decode[i]=(decode[i]-97)%26+97;
	}
	
	//if(decode[i]<97)
	//{	decode[i]=decode[i]+26;
	//	decode[i]=(decode[i]-97)%26+97;
	//}
	//if(decode[i]=='T')
	//	decode[i]=' ';

}
decode[n]='\0';
printf("\nThe recovered plain text:");
printf("%s",decode);
}
