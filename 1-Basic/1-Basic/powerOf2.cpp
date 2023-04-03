#include<iostream>
using namespace std;
//DONT KNOW
int main()
{
    int ans =1;
    int n;
    cin>>n;
    for(int i=0;i<=30;i++){
        if(ans==n){
            cout<<"true"<<endl;
            return true;
        }
        if(ans<INT32_MAX){
            ans =ans*2;
        }

    }
    cout<<"false"<<endl;
    return false;
}