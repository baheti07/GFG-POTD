 #include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
void push(struct node** head, int data)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
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
node* deleteDuplicates(node* head) {
          if(head==NULL||head->next==NULL) return head;
          node*temp=head;
          while(temp->next!=NULL)
          {
              if(temp->data==temp->next->data)
              {
                  node*del=temp->next;
                  temp->next=del->next;
                  delete del;   
              }
              else temp=temp->next;
          }
          return head;
    }
    int main(){
    node* head = NULL;
    //inserting Node
push(&head,4);
push(&head,3);
push(&head,3);
push(&head,2);
push(&head,1);
    
    cout<<"Original list: ";
    print(head);
    node*heead=deleteDuplicates(head);
    cout<<"After : ";
    print(heead);
    return 0;
    
}
