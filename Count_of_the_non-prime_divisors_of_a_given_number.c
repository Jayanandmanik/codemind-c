#include<stdio.h>
int prime(int n)
{
    int i,c=0,k=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    return 1;
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(prime(i))
            {
                continue;
            }
            else
            {
                c++;
            }
        }
    }
    printf("%d",c);
    
    
}