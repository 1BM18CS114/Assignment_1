#include<stdio.h>
#include<conio.h>

int push(int *top, int obj[]);
void pop(int *top, int obj[]);
void display(int top, int obj[]);
void main(){
	int obj[3], top = 0, x;
	clrscr();
	while(top <= 3){
		printf("1 :Add, 2 :Remove, 3: Diplay elements, 4 :Exit\n");
		scanf("%d", &x);
		switch(x){
			case 1:
				obj[top] = push(&top, obj);
				break;
			case 2:
				pop(&top, obj);
				break;
			case 3:
				display(top, obj);
				break;
			case 4:
				exit(0);
			default:
				printf("Enter valid number\n\n\n");
				break;
			}
		}
	}
int push(int *top, int obj[]){
	int x;
	if(*top >= 3){
		printf("Sorry stack overflow\n\n\n");
		return obj[*top];
		}

	else{
		printf("Enter value to be added:\n");
		scanf("%d", &x);
		printf("Value added\n\n\n");
		(*top)++;
		return x;
		}
	}
void pop(int *top, int obj[]){
	if(*top == 0)
		printf("Sorry stack underflow\n\n\n");
	else{
		printf("%d removed\n\n\n", obj[*top]);
		(*top)--;
		}

	}
void display(int top, int obj[]){
	int i;
	if(top == 0){
		printf("No values in stack!!!\n\n\n");
		}
	else{
		for(i=top; i>0; i--){
			printf("%d\n", obj[i]);
			}
		}
	}