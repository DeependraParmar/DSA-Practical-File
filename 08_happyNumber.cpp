#include <iostream>
using namespace std;
void happyNumber(int n){
    int sum = 0,temp;
    while(sum!=1 && sum!=4)
    {
        sum=0;
        while(n>0)
        {
            temp=n%10;
            sum=sum+(temp*temp);
            n=n/10;
        }
        n=sum;
    }
    if(sum==1){
        cout<<"Happy Number..."<<endl;
    }
    else{
        cout<<"Unhappy Number..."<<endl;
    }
}
int main(){

    int n,temp,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    happyNumber(n);
    return 0;
}