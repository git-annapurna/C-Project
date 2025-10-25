//Indian currency to USD
#include <stdio.h>
int main()
{
    int amount;
    printf("Enter a amount in indian currency : ");
    scanf("%d",&amount);

    char ch;
    printf("In which currency do you want to convert ?");
    scanf(" %c",&ch);

    switch (ch)
    {

       case '$':
             printf("%f",(float)amount/87);
             break;

       default: 
             printf("Invalid currency !");
             break;

    }
}


// bank account 
/* #include <stdio.h>
int main()
{
    int amt,bal=1000,ch;
    printf("\nChoices : ");
    printf("\n1.Check balance ");
    printf("\n2.Deposit ");
    printf("\n3.Withdraw ");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
   switch(ch)
   {

    case 1: printf("\nBalance amount : %d",bal);
            break;

    case 2 : printf("\nEnter amount to deposit: ");
            scanf("%d",&amt);
            bal+=amt;
            printf("\nCurrent Balance : %d",bal);
            break;

    case 3 : printf("\nEnter amount to withdraw: ");
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
} */