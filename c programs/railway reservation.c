#include <stdio.h>
#include<string.h>
struct air
{ 
char name[20];
int age;
long phno;
char address[50];
int ticketno;
}s[100];
void view();
void reserve();
void cancel();
void form();
void menu()
{ 
int ch;
printf("\tRAILWAY RESERVATION SYSTEM");
printf("\n\n1.VIEW ALL TRAINS");
printf("\n\n2.RESERVE A TICKET");
printf("\n\n3.CANCEL A TICKET");
printf("\n\n4.exit ");
printf("\nEnter your choice:\t");
scanf("%d",&ch);
switch(ch)
{ case 1: view();
menu();
break;
case 2: reserve();
menu();
break;
case 3: cancel();
menu();
break;
case 4:
break;
default:printf("\nenter a valid choice");
}
}
void view()
{
printf("CODE ROUTE TIMINGS ");
printf("\n1021 Delhi to Mumbai 06:30 ");
printf("\n1024 Delhi to kolkata 12:00 ");
printf("\n1098 Delhi to Amritsar 14:30 ");
printf("\n1987 Delhi to Banglore 18:00 ");
printf("\n1576 Delhi to chennai 20:00 ");
}
void form()
{
int i,n;
printf("\nenter the number of tickets:\t");
scanf("%d",&n);
for(i=0;i<n;i++)
{ 
printf("\nEnter the name");
scanf("%s",s[i].name);
printf("\n enter age:\t");
scanf("%d",&s[i].age);
printf("\nEnter the phone number");
scanf("%ld",&s[i].phno);
printf("\n Enter the address");
scanf("%s",s[i].address);
printf("\nenterur security number code");
scanf("%d",&s[i].ticketno);
}
printf("Your ticket is/are confirmed");
 }
void reserve()
{ 
int code,total_seats=100,reserved=0,Class;
if(reserved<total_seats)
{ reserved++;
printf("Enter the train code");
scanf("%d",&code);
if(code==1021||code==1024||code==1098||code==1987||code==1576)
 {
printf("\n 1.first Class(fare Rs1500 )");
printf("\n 2.second Class(fare Rs800)");
printf("\n 3.sleeper Class(fare Rs500)");
scanf("%d",&Class);

if(Class==1)
 {
printf("Your fare is Rs.1500");
form();
menu();
 }
else if(Class==2)
 {
printf("\nYour fare is Rs.800");
form();
menu();
 }
else if(Class==3)
 {
printf("\n Your fare is Rs.500");
form();
menu();
 }
else
 {
printf("Enter valid choice(1,2or 3)");
menu();
 }
}
else
printf("WARNING!YOU HAVE ENTERED THE WRONG CODE");
}
}
void cancel()
{
int ticket;
char ch;
int i,n;
printf("\n enter the number of ticket/s:\t");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the ticket no");
scanf("%d",&ticket);
if(ticket==s[i].ticketno)
{ printf("your ticket is cancelled");
 }
else
 {printf("ticket no is invalid");
menu();
}
}}
int main()
{
printf("\n WELCOME TO RAILWAY RESERVATION SYSTEM\n");
menu();
}
