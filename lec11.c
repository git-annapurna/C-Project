//Check if number is even or odd using UDfn
//Sum of two numbers using UDfn
#include <stdio.h>
void odd_even(int a){
   if(a%2==0){
    printf("Even\n");
   }else{
    printf("Odd\n");
   }
}

int sum(){
    int a=5;
    int b=5;
    printf("Sum of a and b = %d\n",a+b);
}

int main(){
     int a;
     printf("Enter a number : ");
     scanf("%d",&a);
     odd_even(a); //Call function
     sum(); //Call sum function  
   
    return 0;
}



//Printing pattern of x
#include<stdio.h>
int main()
{
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            if(i==j|| j==(4-i)){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }
}



//Sum using UDF
#include <stdio.h>
int sum(){
    int a=5;
    int b=10;
    int c=a+b;
    return c;
}
int main(){
   int  data= sum();
   printf("%d",data);
}



//Printing elements of array
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);  

    for (int i = 0; i < n; i++) {
         printf("%d ", arr[i]);
    }

    return 0;
}