//Target sum in the array like A[]={1,2,2,1,4} target sum=3  then pairs= 1,2 2,1 
#include<iostream>
using namespace std;
int main(){
int arr[]={3,4,6,7,1,4,2};
int n=sizeof(arr)/sizeof(arr[0]);
int targetsum=5;
int pairs=0;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
    if(arr[i]+arr[j]==targetsum){
    pairs++;
    }
}
}
cout<<pairs;
}