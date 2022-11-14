#include <iostream>
using namespace std;

int main(){
    char c = 'A';
    for(int i=0; i<3; i++){
        for(int j=0; j<=i; j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }    
    return 0;
}