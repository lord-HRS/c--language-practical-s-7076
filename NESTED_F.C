// Date\6\9\26      topic : Nesting of loops;
#include<stdio.h>
#include<conio.h>
void main()
{

	int i,j;
	clrscr();
	for(j=1; j<=100; j++){  //Nesting of loops {
	for(i=1; i<=4; i++){
	printf("%d\n",i);
	}
					       //}
	printf("out of the loop\n");
	}
	printf("out\n");










	getch();
}