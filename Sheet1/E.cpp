#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float r;
    cin >> r;
    double area = 3.141592653 * pow(r, 2);
    cout << fixed << setprecision(9) << area;
    return 0;
}