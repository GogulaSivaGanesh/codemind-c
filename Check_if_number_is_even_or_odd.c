#include<stdio.h>
int main()
{
    int a;
    char Even;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Even");
    }
    else if(a%2==1)
    {
        printf("Odd");
    }
    return 0;
}