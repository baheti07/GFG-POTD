#include<iostream>
using namespace std;
bool one(int i,string s,int n)
{
    if(i>=n/2) return true;
    if(s[i]!=s[n-i-1]) return false;
    return one(i+1,s,n);
}
int main()
{
    string s="MADAM";
    int n=s.length();
    cout<<one(0,s,n);
}