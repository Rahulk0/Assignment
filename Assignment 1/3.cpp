#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cout<<"Enter the limit of the array: ";
    cin>>N;
    int a[N]={0};
    int i=0;
    while(i<N)
    {
        cin>>a[i];
        i++;
    }
    int key,j;
    for (i = 1; i < N; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    cout<<"After sorting:"<<endl;
    i=0;
     while(i<N)
    {
       cout<<a[i]<<" ";
        i++;
    }

}
