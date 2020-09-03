#include<bits/stdc++.h>
#include<math.h>

using namespace std;

inline float SphereVolume(int R)
{
    return (4.0 / 3.0 * 3.14159 * pow(R, 3));
}

int main()
{
    int r;
    cout<<"Enter the radius of the sphere to calculate its volume: ";
    cin>>r;

    cout<<SphereVolume(r);

    return 0;


}
