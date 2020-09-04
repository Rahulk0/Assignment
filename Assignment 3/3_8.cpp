
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"Pythagorean Triplets :\n\n"<<endl;
    for(int s1=1;s1<=500;s1++)
        for(int s2=1;s2<=500;s2++)
            for(int h=1;h<=500;h++)
                if( pow(s1,2) + pow(s2,2) == pow(h,2) )
                    cout<<s1<<"\t"<<s2<<"\t"<<h<<endl;
    return 0;
}
