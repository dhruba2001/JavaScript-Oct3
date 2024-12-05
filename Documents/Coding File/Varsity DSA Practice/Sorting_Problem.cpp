#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp (const string &a, const string &b)
{
    return a.length()>b.length();
}

int main(){
    int n;
    cin>> n;
    string arr[n];
    for (int i = 0; i<n; i++)
        cin>> arr[i];
    sort(arr, arr+n, cmp);
    for (int i=0; i<n;i++)
        cout << arr[i]<< endl;


    return 0;
}
