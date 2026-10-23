// Dtae/1/9/26    switch statement

#include <stdio.h>
#include <conio.h>
void main ()
{
 char ch;
 clrscr();
 printf("Menu\na. VadaPav\nb.MisalPav\nc.PuranPoli\n\n");
 printf("Enter your choice : ");
 scanf("%c",&ch);
 switch (ch){
 case 'a': printf("VadaPav");
 break;
 case 'b': printf("MisalPav");
 break;
 case 'c': printf("PuranPoli");
 break;
 default : printf("not available at this time");

 }




	getch();
}
