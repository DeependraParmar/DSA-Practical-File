#include <iostream>
using namespace std;
void fillArray(int arr[],int n){
    cout<<"0: ";
    cin>>arr[0];

    for(int i=1; i<n; i++){
        cout<<i<<": ";
        cin>>arr[i];
        if(arr[i]<arr[i-1]){
            cout<<"Element not sorted..Enter again"<<endl;
            i--;
        }
    }
}
void mergeSorted(int arr1[],int n,int arr2[],int m,int arr[]){
    int i=0,j=0,k=0;
    
    while(i<=n && j<=m){
        if(arr1[i]<arr2[j]){
            arr[k++] = arr1[i++];
        }
        else{
            arr[k++] = arr2[j++];
        }
    }
    while(i<=n){
        arr[k++] = arr1[i++];
    }
    while(j<=m){
        arr[k++] = arr2[j++];
    }
}
void displayArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n,m;
    cout<<"Enter the size of first array: ";
    cin>>n;

    cout<<"Enter the size of second array: ";
    cin>>m;
    cout<<endl;

    int *arr1 = new int[n];
    int *arr2 = new int[m];

    cout<<"Fill the first array..."<<endl;
    fillArray(arr1,n);
    cout<<endl<<"Fill the second array..."<<endl;
    fillArray(arr2,m);

    int *arr = new int[n+m];

    mergeSorted(arr1,n,arr2,m,arr);

    cout<<endl<<"Final Array is: "<<endl;
    displayArray(arr,n+m);



    delete[] arr1,arr2,arr;
    return 0;
}