#include <iostream>
using namespace std;
void fillArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<i<<": ";
        cin>>arr[i];
    }
}
void displayArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void smartBubbleSort(int arr[],int n){
    for(int i=0; i<=n-2; i++){
        int flag = 0;
        for(int j=0; j<=n-2-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *arr = new int[n];
    cout<<endl<<"Fill the elements in the array....."<<endl;
    fillArray(arr,n);

    cout<<endl<<"Unsorted array looks like: ";
    displayArray(arr,n);

    cout<<endl<<endl<<"Sorted array is: ";
    smartBubbleSort(arr,n);
    displayArray(arr,n);


    delete[] arr;
    return 0;
}