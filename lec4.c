// #include <stdio.h>
// int main(){

//     int amount;

//     printf("Enter a amount in indian ..");
//     scanf("%d",&amount);

//     char ch;
//     printf("In which currency do you want to convert ?");
//     scanf("%c",&ch);

//     switch (ch)
//     {
//     case '$':
//       printf("%f",(float)amount/87);
//       break;

//     case ''

//     // 0.87 ==1/87

//     default:
//         break;
//     }




#include <stdio.h>
int main()
{
    int amt,bal=1000,ch;
    printf("\nChoices : ");
    printf("\n1.check balance ");
    printf("\n2.deposit");
    printf("\n3.withdraw");
    printf("\nEnter choice : ");
    scanf("%d",&ch);
   switch(ch)
   {
    case 1: printf("\nThe Balance : %d",bal);
            break;
    case 2 : printf("\nEnter amount : ");
            scanf("%d",&amt);
            bal+=amt;
            printf("\nCurrent Balance : %d",bal);
            break;
    case 3 : printf("\nEnter amount: ");
            scanf("%d",&amt);
            if(amt<=bal)
            {
                bal=bal-amt;
                printf("\nWithdrawl successful\n current Balance : %d",bal);

            }
            else
            {
                printf("\nInsufficient Amount !!");
            }
   }
}