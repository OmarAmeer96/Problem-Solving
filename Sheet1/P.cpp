#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num;
    cin >> num;
    string numberStr = to_string(num);
    int firstDigit = (int)numberStr[0];
    if (firstDigit % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
    return 0;
}