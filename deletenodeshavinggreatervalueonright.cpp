 Node *compute(Node *head)
    {
        // your code goes here
         head = rev(head);
            Node* node = head;
            
            while (node != nullptr && node->next != nullptr) {
                if (node->data > node->next->data) {
                    node->next = node->next->next;
                } else {
                    node = node->next;
                }
            }
            
            return rev(head);
        }
        
    Node* rev(Node* head) {
        Node* prev = nullptr;
        Node* next = nullptr;
        
        while (head != nullptr) {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        
        return prev;
    }