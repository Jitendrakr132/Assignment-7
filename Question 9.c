#include<stdio.h>
int main()
{
    int n,sum=0,r,temp;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
       sum+=r*r*r;
       n=n/10;
    }
    if(temp==sum)
        printf("num is astrome");
    else
        printf("not arstrom");

return 0;
}
