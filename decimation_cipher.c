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
    int key,kinverse,i,n;
    char plaintext[50],cipher[50],decipher[50];
    printf("enter the text:");
    scanf("%[^\n]",plaintext);
    while(1)
    {
        printf("enter the key:");
        scanf("%d",&key);
        kinverse=inverse(key);
        if(kinverse==0)
            printf("invalid key");
        else if(key>26)
            printf("invalid key");
        else
            break;

}
n=strlen(plaintext);
for(i=0;i<n;i++)
{
    cipher[i]=((key*(plaintext[i]-97))%26)+97;

}
cipher[i]='\0';
printf("encrypted text:%s\n",cipher);
for(i=0;i<n;i++)
{

    decipher[i]=((kinverse*(cipher[i]-97))%26)+97;
}
decipher[i]='\0';
printf("decrypted text:%s\n",decipher);
return 0;
}
