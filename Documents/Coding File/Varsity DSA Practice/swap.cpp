#include<iostream>
#include<utility>
using namespace std;

/*void my_swap(int *a,int *b)
{
    int tmp=*b;
    *b=*a;
    *a=tmp;
}*/

int main()
{
    int a,b;
    cin>>a>>b;
    //my_swap(&a,&b);
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}