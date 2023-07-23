Node* segregate(Node *head) {
        
        // Add code here
        int cnt[3]={0};
        for(Node*curr=head;curr!=NULL;curr=curr->next)
        {
            if(curr->data==0) cnt[0]++;
            else if(curr->data==1) cnt[1]++;
            else cnt[2]++;
        }
        Node*curr=head;
        int idx=0;
        while(curr!=NULL)
        {
            if(cnt[idx]==0) idx++;
            if(cnt[idx]!=0)
            {
                curr->data=idx;
                cnt[idx]--;
                curr=curr->next;
            }
        }
        return head;
    }