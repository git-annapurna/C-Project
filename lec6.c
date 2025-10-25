/*
//Check whether number is Prime or not
#include <stdio.h>
int main()
{
    int n = 6;
    int i;
    if (n <= 1)
    {
        printf("Not prime !\n");
    }
    for (i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            printf("Not prime !\n");
            break;
        }
    }
    if(i>n/2)
     {
        printf("Prime !");
     }
}*/



//Check whether a number is paindrome or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int original=num;
    int res=0;
    while (num!=0)
    {
        int lastDigit=num%10;
        res =  res*10 +  lastDigit;
        num = num/10; 
    } //Once out of loop, num becomes 0 therefore using num = org  
    if(original==res){
        printf("Palindrome");
    }else{
        printf("Not palindrome");
    }
}



//Factorial of a number 
#include<stdio.h> 
int main()
{
    int i , n , fact=1;
    printf("Enter number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)  
    {
        fact=fact*i;
    }
    printf("Factorial=%d",fact);
}




//Use of break and continue
#include<stdio.h>
int main()
{

printf("Using break statement : ");
for (int i = 1; i <= 5; i++) 
{
    if (i == 3) break;;   // the loop breaks at i=3
    printf("%d ", i);
}

printf("\nUsing continue statement : ");
for (int i = 1; i <= 5; i++) 
{
    if (i == 3) continue;   //Loop skips i=3 but prints next values
    printf("%d ", i);
}

}

    

//Finding next prime number after a number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int candidate = n + 1;   // starting from next of input
 
    while (1) 
    {
        int isPrime = 1;    // assume prime

        for (int i = 2; i * i <= candidate; i++) 
        {
            if (candidate % i == 0)
             {
                isPrime = 0;   // factor found
                break;
             }
        }

        if (isPrime)
        {
            printf("Next prime number after %d is %d\n", n, candidate);
            break;   //Loop breaks
        }

        candidate++;  //Else check another number
    }

    return 0;

}