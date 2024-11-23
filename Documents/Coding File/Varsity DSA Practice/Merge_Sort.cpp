#include<iostream>
using namespace std;

void printArray (int arr[], int n)
{
    for (int i=0; i<n; i++)
    cout <<arr[i];
    cout<<endl;
}
void mErge(int arr[], int low, int mid, int high){
    int temp[high -low + 1];
    int i = low, j= mid + 1;
    int n = high - low + 1;
    for (int k=0; k<n; k++){
        if (arr[i]< arr[j]|| j == high+1){
            temp[k] = arr[i];
            i++;
        }
        else if (arr[j] < arr[i]|| i == mid+1){
            temp[k]=arr[j];
            j++;
        }
    }
    for (int k=0; k<n; k++)
    arr[low+k] = temp[k];
    


}

void mergeSort (int arr[], int low, int high)
{
    if (low ==high)
    return; 
    int mid = (high + low)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    mErge(arr, low, mid, high);
}

int main()
{
    int arr[] ={7,2,8,5,4,1};
    int n = 6;
    printArray(arr, n);
    mergeSort(arr, 0, n-1);
    printArray(arr, n);

    return 0;
}