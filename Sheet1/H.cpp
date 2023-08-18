#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x, y;
    cin>>x>>y;
    cout<<"floor "<<x<<" / "<<y<<" = "<< floor(float(x)/y)<<endl;
    cout<<"ceil "<<x<<" / "<<y<<" = "<< ceil(float(x)/y)<<endl;
    cout<<"round "<<x<<" / "<<y<<" = "<< round(float(x)/y)<<endl;
    return 0;
}