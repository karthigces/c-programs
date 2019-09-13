#include<stdio.h>
int numcmp(int a,int b)
{
    if(a>b)
        return 1;
    else
        return -1;
}
int swap(int *a,int *b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}
int AscDesc(int array1[10],int n)
{
    int i,j,temp=0,decision=1;
    for(i=0;i<n;i++)
    {
            for(j=i+1;j<n;j++)
            {
                if(numcmp(array1[i],array1[j])==decision)
                {
                    swap(&array1[i],&array1[j]);
                }
            }
            decision=decision*(-1);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }
}
int main()
{
    int array1[10]={1,2,3,4,5,6,7,8};
    int n=8;
    AscDesc(array1,n);

}
