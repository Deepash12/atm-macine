#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char card_r[10] = "ramanand";
    char card_d[6] = "disha";
    char card_s[10] = "sourabh";
    char card[20];
    int doy_r = 2004, u_doy;
    int doy_d = 1984;
    int doy_s = 1997;
    float cash_r = 50000;
    float cash_d = 80000;
    float cash_s = 305000;
    char pin_s[5] = "8390";
    char pin_d[5] = "1972";
    char pin_r[5] = "5982";
    float withdraw;
    float deposit;
    char c_pin[4];
    char ch;
    int i;
    int choice;
    printf("WELCOME TO THE ATM\n\n");
    printf("PLEASE INSERT YOUR NAME WITHOUT SPACE :\n\n");
    scanf("%s", &card);
    if (strcmp(card, card_r) == 0)
    {
        printf("HELLO MR. RAMANAND SHASTRI\n");
        printf("YOUR ACCOUNT NUMBER IS : XXXXXXX4985\n");
    peen:
        printf("\n ENTER YOUR 4 - DIGIT PIN :");
        for (i = 0; i <= 3; i++)
        {
            ch = getch();
            c_pin[i] = ch;
            ch = '*';
            printf("%c", ch);
        }
        c_pin[4] = '\0'; // Null-terminate the c_pin array

        if (strcmp(pin_r, c_pin) != 0)
        {
            printf("\n INCORRECT PIN 1");
            printf("\n ENTER YOUR 4 - DIGIT PIN :");
            for (i = 0; i <= 3; i++)
            {
                ch = getch();
                c_pin[i] = ch;
                ch = '*';
                printf("%c", ch);
            }
            if (strcmp(pin_r, c_pin) != 0)
            {
                printf("\n INCORRECT PIN 2");
                printf("ENTER YOUR 4 - DIGIT PIN :");
                for (i = 0; i <= 3; i++)
                {
                    ch = getch();
                    c_pin[i] = ch;
                    ch = '*';
                    printf("%c", ch);
                }
            }
            else
            {
                goto amount;
            }

            if (strcmp(pin_r, c_pin) != 0)
            {
                printf("\n INCORRECT PIN 3 \n");
                printf("INVALID!!! \n");
                printf("YOUR CARD HAS BEEN BLOCKED \n");
            }
            else
            {
                goto amount;
            }
        }
        else
        {
            printf(" \nPIN SUCCESSFULLY VERIFIED\n");
            goto amount;

        amount:
            printf("\n");
            printf(">PRESS 1 : CHECK BALANCE\n");
            printf(">PRESS 2 : WITHDRAWL AMOUNT\n ");
            printf(">PRESS 3 : DEPOSIT AMOUNT\n ");
            printf(">PRESS 4 : CHANGE PIN NUMBER\n ");
            printf(">PRESS 0 : EXIT\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
            {
                printf("YOUR CURRENT BALANCE = %.2f", cash_r);
                goto amount;
            }
            break;
            case 2:
            {
                printf("ENTER THE AMOUNT WITHDRAWL : ");
                scanf("%f", &withdraw);
                if (cash_r >= withdraw)
                {
                    cash_r = cash_r - withdraw;
                    printf("CURRENT BALANCE = %.2f\n", cash_r);
                    goto amount;
                }
                else
                {
                    printf("INSUFFICIENT AMOUNT\n TRY AGAIN\n");
                    goto amount;
                }
            }
            break;
            case 3:
            {
                printf("ENTER AMOUNT :");
                scanf("%f", &deposit);
                cash_r = cash_r + deposit;
                printf("CURRENT BALANCE = %.2f\n", cash_r);
                goto amount;
            }
            break;
            case 4:
            {
                for (int i = 0; i <= 3; i++)
                {
                    pin_r[i] = '\0';
                }
            date:
                printf("\nENTER THE BIRTH YEAR OF USER:");
                scanf("%d", &u_doy);
                if (doy_r == u_doy)
                {
                    char new_pin[5]; // Temporary array to store the new PIN

                    printf("ENTER THE NEW PIN: ");
                    for (i = 0; i <= 3; i++)
                    {
                        ch = getch();
                        new_pin[i] = ch;
                        printf("*");
                    }
                    new_pin[4] = '\0'; 

                    printf("\n\nNEW PIN SUCCESSFULLY SET!\n");

                    strcpy(pin_r, new_pin);
                }
                else
                {
                    printf("INVALID YEAR BIRTH \n TRY AGAIN\n");
                    goto date;
                }
                goto peen;
            }
            break;
            case 0:
            {
                printf("THANK YOU FOR VISITING ATM \n");
                goto end;
            }
            default:
                printf("INVALID CHOICE!!\n");
            }
        }
    }
    else if (strcmp(card, card_d) == 0)
    {
        printf("HELLO MRS. DISHA AGARWAL\n");
        printf("YOUR ACCOUNT NUMBER IS : XXXXXXX5002\n");
    pin:
        printf("\n ENTER YOUR 4 - DIGIT PIN :");
        for (i = 0; i <= 3; i++)
        {
            ch = getch();
            c_pin[i] = ch;
            ch = '*';
            printf("%c", ch);
        }
        c_pin[4] = '\0'; 

        if (strcmp(pin_d, c_pin) != 0)
        {
            printf("\n INCORRECT PIN 1");
            printf("\n ENTER YOUR 4 - DIGIT PIN :");
            for (i = 0; i <= 3; i++)
            {
                ch = getch();
                c_pin[i] = ch;
                ch = '*';
                printf("%c", ch);
            }
            if (strcmp(pin_d, c_pin) != 0)
            {
                printf("\n INCORRECT PIN 2");
                printf("\n ENTER YOUR 4 - DIGIT PIN :");
                for (i = 0; i <= 3; i++)
                {
                    ch = getch();
                    c_pin[i] = ch;
                    ch = '*';
                    printf("%c", ch);
                }
            }
            else
            {
                goto newamount;
            }

            if (strcmp(pin_d, c_pin) != 0)
            {
                printf("\n INCORRECT PIN 3 \n");
                printf("INVALID!!! \n");
                printf("YOUR CARD HAS BEEN BLOCKED \n");
            }
            else
            {
                goto newamount;
            }
        }
        else
        {
            printf(" \nPIN SUCCESSFULLY VERIFIED\n");
            goto newamount;

        newamount:
        printf("\n");
            printf(">PRESS 1 : CHECK BALANCE\n");
            printf(">PRESS 2 : WITHDRAWL AMOUNT\n ");
            printf(">PRESS 3 : DEPOSIT AMOUNT\n ");
            printf(">PRESS 4 : CHANGE PIN NUMBER\n ");
            printf(">PRESS 0 : EXIT\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
            {
                printf("YOUR CURRENT BALANCE = %.2f", cash_d);
                goto newamount;
            }
            break;
            case 2:
            {
                printf("ENTER THE AMOUNT WITHDRAWL : ");
                scanf("%f", &withdraw);
                if (cash_d >= withdraw)
                {
                    cash_d = cash_d - withdraw;
                    printf("CURRENT BALANCE = %.2f\n", cash_d);
                    goto newamount;
                }
                else
                {
                    printf("INSUFFICIENT AMOUNT\n TRY AGAIN\n");
                    goto newamount;
                }
            }
            break;
            case 3:
            {
                printf("ENTER AMOUNT :");
                scanf("%f", &deposit);
                cash_d = cash_d + deposit;
                printf("CURRENT BALANCE = %.2f\n", cash_d);
                goto newamount;
            }
            break;
            case 4:
            {
                for (int i = 0; i <= 3; i++)
                {
                    pin_d[i] = '\0';
                }
            year:
                printf("\nENTER THE BIRTH  YEAR OF USER:");
                scanf("%d", &u_doy);
                if (doy_d == u_doy)
                {
                    char new_pin[5]; 

                    printf("ENTER TE NEW PIN: ");
                    for (i = 0; i <= 3; i++)
                    {
                        ch = getch();
                        new_pin[i] = ch;
                        printf("*");
                    }
                    new_pin[4] = '\0'; 

                    printf("\n\nNEW PIN SUCCESSFULLY SET!!\n");

                    strcpy(pin_d, new_pin);
                }
                else
                {
                    printf("INVALID BIRTH YEAR!! \n TRY AGAIN\n");
                    goto year;
                }
                goto pin;
            }
            break;
            case 0:
            {
                printf("THANK YOU FOR VISITING ATM \n");
                goto end;
            }
            default:
                printf("INVALID CHOICE!!\n");
            }
        }
    }
    else if (strcmp(card, card_s) == 0)
    {
        printf("HELLO MR.SOURABH RATHI \n");
        printf("YOUR ACCOUNT NUMBER IS : XXXXXXX5439\n");
    master:
        printf("\n ENTER YOUR 4 - DIGIT PIN :");
        for (i = 0; i <= 3; i++)
        {
            ch = getch();
            c_pin[i] = ch;
            ch = '*';
            printf("%c", ch);
        }
        c_pin[4] = '\0'; 

        if (strcmp(pin_s, c_pin) != 0)
        {
            printf("\n INCORRECT PIN 1");
            printf("\n ENTER YOUR 4 - DIGIT PIN :");
            for (i = 0; i <= 3; i++)
            {
                ch = getch();
                c_pin[i] = ch;
                ch = '*';
                printf("%c", ch);
            }
            if (strcmp(pin_s, c_pin) != 0)
            {
                printf("\n INCORRECT PIN 2");
                printf("\n ENTER YOUR 4 - DIGIT PIN :");
                for (i = 0; i <= 3; i++)
                {
                    ch = getch();
                    c_pin[i] = ch;
                    ch = '*';
                    printf("%c", ch);
                }
            }
            else
            {
                goto money;
            }

            if (strcmp(pin_s, c_pin) != 0)
            {
                printf("\n INCORRECT PIN 3 \n");
                printf("INVALID!!! \n");
                printf("YOUR CARD HAS BEEN BLOCKED!! \n");
            }
            else
            {
                goto money;
            }
        }
        else
        {
            printf(" \nPIN SUCCESSFULLY VERIFIED\n");
            goto money;
        money:
            printf("\n");
            printf(">PRESS 1 : CHECK BALANCE\n");
            printf(">PRESS 2 : WITHDRAWL AMOUNT\n ");
            printf(">PRESS 3 : DEPOSIT AMOUNT\n ");
            printf(">PRESS 4 : CHANGE PIN NUMBER\n ");
            printf(">PRESS 0 : EXIT\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
            {
                printf("YOUR CURRENT BALANCE = %.2f", cash_s);
                goto money;
            }
            break;
            case 2:
            {
                printf("ENTER THE AMOUNT WITHDRAWL : ");
                scanf("%f", &withdraw);
                if (cash_s >= withdraw)
                {
                    cash_s = cash_s - withdraw;
                    printf("CURRENT BALANCE = %.2f\n", cash_s);
                    goto money;
                }
                else
                {
                    printf("INSUFFICIENT AMOUNT\n TRY AGAIN\n");
                    goto money;
                }
            }
            break;
            case 3:
            {
                printf("ENTER AMOUNT :");
                scanf("%f", &deposit);
                cash_s = cash_s + deposit;
                printf("CURRENT BALANCE = %.2f\n", cash_s);
                goto money;
            }
            break;
            case 4:
            {
                for (int i = 0; i <= 3; i++)
                {
                    pin_s[i] = '\0';
                }
            data:
                printf("\nENTER THE BIRTH YEAR OF USER:");
                scanf("%d", &u_doy);
                if (doy_s == u_doy)
                {
                    char new_pin[5]; // Temporary array to store the new PIN

                    printf("ENTER THE NEW PIN: ");
                    for (i = 0; i <= 3; i++)
                    {
                        ch = getch();
                        new_pin[i] = ch;
                        printf("*");
                    }
                    new_pin[4] = '\0'; // Null-terminate the new_pin array

                    printf("\n\nNEW PIN SUCCESSFFULLY SET!\n");

                    strcpy(pin_s, new_pin);
                }
                else
                {
                    printf("INVALID BIRTH YEAR! \n TRY AGAIN\n");
                    goto data;
                }
                goto master;
            }
            break;
            case 0:
            {
                printf("THANK YOU FOR VISITING ATM \n");
                goto end;
            }
            default:
                printf("INVALID CHOICE!!\n");
            }
        }
    }
    else
    {
        printf("INVALID USER!!");
    }
end:
    return 0;
}