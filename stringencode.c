#include<stdio.h>
StringEncode(char str[20],int n,char str2[20])
{
    int count=1,i,j,k=0,r,d,s;
    char ch;
    for(i=0;i<n;i++)
    {
        ch=str[i];
        if(ch==str[i+1])
        {
            count++;
            str2[k]=ch;
            str2[k+1]=count+48;
        }
        else
        {
            count=1;
            k=k+2;
            str2[k]=ch;
            str2[k+1]=count+48;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%c",str2[i]);
    }
}
int main()
{
    int n;
    char str[20],str2[20];
    printf("Enter Any String:\n");
    scanf("%s",str);
    n=strlen(str);
    StringEncode(str,n,str2);
}
