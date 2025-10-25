/*//Sum of digits of a number
#include <stdio.h>
int main()
{
    int num=2456;
    int sum=0;
    while (num>0)
    { int lastDigit=num%10;
       sum=sum+lastDigit;
       num=num/10;      
    }
    printf("%d",sum);
}
*/


  //for loop with incrementing i
  /*#include<stdio.h>
    int main()
    {
      for(int i=0;i<=5;i++)
      {
       printf("hello\n");
       printf("%d\n",i);
      }
    }
  */


    //for loop with decrementing i    
    /*
    #include<stdio.h>
    int main()
    {
     for(int i=10;i>0;i--) 
      {
        printf("%d\n",i);
        if(i%2==1) 
         {
           printf("%d\n",i);     
         }
      }
    } */


   // Sum of numbers 1-5 
   /*#include<stdio.h>
   int main()
   {
    int sum=0;
    for(int i=1;i<=5;i++)
    {
        sum=sum+i;
    }
      printf("%d\n",sum); 
   }*/ 