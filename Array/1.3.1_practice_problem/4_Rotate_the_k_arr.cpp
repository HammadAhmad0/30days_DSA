/* 
Rotate the given array a by k steps where k is non negative.
note: k can be greater than n as well where n is the size of array a.
let arr[]={1,2,3,4,5}
k=2
output-
step1
5 1 2 3 4 

step2
4 5 1 2 3// rotated by 2 steps

*/

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2; //k can be greater than n
    k=k%n;
    int ansarray[n];
    int j=0;
    //inserting last k elements in ans arr
    for(int i=n-k;i<n;i++){
      ansarray[j++]=arr[i];  

    }
    //inserting first n-k elements in ans arr
    for(int i=0;i<=k;i++){
        ansarray[j++]=arr[i];

    }
    for(int i=0;i<n;i++){
        cout<<ansarray[i]<<" ";
    }


}