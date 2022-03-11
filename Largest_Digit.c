#include<stdio.h>
int main()
{
    int n,arr[100],rem,i,c=0,max;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        c++;
        arr[i]=rem;
        i++;
        n=n/10;
    }
    max=arr[0];
    for(i=0;i<c;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d",max);
}