#include<iostream>
#include <string>
using namespace std;
int main(){
    string name1, name2;
    getline(cin, name1);
    getline(cin, name2);
    
    int spaceIndex1 = name1.find(' ');
    int spaceIndex2 = name2.find(' ');

    string secondName1 = name1.substr(spaceIndex1 + 1);
    string secondName2 = name2.substr(spaceIndex2 + 1);

    if(secondName1 == secondName2){
        cout<<"ARE Brothers";
    }else{
        cout<<"NOT";
    }
    return 0;
}