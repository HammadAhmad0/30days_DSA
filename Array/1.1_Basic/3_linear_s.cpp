#include<iostream>
using namespace std;
int main(){
    int arr[]={0,2,1,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=4;
    int ans=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            ans=i;
            break;
        }
    }
    cout<<ans;
}