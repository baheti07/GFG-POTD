#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node*next;
    node(int value){
        data = value;
        next = NULL;
    }
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
node*dfusl(node*head)
{
   unordered_set<int>hs;
   node*curr=head;
   node*prev=NULL;
   while(curr!=NULL)
   {
      int val=curr->data;
      if(hs.find(val)!=hs.end())
      {
        prev->next=curr->next;
        delete curr;
      }
      else{
        hs.insert(val);
        prev=curr;
      }
      curr=prev->next;
   }
   return head;
}
int main(){
    node* head = NULL;
    //inserting Node
push(&head,4);
push(&head,3);
push(&head,2);
push(&head,2);
push(&head,5);
    
    cout<<"Original list: ";
    print(head);
    node*heead=dfusl(head);
    cout<<"After : ";
    print(heead);
    return 0;
    
}