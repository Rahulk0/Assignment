#include<bits/stdc++.h>

using namespace std;

int minimum(int *a,int first,int last)
{
    static int Min=a[first];

    if(first==last)
    {
        return Min;
    }
    else
    {
        Min=min(a[first],Min);
        return minimum(a,first+1,last);
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
    cout<<minimum(a,0,n);

}
