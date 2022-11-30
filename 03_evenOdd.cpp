#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    if(n&1)
        cout<<"Odd Number"<<endl;
    else
        cout<<"Even Number"<<endl;
    return 0;
}