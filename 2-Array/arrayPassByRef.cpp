#include<iostream>
using namespace std;
//array is passed by reference therefore update function updates everything
int update(int arr[]){
    arr[1]=12;
    for(int i = 0 ; i<10 ; i++){
        cout<< arr[i]<<" ";
    }
}
int main()
{
    int a[10]={};
    update(a);
    cout<<" "<<endl;
    for(int i = 0 ; i<10 ; i++){
        cout<< a[i]<<" " ;
    }
    
    return 0;
}