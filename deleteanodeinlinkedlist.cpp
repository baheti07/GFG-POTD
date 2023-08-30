Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node *temp=head;
    int i=1;
    if(x==1)
    {
        head=head->next;
        return head;
    }
    while(temp!=NULL && temp->next!=NULL)
    {   
        i++;
        if(i==x)
        {
            temp->next=temp->next->next;
        }
        else
        {
            temp=temp->next;
        }
       // i++;
    }
    return head;
}

// 1-3-4  x=3
//o/p= 1-3