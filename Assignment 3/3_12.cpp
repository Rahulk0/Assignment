#include<bits/stdc++.h>


using namespace std;

void Reverse(string s,int first)
{
    if(first==s.size())
        return;
    else
    {
        cout<<s[s.size()-first-1];
        return Reverse(s,first+1);
    }

}
int main()
{
    string s;
    cin>>s;

    Reverse(s,0);
}

