//Removing a character from string
//Finding the first non-repeating character of the same string
//Frequency of characters of same string
#include <stdio.h>
#include <string.h>
int main(){
    char str[]="hello";
    char target='e';
    char newStr[100];
    int j=0;
    int ln=strlen(str);

    for(int i=0;i<ln;i++){
     if(str[i]!=target){
        newStr[j]=str[i];
        j++;
     }
    }
    printf("String after removal of target 'e' : '%s'\n",newStr);

    int freq[256]={0};
    for(int i=0;i<ln;i++){
        freq[str[i]]++;
    }
    int found=0;
    for(int i =0;i<ln;i++){
        if(freq[str[i]]==1){
            printf("First non-repeating character is '%c'\n",str[i]);
              found=1;
            break;
        }
    }
    
    printf("Frequency of characters :\n");
    for(int i=0;i<256;i++){
        if(freq[i]>0){
            printf("%c: %d\n",i,freq[i]);
        }
    }
}