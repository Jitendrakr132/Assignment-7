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
        a=b;
        b=c;
    }
        printf("%d ",c);
}
