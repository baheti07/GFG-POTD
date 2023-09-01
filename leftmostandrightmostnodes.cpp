void printCorner(Node *root)
{

// Your code goes here
queue<Node*> q;
        Node* root = node;
        q.push(root);
        
        while (!q.empty())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                Node* temp = q.front();
                q.pop();
                
                if (i == 0 || i == n - 1)
                    std::cout << temp->data << " ";
                
                if (temp->left != nullptr)
                    q.push(temp->left);
                
                if (temp->right != nullptr)
                    q.push(temp->right);
            }
        }

}