#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n){
    int sq = sqrt(n);

    if(n==2){
        return true;
    }
    else if(n%2 == 0){
        return false;
    }
    else{
        for(int i=3; i<=sq; i+=2){
            if(n%i == 0){
                return false;
            }
            else{
                return true;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    bool result = isPrime(n);
    if(result){
        cout<<"Prime Number..."<<endl;
    }
    else{
        cout<<"Non-Prime Number..."<<endl;
    }

    return 0;
}