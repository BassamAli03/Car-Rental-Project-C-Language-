
#include"Ourproj.h"
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct car
{
    char customername[50];
    char customerId[13];
    char carrented[20];
    int n,rent,days;
    int dr,mr,yr,dret,mret,yret;
};
void aaccess();
void change();
void replace();
void display();
void Close();
int date(int y1,int y2,int m1,int m2,int d1,int d2);
char carbrand[7][20]={"Tesla","Bmw","Ferrari","Porsche","Toyota","Honda","Ford"};
char carmodel[7][20]={"Tesla Model S","Z4(G29)","F8 Spider","Taycan","Supra","Civic","Mustang"};
int carseat[7]={4,2,2,2,2,5,4};
int carrentperday[7]={1500,900,1100,1000,800,700,750};
int carrentpermontly[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int z=0,u=0,mexit;
struct car c,ca[10],cr[10],cn={0};

void colorit(int col)
	{                  
		HANDLE hstdout;
		hstdout = GetStdHandle( STD_OUTPUT_HANDLE );
		                                //12=red, 15=white---------------->this.colorit(12);  this.colorit(15);
        SetConsoleTextAttribute( hstdout, col );
    }
void car_rent()
{
colorit(15);
	char d;
    int i,f;
    int t,days1=0,days2=0,days3=0;
    char ch;
    int j,x,h;
    printf("\n\t\t\t\tWELCOME CUSTOMER!!! \n");
    display();
    for(h=1;h<2;h++)
	{
	printf("\nEnter the brand of car you want to rent: ");
    scanf("%s",&c.carrented);
    if(strcmp(c.carrented,carbrand[0])==0)
    { 	
	usleep(500000);
   FILE *fptr;
   fptr=fopen("Tesla_Model_S.txt","r");
   while((d=fgetc(fptr))!=EOF) {
      printf("%c",d);
   }
   fclose(fptr);
}
    else if(strcmp(c.carrented,carbrand[1])==0)
    { usleep(500000);
   FILE *fptr;
   fptr=fopen("BmwZ4(G29).txt","r");
   while((d=fgetc(fptr))!=EOF) {
      printf("%c",d);
   }
   fclose(fptr);
}
    else if(strcmp(c.carrented,carbrand[2])==0)
    {usleep(500000);
   FILE *fptr;
   fptr=fopen("FerrariF8Spider.txt","r");
   while((d=fgetc(fptr))!=EOF) {
      printf("%c",d);
   }
   fclose(fptr);
}
    else if(strcmp(c.carrented,carbrand[3])==0)
    {usleep(500000);
   FILE *fptr;
   fptr=fopen("PorsceTaycan.txt","r");
   while((d=fgetc(fptr))!=EOF) {
      printf("%c",d);
   }
   fclose(fptr);
}
    else if(strcmp(c.carrented,carbrand[4])==0)
    {usleep(500000);
   FILE *fptr;
   fptr=fopen("ToyotaSupra.txt","r");
   while((d=fgetc(fptr))!=EOF) {
      printf("%c",d);
   }
   fclose(fptr);
}
    else if(strcmp(c.carrented,carbrand[5])==0)
    {usleep(500000);
   FILE *fptr;
   fptr=fopen("HondaCivic.txt","r");
   while((d=fgetc(fptr))!=EOF) {
      printf("%c",d);
   }
   fclose(fptr);
}
    else if(strcmp(c.carrented,carbrand[6])==0)
    {usleep(500000);
   FILE *fptr;
   fptr=fopen("FordMustang.txt","r");
   while((d=fgetc(fptr))!=EOF) {
      printf("%c",d);
   }
   fclose(fptr);
}
else
{
	printf("\nInvalid Brand Name.Enter Correct Brand:");
	h--;	
}
}
usleep(500000);
    printf("\nENTER DATE ON WHICH YOU WILL TAKE THE CAR(dd mm yyyy): ");
    scanf("%d%d%d",&c.dr,&c.mr,&c.yr);
    printf("\nENTER THE DATE ON WHICH YOU WILL RETURN THE CAR(dd mm yyyy): ");
    scanf("%d%d%d",&c.dret,&c.mret,&c.yret);
    printf("\nLETS CHECK WHETHER THE CAR IS AVAILABLE OR NOT\n");
       for(i=0;i<=11;i++)
       {
        if(strcmp(ca[i].carrented,c.carrented)==0)
        {
            for(t=0;t<=ca[i].mr;t++)
                days1+=carrentpermontly[t];
            for(t=0;t<=ca[i].mret;t++)
                days2+=carrentpermontly[t];
            for(t=0;t<=c.mr;t++)
                days3+=carrentpermontly[t];
            days1=days1+ca[i].dr;
            days2=days2+ca[i].dret;
            days3=days3+c.dr;
            if((days3-days1)*(days2-days3)>=0)
                f=1;
            else
            f=0;
            usleep(500000);
               if(f==1)
               {
                 printf("Car not available.Are you interested in trying another car?\nIf yes enter Y else enter N\n");
                 getchar();
                 scanf("%c",&ch);
                 if(ch=='y'||ch=='Y')
                 {
				 system("cls");
                    car_rent();}
                 else
                 {usleep(500000);
                     printf("THANKS FOR COMING!!PLEASE VISIT AGAIN \n\n\n");
                     break;
                 }
               }
        }
        else if(strcmp(ca[i].carrented,c.carrented)!=0 ||f==0)
        {usleep(600000);
            printf("CAR AVAILABLE!! \n");
            usleep(500000);
            FILE *fp;
            fp=fopen("Car_rent.txt","a");
            strcpy(ca[u].carrented,c.carrented);
            ca[u].dr=c.dr;
            ca[u].mr=c.mr;
            ca[u].yr=c.yr;
            ca[u].dret=c.dret;
            ca[u].mret=c.mret;
            ca[u].yret=c.yret;
            fwrite(&ca,sizeof(ca),1,fp);
            fclose(fp);
            printf("ENTER YOUR NAME: ");
            scanf("%s",c.customername);
            fflush(stdin);
            printf("ENTER YOUR ID NUMBER: ");
            scanf("%s",c.customerId);
            fflush(stdin);
            c.n=date(c.yr,c.yret,c.mr,c.mret,c.dr,c.dret);
            for(j=0;j<10;j++)
            {
                x=strcmp(c.carrented,carbrand[j]);
                if(x==0)
                    break;
            }
            c.rent=c.n*carrentperday[j];
            system("cls");
            usleep(500000);
            printf("WARNING: Extra Charges will be applied if any damage is done to the Car.\n");
            printf("\nCharge for damage to car=500");
              printf("\nCharge for late fees=75 per day");
              usleep(500000);
            printf("\n\n\t\t\t\tDetails:\n");
            printf("Name:\t%s\nID Number:\t%s\nCar Rented:\t%s\nNumber of days:\t%d\nTotal Rent:\t%d\n",c.customername,c.customerId,c.carrented,c.n,c.rent);
            strcpy(cr[z].customername,c.customername);
            strcpy(cr[z].customerId,c.customerId);
            strcpy(cr[z].carrented,c.carrented);
            cr[z].n=c.n;
            cr[z].rent=c.rent;
            FILE *fptr;
            fptr=fopen("Car_rent.txt","a+");
            fwrite(&cr,sizeof(cr),1,fptr);
            fclose(fptr);
            
            break;
        }
    }
    printf("PRESS ANY KEY TO CONTINUE ...");
  getch();
    system("cls");
}
int date(int y1,int y2,int m1,int m2,int d1,int d2)
{
    int i,days1=0,days2=0,days3=0 ;
        for(i=0;i<=m1;i++)
            days1=days1+carrentpermontly[i];
        for(i=0;i<=m2;i++)
            days2=days2+carrentpermontly[i];
        days1=days1+d1;
        days2=days2+d2;
    return(days2-days1);
}
void car_return()
{colorit(15);
    char id[13],T;
    int dd,mm,yy,d,m,y,flag=0,i,j,charge=500;;
    printf("Welcome back dear customer \n");
    printf("Please enter your id\n");
    scanf("%s",id);
    for(i=0;i<10;i++)
    { 
        if(strcmp(cr[i].customerId,id)==0)
        {printf("\nChecking....");
           usleep(700000);
		 system("cls");
            flag=1;
            printf("HELLO %s\n",cr[i].customername);
            printf("For confirmation, please enter the date on which you took the car in(dd mm yyyy)format.\n");
            scanf("%d%d%d",&dd,&mm,&yy);
            printf("Please enter the date on which you are returning the car in(dd mm yyyy)format.\n");
            scanf("%d%d%d",&d,&m,&y);
            printf("\nIs there any damage done to the car?Y/N?:");
            scanf(" %c",&T);
            cr[i].days=date(yy,y,mm,m,dd,d);
            if(cr[i].days>cr[i].n)
            {
                    cr[i].rent+=75*(cr[i].days-cr[i].n);
            }
            if(T=='Y'||T=='y')
            {
            	cr[i].rent+=charge;
			}
            printf("\nFinal Amount after Including any Late and damage fees:%d \n",cr[i].rent);
            printf("\n\n");
    printf("PRESS ANY KEY TO CONTINUE ...");
 getch();
    system("cls");
            break;
        }
    }
    if(flag==0)
           { printf("\nChecking....");
           usleep(500000);
             printf("\nCustomer not found\n");
             printf("\nPress any key ");
    		getch();
             system("cls");
           }
        else 
        {
            for(j=0;j<10;j++)
            {
                if(j==i)
                    memset(&cr[j].carrented[0],0,sizeof(cr[j].carrented[0]));
            }
        }
}
void display()
{
colorit(15);
	printf("\n");
    printf("\t\t\t\t-------------------------------------------------- \n");
    printf("\t\t\t\t|   Car Brand  |   Car Model   |  Rent per day   | \n");
    printf("\t\t\t\t|------------------------------------------------| \n");
    printf("\t\t\t\t|    %s     | %s |      %d       | \n",carbrand[0],carmodel[0],carrentperday[0]);
    printf("\t\t\t\t|    %s       |    %s    |      %d        | \n",carbrand[1],carmodel[1],carrentperday[1]);
    printf("\t\t\t\t|    %s   |    %s  |      %d       | \n",carbrand[2],carmodel[2],carrentperday[2]);
    printf("\t\t\t\t|    %s   |    %s     |      %d       | \n",carbrand[3],carmodel[3],carrentperday[3]);
    printf("\t\t\t\t|    %s    |    %s      |      %d        | \n",carbrand[4],carmodel[4],carrentperday[4]);
    printf("\t\t\t\t|    %s     |    %s      |      %d        | \n",carbrand[5],carmodel[5],carrentperday[5]);
    printf("\t\t\t\t|    %s      |    %s    |      %d        | \n",carbrand[6],carmodel[6],carrentperday[6]);
    printf("\t\t\t\t-------------------------------------------------- \n");
}
void Close(void)
{colorit(15);
    printf("\n\t\t\t\tThank You For choosing Our app. Please Come Again!");
    exit(0);
    }
void replace()
{colorit(15);
	char rep[20];
	char carbrand2[20];
	char carmodel2[20];
	int carrent2;
	int temp;
	system("cls");
    usleep(500000);
		display();
	printf("\nEnter the brand of the car you want to change?");
	scanf("%s",&rep);
	fflush(stdin);
	printf("\nEnter a new car brand:");
	scanf("%s",&carbrand2);
		fflush(stdin);
	printf("\nEnter new car model:");
	scanf("%s",&carmodel2);
		fflush(stdin);
	printf("\nEnter new rent for your new car:");
	scanf("%d",&carrent2);
	if(strcmp(rep,carbrand[0])==0)
	{
		strcpy(carbrand[0],carbrand2);
		strcpy(carmodel[0],carmodel2);
		temp=carrentperday[0];
		carrentperday[0]=carrent2;
	}
    else if(strcmp(rep,carbrand[1])==0)
	{
		strcpy(carbrand[1],carbrand2);
		strcpy(carmodel[1],carmodel2);
		temp=carrentperday[1];
		carrentperday[1]=carrent2;
	}
	else if(strcmp(rep,carbrand[2])==0)
	{
		strcpy(carbrand[2],carbrand2);
		strcpy(carmodel[2],carmodel2);
		temp=carrentperday[2];
		carrentperday[2]=carrent2;
	}
	else if(strcmp(rep,carbrand[3])==0)
	{
		strcpy(carbrand[3],carbrand2);
		strcpy(carmodel[3],carmodel2);
		temp=carrentperday[3];
		carrentperday[3]=carrent2;
	}
	else if(strcmp(rep,carbrand[4])==0)
	{
		strcpy(carbrand[4],carbrand2);
		strcpy(carmodel[4],carmodel2);
		temp=carrentperday[4];
		carrentperday[4]=carrent2;
	}
	else if(strcmp(rep,carbrand[5])==0)
	{
		strcpy(carbrand[5],carbrand2);
		strcpy(carmodel[5],carmodel2);
		temp=carrentperday[5];
		carrentperday[5]=carrent2;
	}
    else if(strcmp(rep,carbrand[6])==0)
	{
		strcpy(carbrand[6],carbrand2);
		strcpy(carmodel[6],carmodel2);
		temp=carrentperday[6];
		carrentperday[6]=carrent2;
	}printf("PRESS ANY KEY TO CONTINUE ...");
 getch();
	main();
}
void change()
{colorit(15);
	int rent,temp;
	char brand[20];		
	system("cls");
    usleep(500000);
	display();
	printf("\nEnter the brand of car you want to change rent of:");
	scanf("%s",&brand);
	fflush(stdin);
	if(strcmp(brand,carbrand[0])==0)
	{
		printf("\nEnter new rent:");
		scanf("%d",&rent);
		temp=carrentperday[0];
		carrentperday[0]=rent;
	}
	else if(strcmp(brand,carbrand[1])==0)
	{
		printf("\nEnter new rent:");
		scanf("%d",&rent);
		temp=carrentperday[1];
		carrentperday[1]=rent;
	}
	else if(strcmp(brand,carbrand[2])==0)
	{
		printf("\nEnter new rent:");
		scanf("%d",&rent);
		temp=carrentperday[2];
		carrentperday[2]=rent;
	}
	else if(strcmp(brand,carbrand[3])==0)
	{
		printf("\nEnter new rent:");
		scanf("%d",&rent);
		temp=carrentperday[3];
		carrentperday[3]=rent;
	}
	else if(strcmp(brand,carbrand[4])==0)
	{
		printf("\nEnter new rent:");
		scanf("%d",&rent);
		temp=carrentperday[4];
		carrentperday[4]=rent;
	}
	else if(strcmp(brand,carbrand[5])==0)
	{
		printf("\nEnter new rent:");
		scanf("%d",&rent);
		temp=carrentperday[5];
		carrentperday[5]=rent;
	}
	else if(strcmp(brand,carbrand[6])==0)
	{
		printf("\nEnter new rent:");
		scanf("%d",&rent);
		temp=carrentperday[6];
		carrentperday[6]=rent;
	}
	printf("PRESS ANY KEY TO CONTINUE ...");
 getch();
	main();
}
void aaccess()
{colorit(15);
	char d;
	FILE *fptr;
   fptr=fopen("Car_rent.txt","r");
   system("cls");
    usleep(500000);
   while((d=fgetc(fptr))!=EOF)
    {
      printf("%c",d);
    }
   fclose(fptr);
    printf("\nPRESS ANY KEY TO CONTINUE ...");
 getch();
   main();
}
int main()
{ static int COUNTER=0;  
colorit(15);
if(COUNTER==0)
{
	CAR();
	COUNTER++;
}
 system("cls");
    int q,p=0,g,h;
    char passuser[20],passworduser[20]="12345";
    char passadmin[20],passwordadmin[20]="54321";
    int user;
    
    for(g=1;g<=365;g++)
    {
        for(h=1;h<=10;h++)
        { 
        	printf("\n\t\t\t\tWELCOME TO OUR CAR RENTAL APPLICATION.\n");
        	
            printf("\n\t\t\t\tPress 1 for User Control. Press 0 for Admin Control.\n");
            scanf("%d",&p);
            if(p==1)
            {  
			 printf("\nAre you a 1)New User or 2)Existing User?");
                scanf("%d",&user);
                if(user==2)
                {
            	printf("\n\tEnter your Password(PASS Set to 12345 as of now):");
            	scanf("%s",&passuser);
            	if (strcmp(passuser,passworduser)==0)
                {
				system("cls");
				printf("\n\nPassword Matched!\nLOADING.........\n");
				usleep(500000);
                label:
                printf("\nHI!! What Would You Like To Do?\n 1)Rent a Car\n 2)Return a Car\n");
                scanf("%d",&q);
                switch(q)
                {
                    case 1:{system("cls");
                    usleep(500000);
					car_rent();
					u++;
					z++;
                    break;
					}
                    case 2:
                    	system("cls");
                    	usleep(500000);
					car_return();
                    break;
                    default:
					{
					printf("Wrong choice!! Try again.\n");
					usleep(500000);
                    goto label;
					}
                }
                }
                else
                {
                printf("\n\nWrong password!");
                 login_try:
                  printf("\nEnter 1 to try again and 0 to exit:");
                   scanf("%d",&mexit);
                    if (mexit==1)
                    { system("cls");

                        main();
                    }

                     else if (mexit==0)
                    {
                    Close();
					}
                     else
                    {
					printf("\nInvalid Number!");
					system("cls");
                    goto login_try;}
				}
			    }
				else if(user==1)
                {
                 	system("cls");
				usleep(500000);
                label3:
                printf("\nHI!! Guest Customer. What Would You Like To Do?\n 1)Rent a Car\n 2)Return a Car\n");
                scanf("%d",&q);
                switch(q)
                {
                    case 1:{system("cls");
                    usleep(500000);
					car_rent();
					u++;
					z++;
                    break;
					}
                    case 2:
                    	system("cls");
                    	usleep(500000);
					car_return();
                    break;
                    default:
					{
					printf("Wrong choice!! Try again.\n");
					usleep(500000);
                    goto label3;
				}
			}
		    }
		    else
		    {
		    	printf("\nInvalid Option. Try Again");
			}
		    }
            else if(p==0)
            {
            	printf("\n\tEnter your Password:");
            	scanf("%s",&passadmin);
            	if (strcmp(passadmin,passwordadmin)==0)
                {
				system("cls");
				printf("\n\nPassword Matched!\nLOADING.........\n");
				usleep(500000);
				label2:
                printf("\n\t\t\t\tWelcome ADMIN.");
                printf("\n1)Replace a car for an existing car");
                printf("\n2)Change rent of an existing car");
                printf("\n3)Read the existing records\n");
                scanf("%d",&q);
                switch(q)
                {
                    case 1:
					{ system("cls");
                    	usleep(500000);
					replace();
                    break;
					}
                    case 2:
                    	system("cls");
                    	usleep(500000);
					change();
                    break;
                    case 3:
                    	system("cls");
                    	usleep(500000);
                    aaccess();
                    default:
					{
					printf("Wrong choice!! Try again.\n");
					system("cls");
                    	usleep(500000);
                    goto label2;
			    }
			    }
			    }
			     else
                {
                printf("\n\nWrong password!");
                 login_try2:
                  printf("\nEnter 1 to try again and 0 to exit:");
                   scanf("%d",&mexit);
                    if (mexit==1)
                    {

                        main();
                    }

                     else if (mexit==0)
                    {
                    Close();
					}
                     else
                    {
					printf("\nInvalid Number!");
                    goto login_try2;
					}
				}	
			}
        }
    }
}
