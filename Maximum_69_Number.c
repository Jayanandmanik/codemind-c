#include<stdio.h>
int reverse(int n)
{
    int r,rev=0;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
 return rev;  
}
int main()
{
    int rem,num,c=0,temp;
    scanf("%d",&num);
    temp=reverse(num);
    while(temp)
    {
        rem=temp%10;
        if(rem==6 &&c==0)
        {
            printf("9");
            c=1;
        }
        else
        {
            printf("%d",rem);
        }
        temp=temp/10;
    }
}