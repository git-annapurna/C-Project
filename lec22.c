//Sorting a string(Placing characters alphabetically)
//Check if substring exists 
//Finding the most frequent character
#include <stdio.h>
#include <string.h>
int main(){
    char str[]="bca";
        int ln=strlen(str);    
    for(int i=0;i<ln-1;i++){
        for(int j=i+1;j<ln;j++){
            if(str[i]>str[j]){
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("Sorted string : %s\n",str);

    char subStr[]="abc";
    if(strstr(str,subStr)!=NULL){
        printf("Substring exists !\n");
    }else{
        printf("Substring doesn't exist !\n");
    }

    char target[]="abc";
    int freq[256]={0};
    char result;
    int max=0;
    for(int i=0;i<ln;i++){
    freq[str[i]]++;
     }
    for(int i=0;i<ln;i++){
    if(freq[str[i]]>max){
        max=freq[str[i]];
        result=str[i];
       }
     }
   printf("Most frequent character is %c which occurs -> %d times",result,max);
}