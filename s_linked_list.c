#include <stdio.h>
#include <stdlib.h>

struct node{
	int val;
	struct node *next;
	};
	
typedef struct node* node;

node get_node();
node ins_f(node first, int val);
node ins_b(node first, int val);
void display(node first);

node first = NULL;

int main(){
	int i, x, val;
	
	while(x != 4){
		printf("1: Enter val from front\n");
		printf("2: Enter val from back\n");
		printf("3: Display\n");
		printf("4: Exit\n");
		scanf("%d", &x);
			switch(x){
			case 1:
				printf("Enter value from front: ");
				scanf("%d", &val);
				first = ins_f(first, val);
				break;
				
			case 2:
				printf("Enter value from back: ");
				scanf("%d", &val);
				first = ins_b(first, val);
				break;
				
			case 3:
				display(first);
				break;
			}
		}
	}
		
node get_node(){
	node temp;
	temp = (node)malloc(sizeof(struct node));
	temp->next = NULL;
	return temp;
	}
	
	

node ins_f(node first, int val){
	node temp;
	if(first == NULL){
		first = get_node();
		first-> val = val;
		}
	else{
		temp = get_node();
		temp->val = val;
		temp->next = first;
		first = temp;
		
		}
	return first;	
	}

node ins_b(node first, int val){
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
		printf("%d\n", curr->val);
		curr = curr->next;
		}
	}

		
		
	 
		
