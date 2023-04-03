#include<iostream>
using namespace std;
int minItem(int a[],int size){
    int maxi = a[0]; // int max=INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        // if(arr[i]>max){
        //     max=arr[i];
        // }
        maxi = max(maxi, a[i]);
    }
    return maxi;
}
int maxItem(int a[],int size){
    int mini = a[0]; // int max=INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        // if(arr[i]>max){
        //     max=arr[i];
        // }
        mini = min(mini, a[i]);
    }
    return mini;
}
int main()
{
    int arr[10];
    for(int i =0 ; i<10 ; i++){
        cin >> arr[i];
    }
    cout << maxItem(arr,10)<< endl;;
    cout << minItem(arr,10);

    return 0;
}