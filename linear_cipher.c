#include<stdio.h>
#include<string.h>
int inverse(int k)
{
    int kinverse=0;
    for(int i=1;i<26;i++)
    {
        if((k*i)%26==1)
            kinverse=i;
    }
    return kinverse;
}
int main()
{
    int a,b,kinverse1,i,n;
    char plaintext[50],cipher[50],decipher[50];
    printf("enter the text:");
    scanf("%[^\n]",plaintext);
    while(1)
    {
        printf("enter the key1:");
        scanf("%d",&a);
        printf("enter the key2:");
        scanf("%d",&b);
        kinverse1=inverse(a);
        //kinverse2=inverse(b);
        if(kinverse1==0)
            printf("invalid key");
        else if((a>26)|(b>26))
            printf("invalid key");
        else
            break;

}
n=strlen(plaintext);
for(i=0;i<n;i++)
{
    cipher[i]=((a*(plaintext[i]-97)+b)%26)+97;

}
cipher[i]='\0';
printf("encrypted text:%s\n",cipher);
for(i=0;i<n;i++)
{
    decipher[i]=cipher[i]-b;
    if(decipher[i]<97)
        decipher[i]=decipher[i]+26;
    decipher[i]=((kinverse1*(decipher[i]-97))%26)+97;
}
decipher[i]='\0';
printf("decrypted text:%s\n",decipher);
return 0;
}

