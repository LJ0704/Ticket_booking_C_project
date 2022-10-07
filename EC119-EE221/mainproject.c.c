//A PROJECT ON BIKE AND CAR RENTALS
#include<math.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
void state();
void license();
void karnataka();
void andhrapradesh();
void bike();
void car();
int duration();
void main()
{
        //to get the information of the customer
        printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
        printf(" \t \t\t\tWELCOME TO CAR_BIKEZZ\n");
        printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
        int phonenum;
        char name[100],email[100];
        printf("ENTER NAME\t");
        scanf("%[^\n]",name);
        printf("\n");
        printf("ENTER PHONE NUMBER\t");
        scanf("%10d",&phonenum);
        printf("\n");
        printf("ENTER EMAIL\t");
        scanf("%s",email);
        printf("\n");
        printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
        printf(" \t \tOUR SERVICES ARE EXTENTED TO KARNATAKA  AND ANDHRA PRADESH\n");
        printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");

                state();

}

void state()
{
        char states[100];

        printf("ENTER THE STATE FROM WHERE YOU WANT TO START FROM\n");
        getchar();
        scanf("%[^\n]",states);
        /*if(toupper(states)=="KARNATAKA")*/
        if(strcmp(states,"karnataka")==0||strcmp(states,"KARNATAKA")==0)
        {
                karnataka();
        }
        else if(strcmp(states,"ANDHRA PRADESH")==0||strcmp(states,"andhra pradesh")==0)
        {
                andhrapradesh();
        }
        else
{
                printf("YOU ENTERED AN  INVALID STRING \n");
                state();
        }

        /*
        int n;
        printf("ENTER 1- FOR KARNATAKA\n ,2- FOR ANDRA PRADESH\n");
        scanf("%d",&n);
        */
        /*if(n==1)
        {
                karnataka();
        }
        else if(n==2)
        {
                andhrapradesh();
        }
        else
        {
                printf("INVALID NUMBER \n");
                state();
        }
        */
}
void karnataka()
{
        int a,i,b,o;
        printf("ENTER THE STARTING POINT\n");
        //starting point
        printf("ENTER \t1-BANGLORE\t2-MANGLORE\t3-COORG\n");
        scanf("%d",&a);
        if(a!=1&&a!=2&&a!=3)
        {
                printf("INVALID NUMBER\n");
                karnataka();
        }
        destination:
        printf("ENTER THE DESTINATION :\t1-BANGLORE\t2-MANGLORE\t3-COORG\n");
        scanf("%d",&b);
        if(b!=1&&b!=2&&b!=3)
        {
                printf("INVALID NUMBER\n");
                goto destination;
        }
        if(b==a)
        {
        printf("ENTER \n1-FOR BIKE\n2-FOR CAR\n");
        scanf("%d",&o);
        o==1?bike():o==2?car():printf("INVALID\n");
        }
        else
        {
car();
        }
}//end of function karnataka
void andhrapradesh()
{
        int a,i,b,o;
        printf("ENTER THE STARTING POINT\n");
        //starting point
        printf("ENTER \t1-VIZAG\t2-VIJAYAWADA\t3-HYDERABAD\n");
        scanf("%d",&a);
        if(a!=1&&a!=2&&a!=3)
        {
           andhrapradesh();
        }
        printf("ENTER THE DESTINATION :\t1-VIZAG\t2-VIJAYAWADA\t3-HYDERABAD\n");
        scanf("%d",&b);
        if(b==a)
        {
        printf("ENTER\n 1 FOR BIKE \n 2 FOR CAR\n");
        scanf("%d",&o);
         o==1?bike():o==2?car():printf("INVALID\n");
        }
        else
        {
                printf("INVALID ,PLEASE REE-ENTER\n");
                car();
        }
}//end of function andhrapradesh

        int duration()
        {
        int days ;
        printf("HOW MANY DAYS YOU WANT THE VEHICLES FOR\n");
        scanf("%d",&days);
        return (days);
        }
        void bike()
        {
        int i,d,day,amount,n;
        char e[10];
        day=duration();
        printf("ENTER THE NUMBER OF BIKES YOU WANT\n");
        scanf("%d",&n);
        amount=0;
        for(i=0;i<n;i++)
        {
        printf("ENTER \t 1)ROYAL ENFIELD\t2)PULSER\t3)ACTIVA\t4)APACHE\n");
        scanf("%d",&d);
        switch(d)
        {
                case 1:
                        amount=amount+4000+(day*500);
                        break;
case 2:
                        amount=amount+3500+(day*500);
                        break;
                case 3:
                        amount=amount+3000+(500*day);
                        break;
                case 4:
                        amount=amount+5000+(500*day);
                        break;

                default:
                        printf("SORRY BIKE NOT FOUND\n");
                        i--;
                        break;
        }
        }
         printf("THE AMOUNT TO BE PAID IN ADVANCED IS : %d \n",amount);
         printf("\n");
         FILE *f1;
         char c;
         f1=fopen("rules.c","r");
         while((c=getc(f1)) !=EOF)
         {
                 printf("%c",c);
         }
         fclose(f1);

         redo:
         printf("DO YOU WANT TO PAY (yes/no)\n");
         scanf("%s",e);
         if(strcmp(e,"yes")==0||strcmp(e,"YES")==0)
         {
                license();
         }
         else if(strcmp(e,"no")==0||strcmp(e,"NO")==0)
         {
                printf("THANK YOU FOR VISITING THIS PAGE\n");
         }
        else
        {
                goto redo;
                }
}
 void car()
{
         int d,i,day,x,amount=0,y;
         char e[10];
        day=duration();
        printf("ENTER THE NUMBER OF CARS REQUIRED\n");
        scanf("%d",&y);
        for(i=0;i<y;i++)
        {
        printf("ENTER THE NUMBER OF PEOPLE TRAVELLING IN THE CAR %d\n",i+1);
scanf("%d",&x);
        if(x<=5)
        {
        printf("ENTER \t1-SWIFT DESIRE\t2-BREEZA\t3-VERNA\n");
        scanf("%d",&d);
        switch(d)
        {
                case 1:
                         amount=amount+6500+(500*day);
                         break;
                case 2:
                         amount=amount+5000+(500*day);
                         break;
                case 3:
                         amount=amount+5500+(500*day);
                         break;
                default:
                         printf("SORRY CAR NOT FOUND\n");
                         i--;
                         break;
        }
        }
        else if(x>=6&&x<=9)
         {
        printf("ENTER\t1-INOVA\t2-SCORPIO\t3-XUV\n");
        scanf("%d",&d);
        switch(d)
        {
                case 1:
                          amount=amount+7500+(500*day);
                          break;
                case 2:
                          amount=amount+6000+(500*day);
                          break;
                case 3:
                          amount=amount+6500+(500*day);
                          break;
                default:
                          printf("SORRY CAR NOT FOUND\n");
                          i--;
                          break;
         }
         }
        }
         printf("THE AMOUNT TO BE PAID IN ADVANCED: %d\t",amount);
         printf("\n");
         FILE *f1;
         char c;
         f1=fopen("rules.c","r");
         while((c=getc(f1)) !=EOF)
         {
                 printf("%c",c);
         }
 fclose(f1);
        verify:
         printf("DO YOU WANT TO PROCEED TO PAY? (y/n)");
         scanf("%s",e);
         if(strcmp(e,"yes")==0||strcmp(e,"YES")==0)
         {
         license();
         }
         else if(strcmp(e,"no")==0||strcmp(e,"NO")==0)
         {
         printf("----------------------------------\n");
         printf("THANK YOU FOR VISITING THIS PAGE\n");
         printf("----------------------------------\n");
         }
         else
         {
                 goto verify;
         }
        }

void license()
{
        int year;
        printf("ENTER THE YEAR OF EXPIRY OF YOUR LICENSE\n");
        scanf("%4d",&year);
        if(year>=2020)
        {
        printf("SUMBIT YOUR LICENSE\n");
        printf("----------------------------------------------------------------------------------------\n");
        printf("THANKS FOR YOUR ORDER \n YOU CAN COME AND COLLECT YOUR VEHICLE FROM THE NEAR BY BRANCH \n");
        printf("-----------------------------------------------------------------------------------------\n");
        }
        else
        {
                printf("---------------------------------------------------------------\n");
                printf("YOUR LICENSE HAS BEEN EXPIRED\n THANK YOU\nPLEASE VISIT AGAIN!!!\n");
                printf("---------------------------------------------------------------\n");
        }
}
