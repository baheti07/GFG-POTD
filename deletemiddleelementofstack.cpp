void deletemid(stack<int>&s,int sizeOfStack)
{
    helper(s,sizeOfStack,0);
}
void helper(stack<int>&s,int n,int ind)
{
    if(ind==n/2)
    {
        s.pop();
        return;
    }
    int x=s.top();
    s.pop();
    ind++;
    helper(s,n,ind);
    s.push(x);
}

/*
one more method
void deleteMid(stack<int>&s, int sizeOfStack)
//     {
//         stack<int> st;
//         int m = sizeOfStack / 2;
//         int i = 0;
        
//          while (!s.empty()) 
//          {
//         st.push(s.top());
//         s.pop();
//         i++;
        
//         if (i == m)
//             s.pop();
//          }
    
//         while (!st.empty()) {
//             s.push(st.top());
//             st.pop();
//         }
//     }
*/