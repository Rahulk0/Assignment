
#include<bits/stdc++.h>


using namespace std;

bool IsPalindrome(string s,int first,int last)
{
    if(first==last || s.size()==0)
        return true;
    else if(s[first]!=s[last])
    return false;
    else
       return IsPalindrome(s,first+1,last-1);


}
int main()
{
    string s;
    getline(cin,s);

    cout<<IsPalindrome(s,0,s.size()-1);
}
