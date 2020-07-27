#include<bits/stdc++.h>

using namespace std;

void prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c!=2)
    {
        cout<<n<<" is not a prime number";
    }
    else
        cout<<n<<" is a prime number";
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    prime(num);

}
