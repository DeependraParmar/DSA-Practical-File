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
int findMax(int arr[],int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}
void countSort(int arr[],int n,int digit){
    int count[10] = {0};

    for(int i=0; i<n; i++){
        count[(arr[i]/digit)%10]++;
    }
    for(int i=1; i<=9; i++){
        count[i]+=count[i-1];
    }

    int *output = new int[n];
    for(int i=n-1; i>=0; i--){
        output[--count[(arr[i]/digit)%10]] = arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }

    delete[] output;
}
void radixSort(int a[],int n){
    int max = findMax(a,n);
    int digit = 1;

    while(max>0){
        countSort(a,n,digit);
        max/=10;
        digit*=10;
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
    radixSort(arr,n);
    displayArray(arr,n);


    delete[] arr;
    return 0;
}