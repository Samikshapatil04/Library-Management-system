#include<stdio.h>
void issue1();
void issue2();
void issue3();
void issue4();
void issue5();
void issue6();
void issue7();
void issue8();
void issue9();
void issue10();
void returnn11();

int main()
{

int issue,choice=1;
char date[10];
do{
printf("\n\n\t*************************");
printf("\n\n\t*_______LIBRARY MANAGEMENT SYSTEM_________*");
printf("\n\n\t*************************");
printf("\n\n\t*_________LIST OF BOOKS___________*");
printf("\n\n\t*\tS.N\tBooks\t\t\tAuthors\t\tQuantity\n\t\t\t\t\t\t\t\t\t\t*");
printf("\n\t*\t 1\tNovel\t\t\tVikram Seth\t6\n\t\t\t\t\t\t\t\t\t\t*");
printf("\n\t*\t 2\tChaitali\t\tR.N.Tagore\t12\n\t\t\t\t\t\t\t\t\t\t*");
printf("\n\t*\t 3\tBeing Indian\t\tPawan Varma\t19\n\t\t\t\t\t\t\t\t\t\t*");
printf("\n\t*\t 4\tA Billion is Enough\tAshok Gupta\t21\n\t\t\t\t\t\t\t\t\t\t*");
printf("\n\t*\t 5\tMy Days\t\t\tR.K.Narayan\t30\n\t\t\t\t\t\t\t\t\t\t*");
printf("\n\t*\t 6\tNaked Triangle\t\tBalwant Gargi\t31\n\t\t\t\t\t\t\t\t\t\t*");
printf("\n\t*\t 7\tRiver Sutra\t\tGita Mehta\t9\n\t\t\t\t\t\t\t\t\t\t*");
printf("\n\t*\t 8\tSense of Timees\t\tH.S.Vatsyayan\t23\n\t\t\t\t\t\t\t\t\t\t*");
printf("\n\t*\t 9\tAmar Kosh\t\tAmar Singh\t6\n\t\t\t\t\t\t\t\t\t\t*");
printf("\n\t*\t 10\tArea of Darkness\tV.S.Naipul\t16\n\t\t\t\t\t\t\t\t\t\t*");
printf("\n\t**************************");
printf("\n\n\t*___11______For Return Book_________*");
printf("\n\n\n\t*************************");


printf("\n\n\t\t\t**Go for Issue any Book You want to Read**\n");

printf("\n\n\t\t Enter Your Choice !\n\t\t");
scanf("%d", &issue);

switch(issue){

case 1:
issue1();
break;

case 2:
issue2();
break;

case 3:
issue3();
break;

case 4:
issue4();
break;

case 5:
issue5();
break;

case 6:
issue6();
break;

case 7:
issue7();
break;

case 8:
issue8();
break;

case 9:
issue9();
break;

case 10:
issue10();
break;

case 11:
returnn11();
break;

default:
printf("\n\tEnter the Valid Number\n");
}
printf("\n\n\t\t Do You Want To Issue another Book ? \n\t\tPress1-Yes \t\t Press0-no\n\t\t\n");
scanf("%d", &choice);
} while(choice==1);
return 0;
}

void issue1()       //function definition
{
int quant,num1,result;
char num2[10];
printf("\n\n \t\t___Providing steps for Issuing Book___\n");
printf("\n\n\t\tEnter the No. of Book You want to Issue:\n\t\t");
  scanf("\n\n%d", &num1);
if( num1 <= 6)
{
printf("\n\n\t\t You can Take Books.\n");
printf("\n\n\t\tEnter the Today's Date:\n\t\t");
scanf("\n%s", &num2);
printf("\n\n\t\tBook Issued Successfully!!!\n");
printf("\n\n\t\tYou have to Return Books after 15 days from the issue date.\n\t\t");
printf("\n\n\t\t**Thank You**\n");
}
else
printf("\n\n\t\tBooks not Available!!!\n");
printf("\n\n\t\t**Thank You**\n");

}



void issue2()       //function definition
{
int quant, num1,result;
char num2[10];
printf("\n\n \t\t___Providing steps for Issuing Book___\n");
printf("\n\n\t\tEnter the No. of Book You want to Issue:\n\t\t");
scanf("\n\n%d", &num1);
if(num1 <=12)
{
printf("\n\n\t\t You can Take Books.\n");
printf("\n\n\t\tEnter the Today's Date:\n\t\t");
scanf("\n%s", &num2);
printf("\n\n\t\tBook Issued Successfully!!!\n");
printf("\n\n\t\tYou have to Return Books after 15 days from the issue date.\n\t\t");
printf("\n\n\t\t**Thank You**\n");
}
else
printf("\n\n\t\tBooks not Available!!!\n");
printf("\n\n\t\t**Thank You**\n");
}

void issue3()       //function definition
{
int quant, num1,result;
char num2[10];
printf("\n\n\t\t ___Providing steps for Issuing Book___\n");
printf("\n\n\t\tEnter the No. of Book You want to Issue:\n\t\t");
scanf("\n\n%d", &num1);
if(num1 <=19)
{
printf("\n\n\t\t You can Take Books.\n");
printf("\n\n\t\tEnter the Today's Date:\n\t\t");
scanf("\n%s", &num2);
printf("\n\n\t\tBook Issued Successfully!!!\n");
printf("\n\n\t\tYou have to Return Books after 15 days from the issue date.\n");
printf("\n\n\t\t**Thank You**\n");
}
else
printf("\n\n\t\tBooks not Available!!!\n");
printf("\n\n\t\t**Thank You**\n");
}


void issue4()       //function definition
{
int quant, num1,result;
char num2[10];
printf("\n\n\t\t___Providing steps for Issuing Book___\n");
printf("\n\n\t\tEnter the No. of Book You want to Issue:\n\t\t");
scanf("\n\n%d", &num1);
if(num1 <=21)
{
printf("\n\n\t\t You can Take Books.\n");
printf("\n\n\t\tEnter the Today's Date:\n\t\t");
scanf("\n%s", &num2);
printf("\n\n\t\tBook Issued Successfully!!!\n");
printf("\n\n\t\tYou have to Return Books after 15 days from the issue date.\n\t\t");
printf("\n\n\t\t**Thank You**\n");
}
else
printf("\n\n\t\tBooks not Available!!!\n");
printf("\n\n\t\t**Thank You**\n");
}


void issue5()       //function definition
{
int quant, num1,result;
char num2[10];
printf("\n\n\t\t ___Providing steps for Issuing Book___\n");
printf("\n\n\t\tEnter the No. of Book You want to Issue:\n\t\t");
scanf("\n\n%d", &num1);
if(num1 <=30)
{
printf("\n\n\t\t You can Take Books.\n");
printf("\n\n\t\tEnter the Today's Date:\n\t\t");
scanf("\n%s", &num2);
printf("\n\n\t\tBook Issued Successfully!!!\n");
printf("\n\n\t\tYou have to Return Books after 15 days from the issue date.\n");
printf("\n\n\t\t**Thank You**\n");
}
else
printf("\n\n\t\tBooks not Available!!!\n");
printf("\n\n\t\t**Thank You**\n");
}


void issue6()       //function definition
{
int quant, num1,result;
char num2[10];
printf("\n\n\t\t ___Providing steps for Issuing Book___\n");
printf("\n\n\t\tEnter the No. of Book You want to Issue:\n\t\t");
scanf("\n\n%d", &num1);
if(num1 <=31)
{
printf("\n\n\t\t You can Take Books.\n");
printf("\n\n\t\tEnter the Today's Date:\n\t\t");
scanf("\n%s", &num2);
printf("\n\n\t\tBook Issued Successfully!!!\n");
printf("\n\n\t\tYou have to Return Books after 15 days from the issue date.\n");
printf("\n\n\t\t**Thank You**\n");
}
else
printf("\n\n\t\tBooks not Available!!!\n");
printf("\n\n\t\t**Thank You**\n");
}


void issue7()       //function definition
{
int quant, num1,result;
char num2[10];
printf("\n\n \t\t___Providing steps for Issuing Book___\n");
printf("\n\n\t\tEnter the No. of Book You want to Issue:\n\t\t");
scanf("\n%d", &num1);
if(num1 <=9)
{
printf("\n\n \t\tYou can Take Books.\n");
printf("\n\n\t\tEnter the Today's Date:\n\t\t");
scanf("\n%s", &num2);
printf("\n\n\t\tBook Issued Successfully!!!\n");
printf("\n\n\t\tYou have to Return Books after 15 days from the issue date.\n");
printf("\n\n\t\t**Thank You**\n");
}
else
printf("\n\n\t\tBooks not Available!!!\n");
printf("\n\n\t\t**Thank You**\n");
}


void issue8()       //function definition
{
int quant, num1,result;
char num2[10];
printf("\n\n\t\t ___Providing steps for Issuing Book___\n");
printf("\n\n\t\tEnter the No. of Book You want to Issue:\n\t\t");
scanf("\n\n%d", &num1);
if(num1 <=23)
{
printf("\n\n \t\tYou can Take Books.\n");
printf("\n\n\t\tEnter the Today's Date:\n\t\t");
scanf("\n%s", &num2);
printf("\n\n\t\tBook Issued Successfully!!!\n");
printf("\n\n\t\tYou have to Return Books after 15 days from the issue date.\n\t\t");
printf("\n\n\t\t**Thank You**\n");
}
else
printf("\n\n\t\tBooks not Available!!!\n");
printf("\n\n\t\t**Thank You**\n");
}


void issue9()       //function definition
{
int quant, num1,result;
char num2[10];
printf("\n\n\t\t___Providing steps for Issuing Book___\n");
printf("\n\n\t\tEnter the No. of Book You want to Issue:\n\t\t");
scanf("\n\n%d", &num1);
if(num1 <=6)
{
printf("\n\n\t\t You can Take Books.\n");
printf("\n\n\t\tEnter the Today's Date:\n\t\t");
scanf("\n%s", &num2);
printf("\n\n\t\tBook Issued Successfully!!!\n");
printf("\n\n\t\tYou have to Return Books after 15 days from the issue date.\n");
printf("\n\n\t\t**Thank You**\n");
}
else
printf("\n\n\t\tBooks not Available!!!\n");
printf("\n\n\t\t**Thank You**\n");
}

void issue10()       //function definition
{
int quant, num1,result;
char num2[10];
printf("\n\n\t\t ___Providing steps for Issuing Book___s\n");
printf("\n\n\t\tEnter the No. of Book You want to Issue:\n\t\t");
scanf("\n\n\t\t%d", &num1);
if(num1 <=16)
{
printf("\n\n \t\tYou can Take Books.\n");
printf("\n\n\t\tEnter the Today's Date:\n\t\t");
scanf("\n\t\t%s", &num2);
printf("\n\n\t\tBook Issued Successfully!!!\n");
printf("\n\n\t\tYou have to Return Books after 15 days from the issue date.\n");
printf("\n\n\t\t**Thank You**\n");
}
else
printf("\n\n\t\tBooks not Available!!!\n");
printf("\n\n\t\t**Thank You**\n");
}




void returnn11()       //function definition
{

int book;
char date[10];
printf("\n\n\t\t ____Providing steps for Return Book___\n");
printf("\n\n\t\tEnter the No. of Book You want to Return:\n\t\t");
scanf("\n\n\t\t%d", &book);
printf("\n\n\t\tEnter the Today's Date:\n\t\t");
scanf("\n\t\t%s", &date);
printf("\n\n\t\tBook Returned Successfully!!!\n");
printf("\n\n\t\t**Thank You**\n");

}
