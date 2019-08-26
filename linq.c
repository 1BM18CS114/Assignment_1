#include<stdio.h>
#include<stdlib.h>
void enqueue(int[], int *);
void dequeue(int[], int *, int *);
void display(int[], int *, int *);

void main(){
	int x, queue[5], front=0, rear=-1;
	do{
		printf("Add: 1, Remove: 2, Display: 3, Exit: 4\n");
		scanf("%d", &x);
		switch(x){
			case 1:
				enqueue(queue, &rear);
				break;
			case 2:
				dequeue(queue, &rear, &front);
				break;
			case 3:
				display(queue, &rear, &front);
				break;
			case 4:
				exit(0);
			}
		}while(x != 4);
	}
void enqueue(int queue[], int *rear){
	int x;
	if(*rear > 4){
		printf("Queue is full!!!\n\n");
		}
	else{
		printf("Element to be added:\n");
		scanf("%d", &x);
		queue[++(*rear)] = x;
		}
	}
void dequeue(int queue[], int *rear, int *front){
	int x;
	if(*rear < *front){
		printf("Queue is empty!!!\n\n");
		}
	else{
		x = queue[(*front)++];
		printf("%d is removed!!\n\n", x);
		}
	}
void display(int queue[], int *rear, int *front){
	int i;
	if(*rear < *front){
		printf("Queue is empty!!!\n\n");
		}
	else{
		for(i = *front; i <= *rear; i++){
			printf("%d\n", queue[i]);
			}
		}
	}
	 		
