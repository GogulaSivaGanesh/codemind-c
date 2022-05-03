#include<stdio.h>
int main()
{
	
    int a,b,total; 
    scanf("%d%d",&a,&b);
    total= (1*a)+(2*b); 
    if(a==0 && b==0)
	{
	  printf("YES");
	}
    else if(a==0 && b%2!=0)
	{
	  printf("NO");
    }
    else if(total%2==0)
	{
	  printf("YES");
	}
	else
	{
	  printf("NO");
    }
}
