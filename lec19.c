//2-D array in spiral order
// 1 2 3 
// 4 5 6 
// 7 8 9
// in spiral order : 1 2 3 6 9 8 7 4 5
#include<stdio.h>
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int t = 0, b = 2;
    int left = 0, right = 2;

    while (t <= b && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            printf("%d ", arr[t][i]);
        }
        t++;

        for (int i = t; i <= b; i++)
            printf("%d ", arr[i][right]);
        right--;

        for (int i = right; i >= left; i--)
            printf("%d ", arr[b][i]);
        b--;

        for (int i = b; i >= t; i--)
            printf("%d ", arr[i][left]);
        left++;
    }
    return 0;
}



//Printing 1 2 3
//           5
//         7 8 9
#include <stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==0 || i==2){
                printf("%d ",arr[i][j]);
            }else if (j==3-i-1){
                printf(" %d",arr[i][j]);
            }else{
                printf(" ");
            }
        }printf("\n");
    }
}



//Maximum sum of an array when k=3
#include <stdio.h>
int main(){
    int arr[5]={1,-4,6,7,3};
    int k=3;
    int wSum=0;
    for(int i=0;i<k;i++){
        wSum+=arr[i]; //Takes sum of each 3 adjacent elements
    }
    int maxSum=wSum;
    for(int i=k;i<5;i++){
        wSum=wSum+arr[i]-arr[i-k]; //Add next element and sub first element of window
        if(wSum>maxSum){
            maxSum=wSum; 
        }
    }
    printf("Maximum sum = %d",maxSum);
}




//Converting 2-D array to 1-D array(by copying its elements)
#include<stdio.h>
int main()
{
    int arr[2][2]={{1,2},{3,4}};
    int arr1[4];
    int k=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
             arr1[k]=arr[i][j];
             k++;
        }
    }
    for(int i=0;i<4;i++){
        printf("%d ",arr1[i]);
    }
}