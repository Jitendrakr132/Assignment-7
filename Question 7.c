#include<stdio.h>
int main()
{
    int i,n,a,b;
    int flag=0;
    printf("Enter the two numbers");
    scanf("%d %d",&a,&b);
    for(n=a;n<=b;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
                flag=1;
        }
        if(flag==0)
            printf("%d ",n);

    }
    return 0;
}

