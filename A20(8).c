#include<stdio.h>
void sum(int *ptr,int size);
int main()
{
   int a[]={2,4,62,1,5,56,8,4,23,6},i;
    sum(a,10);
    
    return 0;
}
void sum(int *ptr,int size)
{
    int i,j,sum=0;
    for(i=0;i<size-1;i++)
    {
        sum=sum+ptr[i];
    }
    printf("sum is %d",sum);
}