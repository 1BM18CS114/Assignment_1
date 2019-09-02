#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void push(float st[100], float value, int *top);
float pop(float st[100], int *top);
float evaluate_postfix(char a[100]);
void main(){
	char postfix[100];
	float res;
	clrscr();
	printf("Enter postfix expression: ");
	gets(postfix);
	res = evaluate_postfix(postfix);
	printf("The reuslt is: %f", res);
	getch();
	}
float evaluate_postfix(char a[100]){
	int top = -1, i = 0;
	float st[100], x , y , res;
	while(a[i] != '\0'){
		if(isdigit(a[i]))
			push(st, (float)(a[i] - '0'), &top);
		else{
			y = pop(st, &top);
			x = pop(st, &top);
			switch(a[i]){
				case '+':
					res = x + y;
					break;
				case '-':
					res = x - y;
					break;
				case '/':
					res = x / y;
					break;
				case '*':
					res = x * y;
					break;
				case '%':
					res = (int)x % (int)y;
					break;
				}
			push(st, res, &top);
			}
		i++;
		}
	return(pop(st, &top));
	}
void push(float st[100], float value, int *top){
	if(*top == 99)
		printf("Stack Overflow");
	else{
		(*top)++;
		st[*top] = value;
		}
	}
float pop(float st[100], int *top){
	float val;
	if(*top == -1)
		printf("Stack Underflow");
	else{
		val = st[*top];
		(*top)--;
		}
	return(val);
	}





