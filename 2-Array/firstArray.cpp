#include<iostream>
using namespace std;
//to initialaize all element of an array with same value
int main()
{
    int array[5];
    std::fill(array, array+5, 42);
    cout<<"value at index 3 is : "<< array[1]<<endl;
    return 0;
}