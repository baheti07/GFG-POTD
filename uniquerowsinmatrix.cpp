vector<vector<int>>ur(int M[MAX][MAX],int row, int col)
{
    unordered_map<string,int>mp;
    vector<vector<int>>ans;
    for(int i=0;i<row;i++)
    {
        string s="";
        vector<int>tmp;
        for(int j=0;j<col;j++)
        {
            s.push_back('0'+M[i][j]);
            tmp.push_back(M[i][j]);
        }
        if(!mp[s])
        {
            mp[s]++;
            ans.push_back(tmp);
        }
    }
    return ans;
}