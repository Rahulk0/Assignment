#include <iostream>

using namespace std;

int main()

{

 int i, j, N;

cout<<"Enter row";

cin>>N;

 for(i=1; i<=N; i++)

 {

 for(j=1; j<=N; j++)

 {



 if((i==1 || i==N) && (j==1 || j==N))

 {

 printf(" ");

 }

 else if(i==1 || i==N || j==1 || j==N)

 {



cout<<"*";

 }

 else

 {

cout<<" ";

 }

 }

cout<<endl;

 }

 return 0;

}
