#include <iostream>
#include <string.h>

using namespace std;


int main()
{

    char str[100];
    cin>>str;
    int l = 0;
    int h = strlen(str) - 1;

    int c=0;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            cout<<" Not Palindrome";
            c++;
            break;

        }
    }
    if(c==0)
    {
          printf("%s is palindrome", str);
    }
    return 0;
}
