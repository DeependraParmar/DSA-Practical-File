#include <iostream>
#include <math.h>
using namespace std;
int perfectNumber(int n){
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

    int sum = perfectNumber(n);

    if(sum == n){
        cout<<"Perfect Number..."<<endl;
    }
    else{
        cout<<"Untouchable Number..."<<endl;
    }

    return 0;
}