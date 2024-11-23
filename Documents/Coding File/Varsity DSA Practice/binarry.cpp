#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int k){
    int low = 0, high = n-1, mid;
    while (low<=high)
    {
        mid = (high + low)/2;
        if (arr[mid]==k)
        return mid;
        else if (k>arr[mid])
        low = mid +1;
        else 
            high = mid - 1;
        
    }
    return -1;
    
}

int main(){
    int n, k;
    cin >> n;
    int arr[n];
    for (int i=0; i<n;i++)
      cin >> arr[i];
    cin >>k;  
    int position = binarySearch(arr, n, k);
    if (position == -1)
        cout<< "Not found\n";
    else
        cout << k << " found at position"<< position<<endl;     

    return 0;
}