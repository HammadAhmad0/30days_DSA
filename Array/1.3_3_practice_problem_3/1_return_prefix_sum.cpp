/* prefix sum running sum
let Input arr={5,4,1,2,3};
output arr={5,9,10,12,15}
without creating a new arr
*/
#include<iostream>
using namespace std;
#include<vector>
void prefixSum(vector<int> &v){
    for(int i=1;i<v.size();i++){
        //v[i]=v[i-1]+v[i];
        v[i]+=v[i-1];

    }
    return;
    

}

int main(){
int n;
cout<<"Enter size of the Arr";
cin>>n;
vector<int> v;
for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
}

prefixSum(v);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;








    return 0;
}