#include<iostream>
using namespace std;
//to count the numbber from 0
int counting(int num){
    for(int i=0;i<=num;i++){
        cout<<i<<" ";
    }
    cout << endl;
    return 0;
}
int main()
{
    int  num;
    cin>>num;
    counting(num);
    return 0;
}