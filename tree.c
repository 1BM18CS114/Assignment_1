#include<stdio.h>
#include<stdlib.h>

struct node{
	int val;
	struct node *left;
	struct node *right;
	};

typedef struct node *NODE;

NODE root = NULL;

NODE getnode(){
	NODE temp;
	temp = (NODE)malloc(sizeof(struct node));
	temp->left = NULL;
	temp->right = NULL;
}

NODE insert(NODE root){
	int val;
	NODE temp, curr;
	printf("\nEnter Val:");
	scanf("%d", &val);
	if(root == NULL){
		root = getnode();
		root->val = val;
	}
	else{
		curr = root;
		while(curr->left != NULL && curr->right != NULL){
			if(val < curr->val){
				curr = curr->left;
			}
			else{
				curr = curr->right;
			}
		}
		temp = getnode();
		temp->val = val;
		if(val < curr->val){
			curr->left = temp;
		}
		else{
			curr->right = temp;
		}
	}
	return root;
}

void displayl(NODE first){
	NODE curr;
	curr = first;
	while(curr != NULL){
		printf("%d\n", curr->val);
		curr = curr->left;
		}
	}

void displayr(NODE first){
	NODE curr;
	curr = first;
	while(curr != NULL){
		printf("%d\n", curr->val);
		curr = curr->right;
		}
	}

void main(){
	int x, val;
	
	while(x != 4){
		printf("\nEnter your choice\n1: Insert\n");
		//printf("2: Delete\n");
		printf("3: Display\n");
		printf("4: Exit\n");
		scanf("%d", &x);
			switch(x){
			case 1:   
				        root = insert(root);
				        break;
   
            /*case 2:     first = del_front(first);
                        break;
				*/
			case 2:     printf("\nThe elements in the list are:\n");
			        	displayl(root);
			        	displayr(root);
				        break;
                             
			}
		}
	}

		
	
		
		
