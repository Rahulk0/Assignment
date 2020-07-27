#include<bits/stdc++.h>

using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;

    int n=num,r=0;

    while(n>0)
    {
        int a=n%10;
        r=r*10+a;
        n=n/10;

    }
    if(r==num)
    {
        cout<<"\n"<<num<<" is a palindrome number";
    }
    else

    cout<<"/n"<<num<<" is not a palindrome number";

    return 0;
}
