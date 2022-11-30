#include <iostream>
#include <string>
using namespace std;
void addString(string str){
    string addend;
    cout<<"Enter the string to add: ";
    cin>>addend;

    cout<<endl<<endl;
    cout<<"Final result is: "<<str+addend<<endl;
}
string reverseString(string str){
    int i=0;
    int j=str.length()-1;

    while(i<j){
        swap(str[i++],str[j--]);
    }
    return str;
}
int returnLength(string str){
    int cnt = 0;
    while(str[cnt]!='\0'){
        cnt++;
    }
    return cnt;
}
int main(){
    string str;
    cout<<"Enter the string here: ";
    cin>>str;

    // adding a string 
    addString(str);

    // copying string to other string 
    string copy;
    copy = str;
    cout<<"Copied String is: "<<copy<<endl;

    //reversing a string 
    cout<<"Reversed String is: "<<reverseString(str)<<endl;

    //finding the length of the string
    cout<<"Length of the String is: "<<returnLength(str)<<endl;

    return 0;
}