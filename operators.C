// c lab practical, all operations
#include<stdio.h>
#include<conio.h>
void main()
{

	int a,b,x;
	clrscr();
	a =10;
	b = 3;
	printf("arithmetic operatioons");

	printf("a+b = %d\n", a+b);
	printf("a-b = %d\n",a-b);
	printf("a*b = %d\n",a*b);
	printf("a/b = %d\n",a/b);
	printf("a%%b = %d\n\n\n",a%b);
printf("---------------------------------------------------------------------------------------------------------\n");
       printf("relation opreatiors");


	printf("a > b = %d\n", a>b);
	printf("a < b = %d\n",a < b);
	printf("a >= b = %d\n",a >= b );
	printf("a <= b =%d\n",a <= b);
	printf("a == b = %d\n",a == b);
	printf("a !=b = %d\n\n\n",a != b);

	printf("logically operators");

	printf("(a > b) && (a > 0) = %d\n", (a>b) && (a>0));
	printf("(a<b) || (a>0) = %d\n", (a<b)|| (a>0));
	printf("! (a>b) = %d\n\n\n", !(a>b));
printf("---------------------------------------------------------------------------------------------------------\n");

	printf("Assignment oerators\n\n");

	x = 10;
	printf("x = %d\n",x);


	x+=5;
	printf("x = %d\n",x);

	x-=3;
	printf("x = %d\n",x);

	x*=2;
	printf("x = %d\n",x);

	x/=4;
	printf("x = %d\n\n\n",x);

	printf("increment & decrement operators\n\n");

	x = 5;
	x++;

	printf("x =  %d\n",x);

	x--;
	printf("x = %d\n\n\n",x);
printf("---------------------------------------------------------------------------------------------------------\n");

	printf("Bitwise operaor\n\n");

	printf(" a&b = %d\n",a&b);
	printf("a|b= %d\n",a|b);
	printf("a^b=%d\n",a^b);
	printf("a~b= %d\n",~a);
	printf("a << 1= %d\n",a << 1);
	printf("a >> 1= %d\n\n\n",a >> 1);

	printf("---------------------------------------------------------------------------------------------------------");
	printf("Greater number = %d\n\n", (a>b) ? a : b);







	getch();
}
