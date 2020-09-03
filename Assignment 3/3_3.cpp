#include<bits/stdc++.h>

using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        void setdata(int x,int y)
        {
            a=x;
            b=y;
        }
        void showdata()
        {
            cout<<endl<<a<<"i +"<<b;
        }
        bool operator==(Complex c)
        {
            if(a==(c.a)&&b==(c.b))
            {
                return true;
            }
            return false;

        }

};

int main()
{

    Complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3.setdata(5,6);

    if(c1==c2)
    {
        cout<<"c1 is equal to c2"<<endl;
    }
    else
    {
        cout<<"c1 is not equal to c2"<<endl;
    }
    if(c2==c3)
    {
        cout<<"c2 is equal to c3"<<endl;
    }
    else
        cout<<"c2 is not equal to c3"<<endl;


    return 0;
}
