#include<stdio.h>
int main()
{
    int n,i,s1=0,s2=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1=s1+arr[i];
        }
        else
        {
            s2=s2+arr[i];
        }
    }
    printf("%d",s1-s2);
}