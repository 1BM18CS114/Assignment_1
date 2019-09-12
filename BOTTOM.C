#include<stdio.h>
#include<conio.h>

int push(int *top, int obj[]);
void sort(int top, int obj[], int temp);
void main(){
	int obj[10], top = -1, n, i, temp;
	clrscr();
	printf("Enter number of values in stack: ");
	scanf("%d", &n);
	printf("Enter values for stack(bottom to top)\n");
	for(i=0;i<n;i++)
		obj[top] = push(&top, obj);
	temp = obj[0];
	for(i=0;i<n;i++){
		if(obj[i] < temp)
			temp = obj[i];
		}
	sort(top, obj, temp);
	getch();
	}

int push(int *top, int obj[]){
	int x;
	if(*top >= 10){
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

void sort(int top, int obj[], int temp){
	int i, j;
	for(i = 1; i <= top; i++){
		if(obj[i] <= temp){
			temp = obj[i];
			for(j = i-1; j >= 0; j--){
				//printf("\n%d %d\n", obj[j+1], obj[j]);
				obj[j+1] = obj[j];
				}
			obj[0] = temp;
			}
		}
	for(i=top; i>=0; i--)
		printf("%d\n", obj[i]);

	}
