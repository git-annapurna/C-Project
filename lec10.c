//Printing a hollow rectangle
#include <stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            // printf("*");
            if(i==1 || i==n || j==1 || j==n){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}



//Printing a magic square - sum of all rows/columns is same
#include <stdio.h>
int main() {
    int n = 3;  // 3x3 magic square
    int magic[3][3] = {0};

    int i = 0, j = n / 2;  // start position: first row, middle column

    for (int num = 1; num <= n * n; num++) {
        magic[i][j] = num;  // number place karo

        // next position calculate karo
        int newi = (i - 1 + n) % n;  // upar jao (wrap around)
        int newj = (j + 1) % n;      // right jao (wrap around)

        if (magic[newi][newj] != 0) {
            // agar already filled hai to neeche jao
            i = (i + 1) % n;
        } else {
            i = newi;
            j = newj;
        }
    }

    printf("Magic Square of size 3:\n");
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            printf("%3d ", magic[r][c]);
        }
        printf("\n");
    }

    return 0;
}



//Butterfly pattern
#include<stdio.h>
int main()
{
    for(int i=0;i<4;i++){
          for(int j=0;j<=i;j++){
            printf("*");
        }
        for(int k=3;k>i;k--){
            printf(" ");
        }
          for(int k=3;k>i;k--){
            printf(" ");
        }
        for(int p=0;p<=i;p++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<4;i++){
        for(int j=3;j>i;j--){
            printf("*");
        }
        for(int k=0;k<=i;k++){
            printf(" ");
        }
          for(int k=0;k<=i;k++){
            printf(" ");
        }
          for(int j=3;j>i;j--){
            printf("*");
        }
        printf("\n");
    }
}




//Prime numbers from 2 to n
 #include<stdio.h>
 int main()
 {   
       int n;
       printf("Enter number:");
       scanf("%d",&n);
       for(int i=2;i<=n;i++){
        int count=0;
        for(int j=1;j<=i;j++)
         if(i%j==0)
          count++;
        if(count==2)
         printf("%d\n",i);
       }
       return 0;
}