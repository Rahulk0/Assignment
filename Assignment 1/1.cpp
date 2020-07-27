#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter the numbers: ";
    cin>>a>>b>>c;

    int num=max(a,b);
    cout<<"Greatest number of among three number: "<<max(num,c);
}
