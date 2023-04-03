#include<iostream>
using namespace std;
//PRIME NO. OR NOT
bool prime(int n){
    for (int i=2;i<n;i++){
        if(n%i==0){
            cout<<"No prime"<<endl;
            return 0;
        }
    }
    cout<<"prime"<<endl;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    prime(n);
    return 0;
}