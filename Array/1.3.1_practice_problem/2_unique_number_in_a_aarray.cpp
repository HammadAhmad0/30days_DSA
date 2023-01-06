/* find the unique number in a given array where all the elements are being repeated twice with one value being unique
like arr[]={2,3,1,3,2,4,1}
here 4 is unique number
Array manipulation
*/

#include<iostream>
using namespace std;
int main()
{
int arr[]={2,3,1,3,2,4,1};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            arr[i]=arr[j]=-1;

        }
    }
}

for(int i=0;i<n;i++){
if(arr[i]>-1){
    cout<<arr[i];
}
}

}