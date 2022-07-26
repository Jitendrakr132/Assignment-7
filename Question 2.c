#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c;
    int i;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=a,b=1;i<=n;i++)
    {
        c=a+b;
     printf("%d ",c);
      a=b;
      b=c;
    }
}

