/* given an integer array sorted non dec order return an arr
of the squares of each number sorted in non-dec order*/

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void Sort_non_Dec_SQ_Arr(vector<int> &v){

vector<int> ans;
int left_ptr=0;
int right_ptr=v.size()-1;
while(left_ptr<right_ptr){
    if(abs(v[left_ptr])<abs(v[right_ptr])){
        ans.push_back(v[right_ptr]*v[right_ptr]);
        right_ptr--;
    }
    else{
        ans.push_back(v[left_ptr]*v[left_ptr]);
        left_ptr++;

    }
}
    reverse(ans.begin(),ans.end());
for(int i=0;i<v.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;


}


int main(){
    int n;
    cout<<"Enter size of the Arr ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    Sort_non_Dec_SQ_Arr(v);



return 0;
}