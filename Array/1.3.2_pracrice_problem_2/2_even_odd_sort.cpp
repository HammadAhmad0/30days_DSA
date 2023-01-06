#include<iostream>
using namespace std;
#include<vector>
void EvenOddSort(vector<int> &v){
    int left_ptr=0;
    int rigght_ptr=v.size()-1;
    while(left_ptr<rigght_ptr){
        if(v[left_ptr]%2==1 && v[rigght_ptr]%2 ==0){
            swap(v[left_ptr],v[rigght_ptr]);
            left_ptr++;
            rigght_ptr--;
        }
        if(v[left_ptr]%2==0){
            left_ptr++;
        }
         if(v[rigght_ptr]%2==1){
            rigght_ptr--;
        }
    
    }
    return;

}

int main(){

    int n;
    cout<<"Enter size ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
         v.push_back(ele);

    }
     
     EvenOddSort(v);

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";

}
cout<<endl;
return 0;

}