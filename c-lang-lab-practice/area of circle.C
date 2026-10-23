/* area of circle is area = pi*r*r
Date:24-aug-2026 , area=3.14*r*r
--------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
void main()
{


	float area,r,pi;
	clrscr();
	printf("\nEnter the radius of circle: ");
	scanf("%f",&r);
	pi = 3.14;
	area = pi*r*r;
	printf("\nThe Area of Circle is: %0.2f",area);





	getch();
}
