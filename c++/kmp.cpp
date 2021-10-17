#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//creating Prefix array
vector<int> prefix(string s)
{
    int n = s.size();
    vector<int> pre(n, 0);
    int i = 0, j = 1;
    while (j < n)
    {
        if (s[i] == s[j])
        {
            pre[j++] = ++i;
        }
        else 
        {
            if (i == 0)
            {
                j++;
            }
            else
            {
                i = pre[i - 1];
            }
        }
    }
    return pre;
}

bool kmp(string txt, string pat, vector<int> prefix_pat)
{
    int i = 0, j = 0;
    int n = txt.size();
    int m = pat.size();
    while (i < n)
    {
        if (txt[i] == pat[j])
        {
            i++;
            j++;
        }
        else
        {
            if (j != 0)
            {
                j = prefix_pat[j - 1];
            }
            else
            {
                i++;
            }
        }
        if (j == m)
            return true;
    }
    return false;
}
int main()
{
    string txt ="abxabcabcaby";
    string pat = "abcaby";
    vector<int>pre = prefix(pat);
    for(int i=0;i<pat.size();i++)
    {
        cout<<pre[i]<<" ";
    }
    cout<<endl;
    if(kmp(txt,pat,pre)) cout<<"found"<<endl;
    else cout<<"not found"<<endl;
    return 0;
}


