// Funtion for finding middle

void middle(struct Node *head){
    struct node *slow = first;
    struct node *fast = first;
    if(first != NULL){
        while(fast_ptr->next != NULL && fast_ptr != NULL){
            fast = fast->next->next;
            slow = slow->next;
            }
        printf("The middle element is: %d", slow->data);
        }
    }           
