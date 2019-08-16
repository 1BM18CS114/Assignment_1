#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b);
void main(){
	int a, b;
	clrscr();
	printf("Enter 2 number that you want to swap\n");
	scanf("%d\n%d", &a, &b);
	swap(&a, &b);
	printf("Now a is: %d and b is : %d", a, b);
	getch();
	}
void swap(int *a, int *b){
	int  x;
	x = *a;
	*a = *b;
	*b = x;
	}