#include<stdio.h>
int main()
{
    int n,i,sum=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<2*n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<2*n;i+=2)
    {
        sum=0;
        sum+=arr[i]+arr[i+1];
        printf("%d
",sum);
    }
}