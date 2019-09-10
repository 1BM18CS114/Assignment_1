#include<stdio.h>
#include<stdlib.h>
void enqueue(int[], int *, int);
int dequeue(int[], int *);
void display(int[], int *, int *);

void main(){
  int n, queue[100], out[100], rear =-1,front = 0, rear_out = -1, front_out = 0, x, i, j, count;
  clrscr();
  printf("Enter number of values in your testing queue: ");
  scanf("%d", &n);
  for(i = 0; i<n; i++){
    printf("Element to be added:\n");
		scanf("%d", &x);
    enqueue(queue, &rear, x);
  }
  for(i=0; i<n; i++){
    x = dequeue(queue, &front);
    count = 0;
    for(j = 2; j<=10; j++){
      if(x % j == 0)
        count++;
    }
    if(count == 9)
      enqueue(out, &rear_out, x);
  }
  display(out, &rear_out, &front_out);
  getch();
}

void enqueue(int queue[], int *rear, int x){
		queue[++(*rear)] = x;
}

int dequeue(int queue[], int *front){
	int x = 0;
	x = queue[(*front)++];
  return x;
}

void display(int queue[], int *rear, int *front){
	int i;
  printf("The Output queue with values that are divisible by numbers in the given range:\n");
	for(i = *front; i <= *rear; i++){
		printf("%d\n", queue[i]);
	}
}
