#include<bits/stdc++.h>

using namespace std;


int main()
{
      int N;
      cout<<"Enter the limit of the array: ";
      cin>>N;
      int a[N];

      for(int i=0;i<N;i++)
      {
          cin>>a[i];
      }
      int small=a[0];int large=a[0];

      for(int i=0;i<N;i++)
      {
          if(small>a[i])
          {
              small=a[i];
          }
          if(large<a[i])
          {
              large=a[i];
          }

       }
       int second_small=INT_MAX,second_large=a[0];
       for(int i=0;i<N;i++)
       {
           if(second_small>a[i]&&a[i]!=small)
           {
               second_small=a[i];
           }
           if(second_large<a[i]&&a[i]!=large)
           {
               second_large=a[i];
           }
       }
     cout<<"Second Max: "<<second_large<<"\nSecond Min: "<<second_small;


return 0;
}
