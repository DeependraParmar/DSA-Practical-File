#include <iostream>
#include <math.h>
using namespace std;
void armstrongNumber(int n){
    int temp = n;
    int sum = 0;

    while(temp != 0){
        //finding the remainder
        int rem = temp % 10;
        
        //adding the sum with cube of remainder
        sum = sum + (rem*rem*rem);

        //reducing the value of temp 
        temp = temp / 10;
    }
    if(sum == n){
        cout<<"Armstrong Number..."<<endl;
    }
    else{
        cout<<"Not an Armstrong Number"<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    armstrongNumber(n);
    
    return 0;
}