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
node del_f(node first);
node del_b(node first);
node ins_p(node first, int pos, int val);
node del_p(node first, int pos);

node first = NULL;

int main(){
	int i, x, val, pos;
	
	while(x != 8){
		printf("1: Enter val from front\n");
		printf("2: Enter val from back\n");
		printf("3: Display\n");
		printf("4: Delete val from front\n");
		printf("5: Delete val from back\n");
		printf("6: Enter val from pos\n");
		printf("7: Delete val from pos\n");
		printf("8: Exit\n");
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
				
			case 4:
				first = del_f(first);
				break;
				
			case 5:
				first = del_b(first);
				break;
			
			case 6:
				printf("Enter value from back: ");
				scanf("%d", &val);
				printf("Enter position: ");
				scanf("%d", &pos);
				first = ins_p(first, pos, val);
				break;
			
			case 7:
				printf("Enter position: ");
				scanf("%d", &pos);
				first = del_p(first, pos);
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

node del_f(node first){
	node temp;
	int val;
	if(first == NULL){
		val = -1;
		printf("Linked list Empty");
		}
	else{
		val = first->val;
		temp = first;
		first = first->next;
		free(temp);
		printf("Value from front %d deleted\n", val);
		}
	return first;
	}
	
node del_b(node first){
	node temp, temp_b;
	int val;
	if(first == NULL){
		val = -1;
		printf("Linked List Empty");
		}
	else{
		temp = first;
		temp_b = NULL;
		while(temp->next != NULL){
			temp_b = temp;
			temp = temp->next;
			}
		val = temp->val;
		temp_b->next = NULL;
		free(temp);
		printf("Value from front %d deleted\n", val);
		}
	return first;
	}
	
node ins_p(node first, int pos, int val){
	node temp, curr;
	int count = 1;
	if(first == NULL){
		first = get_node();
		first-> val = val;
		}
	else{
		curr  = first;
		while(count != pos-1 && curr->next != NULL){
			count++;
			curr = curr->next;
			}
				 
		temp = get_node();
		temp->val = val;
		temp->next = (curr->next)->next;
		curr->next = temp;		
		}
	return first;
	}
	
node del_p(node first, int pos){
	node temp, temp_b;
	int val, count = 1;
	if(first == NULL){
		val = -1;
		printf("Linked List Empty");
		}
	else if(first->next == NULL && pos == 1){
		val = first->val;
		printf("Value from front %d deleted\n", val);
		free(first);
		first = NULL;
		}
	else{
		temp = first;
		temp_b = NULL;
		while(count != pos && temp->next != NULL){
			count++;
			temp_b = temp;
			temp = temp->next;
			}
		val = temp->val;
		temp_b->next = temp->next;
		free(temp);
		printf("Value from front %d deleted\n", val);
		}
	return first;
	}
