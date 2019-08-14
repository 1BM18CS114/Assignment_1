#include<stdio.h>
#include<conio.h>
struct student{
	char id[20];
	int age;
	float marks;
	}s1;
void main(){
	int a;
	clrscr();
	printf("Enter Student Id:\n");
	gets(s1.id);
	printf("Enter Student age and marks:\n");
	scanf("%d\n%f", &s1.age, &s1.marks);
	if(s1.marks < 0 || s1.marks > 100){
		printf("Enter valid marks:\n");
		scanf("%f", &s1.marks);
		}
	if(s1.age <= 20){
		a = 20 - s1.age;
		printf("You have been deemed too young for this course try again in %d years", a);
		getch();
		exit();
		}
	if(s1.age > 20 && s1.marks >= 65)
		printf("You are Eligible!!");
	else
		printf("Not Eligible");
	getch();
}

