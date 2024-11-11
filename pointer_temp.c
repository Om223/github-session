#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
int main()
{
    int a=90,b=10;

    printf("a=%d",a);
    printf("\nb=%d",b);

    swap(&a,&b);
    printf("\n\n\n");
    printf("a=%d",a);
    printf("\nb=%d",b);

}
