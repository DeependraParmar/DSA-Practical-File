#include <iostream>
using namespace std;
long raisePower(int b,int p){
    if(p==1)
        return b;

    return b * raisePower(b,p-1); 
}
int main(){
    int base,power;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter power: ";
    cin>>power;

    cout<<endl<<"Result is: "<<raisePower(base,power)<<endl;

    return 0;
}