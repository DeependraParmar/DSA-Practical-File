#include <iostream>
#include <math.h>
using namespace std;
int untouchableNumber(int n){
    int sq = sqrt(n);
    int sum = 1;

    for(int i=2; i<=sq; i++){
        if(n%i == 0){
            sum += i;

            if(n/i != i){
                sum += (n/i);
            }
        }
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter number for check: ";
    cin>>n;

    int sum = untouchableNumber(n);

    if(sum != n){
        cout<<"Untouchable Number..."<<endl;
    }
    else{
        cout<<"Not an Untouchable Number..."<<endl;
    }

    return 0;
}