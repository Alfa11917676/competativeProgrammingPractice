#include<stdio.h>
#include<math.h>
int main()
{
    int num=1,n,count,sum=0,fact;
    printf("Enter n:-\n");
    scanf("%d",&n);
    while (num<=n)
    {
        fact=1;
        for(count=1;count<=num;count++)
        {
            fact=fact*count;
        }
        sum=sum+pow(-1,num)*fact;
        num++;
    }
    printf("Sum of the series is   =>       %d\n",sum);
    return 0;
}
