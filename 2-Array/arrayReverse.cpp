#include<iostream>
using namespace std;
int reverse(int arr[],int size){
    int s=0,e=size-1;
    //int swap =0;
    while(s<=e){
        // swap=arr[s];
        // arr[s]=arr[e];
        // arr[e]=swap;
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return 0;
}
void print(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<< arr[i]<<" " ;
    }
}
int main()
{
    int a[11];
    for (int i=0;i<11;i++){
        cin >> a[i];
    }
    reverse(a,11);
    print(a,11);
    return 0;
}