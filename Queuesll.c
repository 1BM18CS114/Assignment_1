#include <stdio.h>
#include <stdlib.h>

struct node{
	int val;
	struct node *next;
	};
	
typedef struct node* node;

node first = NULL;

node get_node(){
	node temp;
	temp = (node)malloc(sizeof(struct node));
	temp->next = NULL;
	return temp;
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

node del_front(node first)
{
  node temp;
  if(first == NULL)
  {
    printf("\nEmpty\n");
  }
  temp = first;
  printf("\nDeleted element is %d\n",temp->val);
  temp = temp->next;
  free(first);
  first = temp;
  return first;
}

void display(node first){
	node curr;
	curr = first;
	if(curr == NULL)
	{
	    printf("\nEmpty\n");
	}
	else
	{
	    while(curr != NULL){
		    printf("%d\t\t", curr->val);
		    curr = curr->next;
		    }
	}
}

int main(){
	int x, val;
	
	while(x != 4){
		printf("\nEnter your choice\n1: Insert\n");
		printf("2: Delete\n");
		printf("3: Display\n");
		printf("4: Exit\n");
		scanf("%d", &x);
			switch(x){
			case 1:     printf("\nEnter value to be inserted: \n");
			        	scanf("%d", &val);
				        first = ins_b(first, val);
				        break;
   
            case 2:     first = del_front(first);
                        break;
				
			case 3:     printf("\nThe elements in the list are:\n");
			        	display(first);
				        break;
                                
			}
		}
	}
