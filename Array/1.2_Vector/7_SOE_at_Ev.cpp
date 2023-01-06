//element present at event indeces sum -element present at odd ind sum
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,1,2,11,2};
    int arrsum=0;
    for(int i=0;i<6;i++)
    {
        if(i%2==0){
            arrsum+=arr[i];
        }
        else{
            arrsum-=arr[i];
        }

    }
    cout<<arrsum;
}
