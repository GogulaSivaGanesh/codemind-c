#include<stdio.h>
int fun(int n);
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}
int fun(int n)
{
    int d,s=0;
    while(n)
    {
        d=n%10;
        n/=10;
        s+=d;
    }
    if(s<10)
    {
        printf("%d",s);
        return 0;
    }
    else
    {
        return fun(s);
    }
}