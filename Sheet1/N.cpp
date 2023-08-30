#include <iostream>
using namespace std;
int main()
{
    char in;
    cin>>in;
    int asciiBefore = (int)in;
    int asciiAfter = 0;
    if (asciiBefore < 97)
    {
        asciiAfter = asciiBefore + 32;
    }else{
        asciiAfter = asciiBefore - 32;
    }
    cout<<(char)asciiAfter;
    return 0;
}