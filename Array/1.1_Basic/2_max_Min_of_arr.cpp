#include<iostream>
using namespace std;
int main(){
    int arr[]={-11,0,111,5,6};
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }

    }
    cout<<"Max:"<<max<<" "<<"Min:"<<min;
}