// Dtae/1/9/26    switch statement

#include <stdio.h>
#include <conio.h>
void main ()
{
 char ch;
 clrscr();
 printf("Menu\na. Dos\nb.food\nc.maggi\n\n");
 printf("Enter your choice : ");
 scanf("%c",&ch);
 switch (ch){
 case 'a': printf("dosa");
 break;
 case 'b': printf("food");
 break;
 case 'c': printf("maggi");
 break;
 default : printf("go and coock");

 }




	getch();
}