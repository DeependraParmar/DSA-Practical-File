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
void shellSort(int array[], int n) {
  for (int gap = n / 2; gap > 0; gap /= 2) {
    for (int i = gap; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= gap && array[j - gap] > temp; j -= gap) {
        array[j] = array[j - gap];
      }
      array[j] = temp;
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
    shellSort(arr,n);
    displayArray(arr,n);


    delete[] arr;
    return 0;
}