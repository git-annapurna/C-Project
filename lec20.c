//Character array
#include <stdio.h>
int main() {
    char name[] = {'h','e','l','l','o'}; //No '\0'
    printf("Name: %c", name[0]);
    return 0;
}



//String
#include<stdio.h>
int main()
{
    char name[10]='hello';
    printf("%c",name[]);
}



//Check whether a string is palindrome or not
//Copying characters of string to another string
//Printing characters of the copied string
#include <stdio.h>
#include <string.h>
int main() 
{
    char name[] = "madam"; 
    int ln=strlen(name);
    int isTrue=1;
    int i;
    for(i=0;i<ln/2;i++){
        if(name[i]!=name[ln-i-1]){
            isTrue=0;
            break;
        }
    }
    if(isTrue==1){
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }

  char data[10];
  for(i=0;name[i]!='\0';i++){
    //Copying characters 
    data[i]=name[i];
   }
  data[i]='\0';
  printf("Copied string : %s\n",data);
  printf("Length of %s = %d\n",data,strlen(data));

  printf("Characters of the string :\n");
  i=0;
  while(name[i] != '\0') {
    printf("%c\n", name[i]);
    i++;
  }
  return 0;

}


//Printing string
#include <stdio.h>
int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);  //Stops reading at first space
    printf("You entered: %s\n", name);
    return 0;
}


#include <stdio.h>
int main() {
    char name[50];
    printf("Enter your full name: ");
    fgets(name);  //Reads whole line
    printf("You entered: %s\n", name);
    return 0;
}

String

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello";
    int freq[100]={0};
      int ln=strlen(str);
    for(int i=0;i<ln;i++){
        freq[str[i]]++;
    }
    for(int i=0;str[i]!='\0';i++){
        if(freq[i]>0){
            printf("%c: %d\n",i ,freq[i]);
        }
    }
    int vCount=0;
    int cCount=0;
  
    for(int i=0;i<ln;i++){
        char ch=str[i];
        if(ch=='a' || ch=='i' || ch=='o' || ch=='e' ||ch=='u'){
            vCount++;
        }else{
            cCount;
        }
    }
  
    int count;
    for (int i = 0; i < ln; i++)
    {count = 0;
        for (int j = 0; j < i; j++)
        {  if (str[i] == str[j]) {
                count++;
                break;  }
        }
        if (count == 0)
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}


int isTrue=1;
for(int i=0;i<ln/2;i++){
    if(str[i]!=str[ln-i-1]){
        isTrue=0;
        break;
    }

}
if(isTrue==1){

}

    char newStr[10];
   int ln=    strlen(str);
    for(int i=0;str[i]!='\0';i++){
        newStr[i]=str[i];
        // printf("%c\n",str[i]);
    }
    printf("%s",newStr);

#include <stdio.h>
#include <string.h>
int main(){
char str[]="hello";
 int count;
int ln=    strlen(str);
for(int i=0;i<ln-1;i++){
       count=0;
    for(int j=0;j<ln;j++){
    
        if(  str[i]==str[j]){
            count++;
        }
    }
    if(count==0){
        printf("%c",str[i]);
    }
}


"hello"


}



#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "abc";
    int freq[256] = {0};   
    int ln = strlen(str);

    for (int i = 0; i < ln; i++) {
        freq[str[i]]++; 
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}