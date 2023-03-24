#include<stdio.h>
int swap(int *p ,int *q);
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a=%d,b=%d ",a,b);
    return 0;
}
int swap(int *p ,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
    return *p,*q;
    
}