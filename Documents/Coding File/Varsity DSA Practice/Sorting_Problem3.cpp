#include<iostream>
#include<utility>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
        cin>> arr[i];
    sort(arr, arr+n);
    int minimum = 100000000, diff;
    for ( int i = i; i<n; i++){
        diff = arr[i]- arr[i-1];
        if (diff < minimum){
            minimum = diff;
            a = arr[i];
            b= arr[i-1];
        }
        minimum = min (minimum, diff)
    } 
    cout << minimum difference is between << endl;   

}