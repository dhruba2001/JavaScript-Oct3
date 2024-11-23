#include<iostream>

using namespace std;

struct Student {
    double CG;
    string name;
};

bool cmp(Student a, Student b) {
    if (a.CG > b.CG)
        return true;
    if (a.CG == b.CG)
        return  a.name < b.name;
    return false;
}

int main() {
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++) {
        double CG;
        string name;
        cin >> CG >> name;
        arr[i].CG = CG;
        arr[i].name = name;
    }
    sort(arr, arr+n, cmp);
    for (int i = 0; i < n; i++) {
        cout << arr[i].CG << " " << arr[i].name << endl;
    }
}
