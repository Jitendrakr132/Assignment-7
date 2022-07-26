#include<stdio.h>
int main()
{
    int a,b,min;
    printf("Enter the number");
    scanf("%d %d",&a,&b);
    min=a>b?a:b;
    while(1)
    {
        if(a%min==0&&b%min==0)
        {
        printf("%d",min);
        break;
    }
    min--;
}

}
