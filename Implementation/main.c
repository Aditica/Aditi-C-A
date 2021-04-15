#include<stdio.h>
#include<stdlib.h>
int again;
int total=0;
float gst,cgst,sgst;
int grorate[7][2]={  {0,70},
                    {1,30},
                    {2,38},
                    {3,20},
                    {4,85},
                    {5,60},
                    {6,55}
                };
int fvrate[7][2]={{0,200},
                {1,80},
                {2,40},
                {3,60},
                {4,40},
                {5,20},
                {6,100}};
int di_rate[7][2]={{0,40},
                {1,400},
                {2,435},
                {3,700},
                {4,40},
                {5,600},
                {6,750}};
int purchased[][3]={{0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0}
                        };
int temp[][3]={{0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0}
                        };
void gro(char bfmenu[][100]);
void fv( char fvmenu[][100]);
void di(char dimenu[][100]);
void main_menu();
void display();
void fv_menucard();
void di_menu();
void display_gro_bill(char gromenu[][100]);
void display_fv_bill(char fvmenu[][100]);
void display_di_bill(char dimenu[][100]);
void display_gromenu();
void repeatgro(char gromenu[][100]);
void repeatfv(char fvmenu[][100]);
void repeatdi(char dimenu[][100]);
void display_total_words();
void main()
{
    char gromenu[][100]={"Rice","Wheat","Rava","Maida","Toor Dal","Horse Gram","Green Gram"};
    char fvmenu[][100]={"Apple","Banana","Chickoo","Orange","Papaya","Water Melon","Kiwi"};
    char dimenu[][100]={"Milk","Butter","Ghee","Cheese","Curd","Paneer","Khova"};
    char choice;
    
    do
    {
        enter:
        display();
        printf("Enter your choice here : ");
        scanf("%c", &choice);
        getchar();
        switch(choice)
        {
            case 'A':
            case 'a':printf("\nGROCERIES\n");
                    gro(gromenu);
                    break;
            case 'B':
             case 'b':printf("\nFRUITS & VEGETABLES\n");
                    fv(fvmenu);
                    break;
             case 'C':
            case 'c':printf("\nDAIRY ITEMS\n");
                    di(dimenu);
                    break;
            case 'D':
            case 'd':printf("\nDAILY NEEDS\n");
                    printf("Not Updated !!!");
                    break;
            case 'E':
            case 'e':printf("\nCOSMETICS\n");
                     printf("Not Updated !!!");
                    break;
            case 'F':
            case 'f':printf("\nCLOTHING\n");
                    printf("Not Updated !!!");
                    break;
            case 'G':
            case 'g':printf("\nTOYS\n");
                    printf("Not Updated !!!");
                    break;
           default:printf("\nWrong choice entered Please enter the valid choice!!\n");
                    goto enter;
        }
    }while(choice!='h');
}

// Main Items Display
void display()
{
    printf("*** L & T Technology Services Mini Project by Aditi CA***");
    printf("                Welcome to REAL FRESH SUPERMART          \n ");
    printf("        +===============================================+          \n\n");
    printf("  Please select the items that you would like to purchase \n\n");
    printf("\t\t      [A] GROCERIES\n");
    printf("\t\t      [B] FRUITS & VEGETABLES\n");
    printf("\t\t      [C] DAIRY ITEMS\n");
    printf("\t\t      [D] DAILY NEEDS\n");
    printf("\t\t      [E] COSMETICS\n");
    printf("\t\t      [F] CLOTHING\n");
    printf("\t\t      [G] TOYS\n");
}


// Groceries Menu Display
void display_gromenu()
{
    printf("                Welcome to REAL FRESH SUPERMART          \n ");
    printf("        +===============================================+          \n");
    printf("                       $  Groceries Menu  $ \n\n");
    printf("   Please select the groceries that you would like to purchase \n\n");
    printf("\t\t   [0] Rice - Rs 70.00\n");
    printf("\t\t   [1] Wheat - Rs 30.00\n");
    printf("\t\t   [2] Rava - Rs 38.00\n");
    printf("\t\t   [3] Maida - Rs 20.00\n");
    printf("\t\t   [4] Toor Dal - Rs 85.00\n");
    printf("\t\t   [5] Horse Gram - Rs 60.00\n");
    printf("\t\t   [6] Green Gram - Rs 55.00\n");
}
void gro(char gromenu[][100]) //Goceries Menu Screen
{
    int choice = 0; //local variables
    int quantity = 0;
    int again = 0,amt=0;
    int code,i;
    display_gromenu();
    printf("\nEnter the code:: ");
    scanf("%d", &code);
    getchar();
    if(code>=0&&code<=6)
    {
        printf("\nEnter the quantity::");
        scanf("%d",&quantity);
        purchased[code][1]= quantity*grorate[code][1]; /*purchased[code][1]+ (quantity*bfrate[code][1]);*/
        total+=purchased[code][1];
        gst=total*0.12;
        cgst=gst/2;
        sgst=cgst;
        total=total+gst;
    }
    else
    {
        printf("\nInvalid code entered, Please enter the code again!!!!\n\n");
        gro(gromenu);
    }
    repeatgro(gromenu);
}
void repeatgro(char gromenu[][100])
{
    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);
    if (again == 1)
            gro(gromenu);
    else if (again == 2 )
    {
        display_gro_bill(gromenu);
        exit(0);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");
        repeatgro(gromenu);
    }
}
void display_gro_bill(char gromenu[][100])
{
    int i;
    printf("\n+============================================================+");     
    printf("\n                   REAL FRESH SUPERMART                   \n");
    printf("+============================================================+\n");
    printf("                          INVOICE                \n");
    printf("+------------------------------------------------------------+\n");
    printf("\t\tITEMS\t\tPrice(in Rs.)\n");
    for(i=0;i<7;i++)
    {
        if(purchased[i][1]!=0)
        {
            printf("\t\t%s\t\t",gromenu[i]);
            printf("%d\n",purchased[i][1]);
        }
    }
    printf("+------------------------------------------------------------+\n");
    printf("GST=Rs.%0.2f\n",gst);
    printf("C-GST=Rs.%0.2f\n",cgst);
    printf("S-GST=Rs.%0.2f\n",sgst);
    printf("\nTotal=Rs.%d\n",total);
    display_total_words();
    printf("\n+============================================================+");

}


void display_fv_bill(char fvmenu[][100])
{
    int i;
    printf("\n+============================================================+");     
    printf("\n                   REAL FRESH SUPERMART                   \n");
    printf("+============================================================+\n");
    printf("                          INVOICE                \n");
    printf("+------------------------------------------------------------+\n");
    printf("\t\tITEMS\t\tPrice(in Rs.)\n");
    for(i=0;i<7;i++)
    {
        if(purchased[i][1]!=0)
        {
            printf("\t\t%s\t\t",fvmenu[i]);
            printf("%d\n",purchased[i][1]);
        }
    }
    printf("+------------------------------------------------------------+\n");
    printf("GST=Rs.%0.2f\n",gst);
    printf("C-GST=Rs.%0.2f\n",cgst);
    printf("S-GST=Rs.%0.2f\n",sgst);
    printf("\nTotal=Rs.%d\n",total);
    display_total_words();
    printf("\n+============================================================+");
}
void display_di_bill(char dimenu[][100])
{
    int i;
    printf("\n+============================================================+");     
    printf("\n                   REAL FRESH SUPERMART                   \n");
    printf("+============================================================+\n");
    printf("                          INVOICE                \n");
    printf("+------------------------------------------------------------+\n");
    printf("\t\tITEMS\t\tPrice(in Rs.)\n");
    for(i=0;i<7;i++)
    {
        if(purchased[i][1]!=0)
        {
            printf("\t\t%s\t\t",dimenu[i]);
            printf("%d\n",purchased[i][1]);
        }

    }
    printf("+------------------------------------------------------------+\n");
    printf("GST=Rs.%0.2f\n",gst);
    printf("C-GST=Rs.%0.2f\n",cgst);
    printf("S-GST=Rs.%0.2f\n",sgst);
    printf("\nTotal=Rs.%d\n",total);
    display_total_words();
    printf("\n+============================================================+");
}
void fv(char fvmenu[][100]) // Lunch Screen Menu
{
    int choice = 0; //local variables
    int quantity = 0;
    int again = 0,amt=0;
    int code,i;
    fv_menucard();
    printf("\nEnter the code:: ");
    scanf("%d", &code);
    getchar();
    if(code>=0&&code<=6)
    {
        printf("\nEnter the quantity::");
        scanf("%d",&quantity);
       // purchased[code][1]= purchased[code][1]+(quantity*lunchrate[code][1]);
        purchased[code][1]= quantity*fvrate[code][1];
         total+=purchased[code][ 1];
        gst=total*0.12;
        cgst=gst/2;
        sgst=cgst;
        total=total+gst;
    }
    else
    {
        printf("\nInvalid code entered, Please enter the code again!!!!\n\n");
         fv(fvmenu);
    }
    repeatfv(fvmenu);
}
void di(char dimenu[][100]) // Dinner Menu Screen
{
    int choice = 0; //local variables
    int quantity = 0;
    int again = 0,amt=0;
    int code,i;
    di_menu();

    printf("\nEnter the code:: ");
    scanf("%d", &code);
    getchar();
    if(code>=0&&code<=6)
    {
        printf("\nEnter the quantity::");
        scanf("%d",&quantity);
       // purchased[code][1]= purchased[code][1]+(quantity*dinner_rate[code][1]);
        purchased[code][1]= quantity*di_rate[code][1];
        total+=purchased[code][1];
        gst=total*0.12;
        cgst=gst/2;
        sgst=cgst;
        total=total+gst;
    }
    else
    {
        printf("\nInvalid code entered, Please enter the code again!!!!\n\n");
        di(dimenu);
    }
    repeatdi(dimenu);
}
void fv_menucard()
{
    printf("              Welcome to REAL FRESH SUPERMART          \n ");
    printf("             +============================+          \n\n");
    printf("                   $  Fruits and Vegetable Menu  $ \n\n");
    printf("   Please select the fruits and vegetables that you would like to purchase \n\n");
    printf("\t\t   [0] Apple - Rs 200.00\n");
    printf("\t\t   [1] Banana - Rs 80.00\n");
    printf("\t\t   [2] Chickoo - Rs 40.00\n");
    printf("\t\t   [3] Orange - Rs 60.00\n");
    printf("\t\t   [4] Papaya - Rs 40.00\n");
    printf("\t\t   [5] Water Melon - Rs 20.00\n");
    printf("\t\t   [6] Kiwi - Rs 100.00\n");
}
void di_menu()
{
    printf("                Welcome to REAL FRESH SUPERMART          \n ");
    printf("        +===============================================+          \n\n");
    printf("                    $  Dairy Items Menu  $ \n\n");
    printf("   Please select the Dairy Items that you would like to purchase.  \n\n");
    printf("\t\t   [0] Milk - Rs 40.00\n");
    printf("\t\t   [1] Butter - Rs 400\n");
    printf("\t\t   [2] Ghee - Rs 435.00\n");
    printf("\t\t   [3] Cheese - Rs 700.00\n");
    printf("\t\t   [4] Curd - Rs 40.00\n");
    printf("\t\t   [5] Paneer - Rs 600.00\n");
    printf("\t\t   [6] Khova - Rs 750.00\n");
}
void repeatfv(char fvmenu[][100])
{
    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);
    if (again == 1)
            fv(fvmenu);
    else if (again == 2 )
    {
        display_fv_bill(fvmenu);
        exit(0);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");
        repeatfv(fvmenu);
    }
}
void repeatdi(char dimenu[][100])
{

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);
    if (again == 1)
    {
        di(dimenu);
    }
    else if (again == 2 )
    {
        display_di_bill(dimenu);
        exit(0);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");
        repeatdi(dimenu);
    }
}
void display_total_words()
{
    int num=0,temp=0;
    while(total != 0)
    {
        num=(num * 10)+(total % 10);
        total/= 10;
    }
    printf("Amount in Words : ");
    while(num!= 0)
    {
        temp++;
        switch(num%10)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
        num = num / 10;
    }
    printf("Rupees Only");
    return;
}