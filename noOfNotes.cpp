#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin >> n;
    if (n>=100){
        c=n/100;
        cout<<"100 : "<<c<<endl;
        n=n-c*100;
    }
    if (n>=50){
        c=n/50;
        cout<<"50 : "<<c<<endl;
        n=n-c*50;
    }
    if (n>=20){
        c=n/20;
        cout<<"20 : "<<c<<endl;
        n=n-c*20;
    }
    if (n>=10){
        c=n/10;
        cout<<"10 : "<<c<<endl;
        n=n-c*10;
    }
    if (n<10){
        int c =0;
        while(n){
            c++;
            n--;
        }
        cout<<"remain : "<<c<<endl;
    }
    return 0;
}