#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c=0,s=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        c++;
    }
    n=temp;
    while(n>0)
    {
        r=n%10;
        s=s+pow(r,c);
        n=n/10;
        c--;
    }
    if(temp==s)
    {
        printf("True");
    }
    else
    printf("False");
    return 0;
}