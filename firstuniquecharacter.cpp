#include<bits/stdc++.h>
using namespace std;
int firstunique(string s)
{
    const int CHAR=256;
    int count[CHAR]={0};
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        count[s[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(count[s[i]]==1) return i;
    }
    return -1;
}
int main()
{
    string s="aaccceef";
    cout<<firstunique(s);
}

/*
  char nonrepeatingCharacter(string s)
    {
       //Your code here
       unordered_map<char,int>mp;
       for(int i=0;i<s.length();i++) mp[s[i]]++;
       for(int i=0;i<s.length();i++) if(mp[s[i]]==1) return s[i];
       return '$';
       
    }
*/