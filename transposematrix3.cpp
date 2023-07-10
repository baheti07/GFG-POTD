#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
         int n = matrix.size();
        int m = matrix[0].size();
        
        vector<vector<int>> res(m,vector<int> (n,0)); // matrix creation
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[j][i] = matrix[i][j]; // filling the matrix in transpose form
            }
        }
        return res;
    }
    int main()
{
    vector<vector<int>>mat={ {4,5,6}, {7,8,9}, {10,11,12}};
    vector<vector<int>>ans=transpose(mat);
    for (int i = 0; i < ans.size(); i++) {
            for (int j = 0; j < ans[0].size(); j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
}