//Largest element in an array
#include <stdio.h>
int main(){
    int arr[5]={1}; //Other values initialised with 0
    int max=arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]>max){
            max=arr[i];
        }     
    }
    printf("Maximum value is %d\n",max);
    printf("%d\n",arr[45]); //Prints random value or garbage value
    for(int i=2;i>=0;i--){
        //Prints arr[2] ---- arr[0] 
        printf("%d ",arr[i]);
    }
}



//Searching a number in an array
#include <stdio.h>
int main(){
int arr[5]={3,12,52,34,5};
int target=3;
int i;
for(i=0;i<5;i++){
    if(arr[i]==target){
        printf("Element found at index %d",i);
        break;
    }
}
if(i>4)
 {
    printf("Element not found !");
 }
}


//Sum of array elements
#include<stdio.h>
int main()
{
    int arr[5]={1,1,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("Sum = %d",sum);
}

