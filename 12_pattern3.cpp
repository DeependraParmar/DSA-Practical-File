#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<3; i++){
        char c = 'A';
        for(int j=0; j<=i; j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }   
    return 0;
}