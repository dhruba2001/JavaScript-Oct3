#include<iostream>
using namespace std;
double root (double n) {
    double low = 0, high = n, mid;
    while (high - low> 0.000000001) {
        mid = (high + low )/2;
        if (mid*mid>n)
        high = mid;
        else 
        low = mid;
    }
    return mid;
}

int main(){

    double n;
    cin >> n;
    cout << root (n);
    return 0;
}