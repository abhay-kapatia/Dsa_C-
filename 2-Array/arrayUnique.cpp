#include<iostream>
#include <unordered_map>
using namespace std;
//find unique elements in an array
int main()
{
    int a[10]={};
    int c[10]={};

    for(int i=0; i<10 ; i++){
        cin >>a[i];
    }
    unordered_map<int, int> umap;
    for(int i=0;i<10;i++){
        umap[a[i]]=0;
    }
    for(int i=0;i<10;i++){
        umap[a[i]]+=1;
    }
    cout<<endl<<endl;
    for(int i=0;i<10;i++){
        if(umap[a[i]]==1){
            cout<<a[i]<<" ";
        }        
    }
    
    return 0;
}