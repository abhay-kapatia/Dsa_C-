#include<iostream>
using namespace std;
//for n =5
//0 1 1 2 3
int fibo(int n){
    int a =0,b=1;
    cout << a << " " << b << " ";
    for (int i=2;i<n;i++){
        int c = a+b;
        a = b;
        b=c;
        cout<<c<<" ";

    }
}
int main()
{
    int n;
    cin>>n;
    fibo(n);
    return 0;
}