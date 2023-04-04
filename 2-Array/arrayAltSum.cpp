#include<iostream>
using namespace std;
//alternate number swap in an array
int main()
{
    int s=0;
    int a[9]={};
    for(int i=0;i<9;i++){
        cin >> a[i];
    }
    while(s<8){                //s+1<9=s<8;
        swap(a[s],a[s+1]);
        s=s+2;
    }
    for(int i=0 ; i<9 ; i++){
        cout<< a[i]<<" ";
    }
    return 0;
}