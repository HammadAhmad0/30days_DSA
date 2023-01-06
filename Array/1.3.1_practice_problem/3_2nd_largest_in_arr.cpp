//2nd_largest element in array
#include<iostream>
using namespace std;
int largest_element_index(int arr[],int n){
    int max=INT_MIN;
    int maxindex=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            maxindex=i;

        }
    }
    return maxindex;

}

int main()
{
    int arr[]={1,2,3,4,5,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int indexof_largest_ele=largest_element_index(arr,n);
    cout<<"First largest ele: "<<arr[indexof_largest_ele]<<endl;
    //arr[indexof_largest_ele]=-1;
    int largestelement=arr[indexof_largest_ele];
    for(int i=0;i<n;i++){
        if(arr[i]==largestelement){
            arr[i]=-1;
        }
    }
    int indexof_2nd_largest_ele=largest_element_index(arr,n);
    cout<<"2nd largest ele: "<<arr[indexof_2nd_largest_ele]<<endl;

    return 0;
}

/* 2nd way ----
arr[]={2,2,3,4,5,6,6}
max=6;
second MAX=
if(arr[i]>max) max=arr[i]
if(arr[i]>second max && arr[i]!=max)  second max=arr[i]
*/