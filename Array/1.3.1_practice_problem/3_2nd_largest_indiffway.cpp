#include<iostream>
using namespace std;
int secondlargest(int arr[],int n){
    int max=INT_MIN;
    int second_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]>second_max && arr[i]!=max){
            second_max=arr[i];

        }
    }
    return second_max;
}
int main()
{
    int arr[]={1,2,3,4,5,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int secondlargest_=secondlargest(arr,n);
    cout<<secondlargest_<<endl;
}