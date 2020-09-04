#include<bits/stdc++.h>

using namespace std;

void print(int *a,int first,int last)
{
    if(first==last)
    {
        return;
    }
    else
    {
        cout<<a[first]<<" ";
        print(a,first+1,last);
    }




}

int main()
{
    int n;

    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     print(a,0,n);


}
