#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

void InfixtoPostfix(char infix[100]);
void push(char st[100], char val, int *top);
char pop(char st[100], int *top);
void main(){
	char infix[100];
	clrscr();
	printf("Enter an infix expression: ");
	gets(infix);
	InfixtoPostfix(infix);
	getch();
	}
void InfixtoPostfix(char infix[100]){
	char postfix[100], discard;
	int st[100], i = 0, j = 0, top = -1;
	while(infix[i] != '\0'){
		if(infix[i] == '('){
			push(st, infix[i], &top);
			i++;
			}
		else if(infix[i] == ')'){
			while(st[top] != '(' && top != -1){
					postfix[j] = pop(st, &top);
				j++;
				}
			if(top == -1){
				printf("Incorrect Expression!!\n\n");
				exit(1);
				}
			discard = pop(st, &top);
			i++;
			}
		else if(isalpha(infix[i])){
			postfix[j] = infix[i];
			j++;
			i++;
			}
		else if(infix[i] == '%' || infix[i] == '/' || infix[i] == '*'){
			postfix[j] = infix[i];
			j++;
			i++;
			}
		else if(infix[i] == '+' || infix[i] == '-'){
			if(st[top] == '%' || st[top] == '/' || st[top] == '*'){
				postfix[j] = pop(st, &top);
				j++;
				}
			push(st, infix[i], &top);
			}
		}
		printf("This is the postfix for given infix : \n");
		puts(postfix);
	}
void push(char st[100], char val, int *top){
	(*top)++;
	st[*top] = val;
	}
char pop(char st[100], int *top){
	char val;
	val = st[*top];
	(*top)--;
	return val;
	}

