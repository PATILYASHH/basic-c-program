#include<stdio.h>
void main()
{
    while(1)
    {
        int i;
        char x;
        ask1:
        {
        printf("\nWhich place are you closest to?\n1.DAV College Road\n2.Cross Mall Road\n3.Survey Chock\n4.DL Road\n5.Bhel Chock\n6.Ghanta Ghar\n7.Chakrata Road\n8.Kishan Nagar\n\nCHOICE::: ");
        scanf("%d", &i);
        }
        if(i>=1 && i<=8)
        {
        printf("\n-----------------------------------------------------------------\n");
        if (i==1)
            printf("\nThe nearest repair shop is Prakriti Automobiles\n These are the contact details:7217477123\n");
        else if (i==2)
            printf("\nThe nearest repair shop is Kunu Automobile pvt ldt.\n These are the contact details:95288 18839\n");
        else if (i==3)
            printf("\nThe nearest repair shop is Rawat Automobile\n These are the contact details:9557121842\n");
        else if (i==4)
            printf("\nThe nearest repair shop is Jaanu repairing and spare parts dealer\n These are the contact details:7983001498\n");
        else if (i==5)
            printf("\nThe nearest repair shop is Nathani automobile and modifications\n These are the contact details:8218848239\n");
        else if (i==6)
            printf("\nThe nearest repair shop is Prateek Kumar Automobile\n These are the contact details:9973412612\n");
        else if (i==7)
            printf("\nThe nearest repair shop is Manya Purr-Purr Automobile and Engineering\n These are the contact details:7017305442\n");
        else if (i==8)
            printf("\nThe nearest repair shop is Naina Automobile and Engineering\n These are the contact details:9044184929\n");
        printf("\n-----------------------------------------------------------------\n");
        }
        else
        {
            printf("\n.................\n| Invalid Input |\n.................\n");
            goto ask1;
        }
        ask2:
        {
        printf("\nDo you want to use the program again?\nIf yes then press 'y' else press 'n':");
        scanf(" %c",&x);
        if (x=='n' || x=='N')
        {
            printf("\nGlad to help you! See you next time:\n)");
            break;
        }
        else if(x=='y' || x=='Y')
        {
            printf("\nOkay! Here you go!\n How can I be of help again?\n");
        }
        else
        {
            printf("\n.................\n| Invalid Input |\n.................\n");
            goto ask2;
        }
        }
    }
}