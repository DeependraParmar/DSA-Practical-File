#include <iostream>
#include <math.h>
using namespace std;

void factors(int n){
    int sq = sqrt(n);
    int sum = 1;

    cout<<endl<<"Factors are: ";
    for(int i=2; i<=sq; i++){
        //if remainder == 0
        if(n%i == 0){
            cout<<i<<" ";
            sum += i;

            //if n/i and i are not same 
            if((n/i) != i){
                cout<<(n/i)<<" ";
                sum += (n/i);
            }
        }
    }
    cout<<endl<<"Sum of factors is: "<<sum<<endl;
}
int main(){
    int n;
    cout<<"Enter the number to find factors: ";
    cin>>n;

    factors(n);

    return 0;
}