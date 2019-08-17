#include<stdio.h>
#include<conio.h>
int push(int peter_shirt, int *top);
int pop(int peter_shirt, int *top);
void main(){
	int x, stack[20], top = 0, peter_shirt = 0;
	clrscr();
	while(1){
		printf("Enter 1 for placing shirts\n");
		printf("Enter 2 for removing shirts\n");
		printf("Enter 3 to stop\n");
		printf("%d", peter_shirt);
		scanf("%d", &x);
		switch(x){
			case 1:
				peter_shirt++;
				peter_shirt = push(peter_shirt, &top);
				break;
			case 2:
				peter_shirt--;
				peter_shirt = pop(--peter_shirt, &top);
				break;
			case 3:
				exit(0);
			default:
				printf("Enter valid options!!!\n");
				break;
			}
		}
	}

int push(int peter_shirt, int *top){
	if(*top == 20){
		printf("Sorry couldnt perform this action, Cupboard is full!!!\n");
		peter_shirt--;
		}
	else{
		(*top)++;
		printf("Shirt has been added, %d shirts in the cupboard\n", &peter_shirt);
		}
	return peter_shirt;
	}

int pop(int peter_shirt, int *top){
	if(*top == 0){
		printf("NO shirts left to remove...\n");
		peter_shirt++;
		}
	else{
		printf("Shirt has been removed, %d shirts in cupboard\n", &peter_shirt);
		}
	return peter_shirt;
	}


