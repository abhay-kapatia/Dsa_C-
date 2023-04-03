#include<iostream>
using namespace std;
//to print the sum of all elements present in an array
int main()
{
    int arr[10] = {} ;
    int sum = 0 ;  
    for (int i = 0 ; i < 10 ; i++ ){
        cin >> arr[i] ;
        sum = sum + arr[i] ;
    }
    cout << sum << endl;
    return 0;
}