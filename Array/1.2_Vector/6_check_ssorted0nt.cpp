#include<iostream>
using namespace std;
#include<vector>
int main()
{

    int arr[]={1,2,3,4,5,6};
    bool sortedflag=true;
    for(int i=1;i<6;i++)
    {
        if(arr[i]<=arr[i-1])
        sortedflag=false;
    }
    cout<<sortedflag<<endl; 
}