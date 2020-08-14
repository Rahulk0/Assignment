#include<iostream>

using namespace std;

int main()
{

    int row,column;
    cout<<"Enter the number of rows and column"<<endl;
    cin>>row>>column;

    char a[row][column]={0};

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if((i==0)||(i==row-1)||(j==0)||(j==column-1))
            {
                a[i][j]='*';
            }
        }
    }
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;

}
