//Number of digits in a number
#include <stdio.h>
int main()
{
    int n=234;
    int count=0;
    if(n==0)
    {
        count=1;
    }
    while (n>0)
    {
       count++;
       n=n/10;
    }
    printf("Number of digits in number = %d",count);
}    



//Printing only odd numbers upto 10
#include<stdio.h>
int main()
{
    for(int i=0;i<=10;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        printf("%d ",i);
    }
}



//Fibonacci series upto n terms   
#include<stdio.h>
int main()
{
    int t1=0;
    int t2=1;
    int next;
    int n=9;
    for(int i=1;i<=n;i++){
        printf("%d ",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
    }
}

