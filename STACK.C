#include<stdio.h>
#include<conio.h>
int push(int peter_shirt, int *top);
int pop(int peter_shirt, int *top);
void main(){
	int x, stack[20], top = 0, peter_shirt = 0;
	clrscr();
	while(1){
		printf("%d shirts in the cupboard\n", peter_shirt);
		printf("Enter 1 for placing shirts\n");
		printf("Enter 2 for removing shirts\n");
		printf("Enter 3 to stop\n");
		scanf("%d", &x);
		switch(x){
			case 1:
				peter_shirt++;
				peter_shirt = push(peter_shirt, &top);
				break;
			case 2:
				peter_shirt--;
				peter_shirt = pop(peter_shirt, &top);
				break;
			case 3:
				exit(0);
			default:
				printf("Enter valid options!!!\n\n\n");
				break;
			}
		}
	}

int push(int peter_shirt, int *top){
	if(*top == 20){
		printf("Sorry couldnt perform this action, Cupboard is full!!!\n\n\n");
		peter_shirt--;
		}
	else{
		(*top)++;
		printf("Shirt has been placed\n\n\n");
		}
	return peter_shirt;
	}

int pop(int peter_shirt, int *top){
	if(*top == 0){
		printf("NO shirts left to remove...\n\n\n");
		peter_shirt++;
		}
	else{
		printf("Shirt has been removed\n\n\n");
		}
	return peter_shirt;
	}


