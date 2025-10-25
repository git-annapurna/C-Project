//Printing pattern - Upper right triangle
#include <stdio.h>
int main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(int  k=3;k>i;k--)
        {
            printf("*");
        }
        printf("\n");
    }
}



//Printing pattern 
#include<stdio.h>
int main()
{
    int num = 65;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            printf(" ");
        }
        for(int k=3;k>i;k--){
            printf("🙁");
        }
      
       for(int p=3;p>=i;p--){
            printf("🙁");
        }
        printf("\n*");
        for (int j = 4; j >i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
          for (int p = 1; p <= i; p++)
        {
            printf("*");
        }
        for (int p = 4; p > i; p--)
        {
            printf("*");
        }
        for(int k =3;k>i;k--){
            printf("*");
        }
        printf("\n");   
    }
}