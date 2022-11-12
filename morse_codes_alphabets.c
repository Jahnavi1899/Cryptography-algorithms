#include<stdio.h>
#include<stdlib.h>
char* morsecode(char,int);
int main()
{

    int n;char a[50];
    char* b[10];
    //printf("enter the no of numbers:");
    //scanf("%d",&n);
    //int a[n];
    printf("enter the string:");
    //for( int i=0;i<n;i++)
    //{
        scanf("%s",&a);
    //}
    printf("encoding:\n");
    for(int i=0;i<n;i++)
    {
        b[i]=morsecode(a[i],n);
        printf("%s",b[i]);
    }
    return 0;
}
char* morsecode(char no,int n)
{
    char* m=(char*)malloc(sizeof(char)*20);
    switch(no)
    {
        case '1': m=".----";
                return m;
                break;
        case '2': m="..---";
                return m;
                break;
        case '3': m="...--";
                return m;
                break;
        case '4': m="....-";
                return m;
                break;
        case '5': m=".....";
                return m;
                break;
        case '6': m="-....";
                return m;
                break;
        case '7': m="--...";
                return m;
                break;
        case '8': m="---..";
                return m;
                break;
        case '9': m="----.";
                return m;
                break;
        case '0': m="-----";
                return m;
                break;
        case 'A': m=".-";
                return m;
                break;
        case 'B': m="-...";
                return m;
                break;
        case 'C': m="-.-.";
                return m;
                break;
        case 'D': m="-..";
                return m;
                break;
        case 'E': m=".";
                return m;
                break;
        case 'F': m="..-.";
                return m;
                break;
        case 'G': m="--.";
                return m;
                break;
        case 'H': m="....";
                return m;
                break;
        case 'I': m="..";
                return m;
                break;
        case 'J': m=".---";
                return m;
                break;
        case 'K': m="-.-";
                return m;
                break;
        case 'L': m=".-..";
                return m;
                break;
        case 'M': m="--";
                return m;
                break;
        case 'N': m="-.";
                return m;
                break;
        case 'O': m="---";
                return m;
                break;
        case 'P': m=".--.";
                return m;
                break;
        case 'Q': m="--.-";
                return m;
                break;
        case 'R': m=".-.";
                return m;
                break;
        case 'S': m="...";
                return m;
                break;
        case 'T': m="-";
                return m;
                break;
        case 'U': m="..-";
                return m;
                break;
        case 'V': m="...-";
                return m;
                break;
        case 'W': m=".--";
                return m;
                break;
        case 'X': m="-..-";
                return m;
                break;
        case 'Y': m="-.--";
                return m;
                break;
        case 'Z': m="--..";
                return m;
                break;
        default: m="-1";
                 break;

    }
}

