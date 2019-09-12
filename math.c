#include<stdio.h>
/*Functions are should required in top product based companies*/
int display(int array3[10],int k)
{
    int i,j;
    for(i=0;i<k;i++)
    {
        printf("%d ",array3[i]);
    }
    printf("\n");
}
int Union(int array1[10],int array2[10],int a1size,int a2size)
{
    int array3[10]={0};
    int i,j,k=0,flag=0;
    for(i=0;i<a1size;i++)
    {
        array3[k]=array1[i];
        k++;
    }
    for(i=0;i<a2size;i++)
    {
        flag=0;
        for(j=0;j<a1size;j++)
        {
            if(array2[i]==array3[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            array3[k]=array2[i];
            k++;
        }
    }
    display(array3,k);
}
int Intersection(int array1[10],int array2[10],int a1size,int a2size)
{
    int array3[10]={0};
    int i,j,k=0,flag=0;
    for(i=0;i<a2size;i++)
    {
        for(j=0;j<a1size;j++)
        {
            if(array2[i]==array1[j])
            {
                array3[k]=array2[i];
                k++;
                break;
            }
        }
    }
    display(array3,k);
}
int Difference(int array1[10],int array2[10],int a1size,int a2size)
{
    int array3[10]={0};
    int i,j,k=0,flag=0;
    for(i=0;i<a1size;i++)
    {
        flag=0;
        for(j=0;j<a2size;j++)
        {
            if(array1[i]==array2[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            array3[k]=array1[i];
            k++;
        }
    }
    display(array3,k);
}
int main()
{
    int array1[10]={1,5,8,12,25,30},array2[10]={10,20,12,8};
    int a1size=6, a2size=4;
    Union(array1,array2,a1size,a2size);
    Intersection(array1,array2,a1size,a2size);
    Difference(array1,array2,a1size,a2size);
    Difference(array2,array1,a2size,a1size);
}
