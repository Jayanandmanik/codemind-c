#include<stdio.h>
int main()
{
    int n,r,sum=0,x,temp;
    scanf("%d",&n);
    x:temp=n;
    sum=0;
    while(n)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    if(sum<=9)
    {
        printf("%d",sum);
    }
    else
    {
        n=sum;
        goto x;
    }
}