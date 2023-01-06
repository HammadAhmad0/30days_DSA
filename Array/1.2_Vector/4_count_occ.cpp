#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int x;
    cout<<"enter no. of you want ";
    cin>>x;
    int occurence=0;
    for(int i=v.size();i>=0;i--){
        if(v[i]==x){
            occurence++;
        }
    }
    cout<<occurence<<endl;

}