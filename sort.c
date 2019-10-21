#include<stdio.h>
#include<stdlib.h>


struct node{
	int val;
	struct node *next;
	};
	
typedef struct node* node;

node get_node();
node ins_end(node first, int val);
void display(node first);
node sort(node first);
node concat(node first1, node first2);


node first1 = NULL;
node first2 = NULL;

int main(){
	int i, x, val,pos;
	
	printf("Enter values for first linked list\n");
	while(x != 3){
		
		printf("1: Enter val from end\n");
		printf("2: Display\n");
		printf("3: exit\n");
		scanf("%d", &x);
			switch(x){	
			case 1:
				printf("Enter value from back: ");
				scanf("%d", &val);
				first1 = ins_end(first1, val);
				break;
				
			case 2:
				display(first1);
				break;
			}
		}
	
	printf("Enter values for second linked list\n");
	x=0;
	while(x != 3){
		
		printf("1: Enter val from end\n");
		printf("2: Display\n");
		printf("3: exit\n");
		scanf("%d", &x);
			switch(x){	
			case 1:
				printf("Enter value from back: ");
				scanf("%d", &val);
				first2 = ins_end(first2, val);
				break;
				
			case 2:
				display(first2);
				break;
			}
		}
	first1 = sort(first1);
	display(first1);
	
	first1 = concat(first1, first2);
	display(first1);
	}
		
node get_node(){
	node temp;
	temp = (node)malloc(sizeof(struct node));
	temp->next = NULL;
	return temp;
	}
	
node ins_end(node first, int val){
	node temp, curr;
	if(first == NULL){
		first = get_node();
		first-> val = val;
		}
	else{
		curr  = first;
		while(curr->next != NULL){
			curr = curr->next;
			}
				 
		temp = get_node();
		temp->val = val;
		curr->next = temp;
		}
	return first;
	}
	
void display(node first){
	node curr;
	curr = first;
	while(curr != NULL){
		printf("%d ", curr->val);
		curr = curr->next;
	}
	printf("\n");
}

	
node sort(node first){
	int swapped = -1;
	node curr, last, temp;
	if(first == NULL){
		printf("Linked list is empty");
		return first;
	}
	else{
		
		last = NULL;
		while(swapped != 0){
			swapped = 0;
			curr = first;
			while(curr->next != last){
				if(curr->val > (curr->next)->val){
					temp->val = curr->val; 
					curr->val = (curr->next)->val;
					(curr->next)->val = temp->val;
					}
				swapped = 1;
				curr = curr->next;
				}
			last = curr;
			}
		
		}
	}

node concat(node first1, node first2){
	node curr;
	if(first1 == NULL || first2 == NULL){
		printf("Linked list is empty");
		return first1;
	}
	else{
		curr  = first1;
		while(curr->next != NULL){
			curr = curr->next;
			}
		curr->next = first2;
		}
		return first1;
	}
					
//node reverse(		
			
