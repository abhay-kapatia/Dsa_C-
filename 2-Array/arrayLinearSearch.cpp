#include<iostream>
using namespace std;
//Linear Search
bool linearSearch(int a[], int size,int key){
    for(int i=0; i<size;i++){
        if(key==a[i])
            return 1;
    }
    return 0;
}
int main()
{
    int a[10]={};
    for(int i=0;i<10;i++){
        cin >> a[i];
    }
    int key ;
    cin >> key;
    if(linearSearch(a,10,key)){
        cout<<"Found"<<endl;
    }
    else{
        cout << "Not found" << endl;
    }
    return 0;
}