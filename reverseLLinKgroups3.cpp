#include<iostream>
using namespace std;   //reverse remainign also
struct node
{
    int data;
    struct node*next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
         if (!head || k == 1)
        return head;
  
    node* dummy = new node(0); // creating dummy node
    dummy->data = -1;
    dummy->next = head;
  
    // Initializing three points prev, curr, next
    node *prev = dummy, *curr = dummy, *next = dummy;
  
    // Calculating the length of linked list
    int count = 0;
    while (curr) {
        curr = curr->next;
        count++;
    }
  
    // Iterating till next is not NULL
    while (next) {
        // Curr position after every reverse group
        curr = prev->next;
        // Next will always next to curr
        next = curr->next;
        // toLoop will set to count - 1 in case of remaining
        // element
        int toLoop = count > k ? k : count - 1;
        for (int i = 1; i < toLoop; i++) {
            // 4 steps as discussed above
            curr->next = next->next;
            next->next = prev->next;
            prev->next = next;
            next = curr->next;
        }
        // Setting prev to curr
        prev = curr;
        // Update count
        count -= k;
    }
    // dummy -> next will be our new head for output linked
    // list
    return dummy->next;
    }
    void print(struct node*head)
{
    struct node*ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

void push(struct node** head, int data)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
int main()
{
    struct node*head=NULL;
    struct node*ptr;
    push(&head,8);
    push(&head,7);
    push(&head,6);
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);
    
    cout<<"Before reversing: "<<endl;;
    print(head);

    int k=3;
    head=reverse(head,k);
    cout<<"After reversing: "<<endl;
    print(head);
    return 0;
}