#include<iostream>
using namespace std;
//get to know how to use array with functions
void printArray(int arr[],int size){
    cout<< "Printing the numbers :- " << endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int numbers[]={1,2,3,4,5,6,7,8,9,0};
    printArray(numbers,10);
    return 0;
}