#include<iostream>
using namespace std;
#include<vector>
int main()
{
vector<int> v;
//if we take size then we can take directly same as for loop
//like vector<int> v[5];
//for loop
for(int i=0;i<5;i++)
{
    int element;
    cin>>element;
    v.push_back(element);
    //cin>>v[i];
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;

v.insert(v.begin()+2,111);

//for each loop
for(int ele:v){
    cout<<ele<<" ";

}
cout<<endl;
v.erase(v.end()-3);

int i=0;
while(i<v.size()){
    cout<<v[i]<<" ";
    //cout<<v[i++]<<" "
    i++;
}
cout<<endl;
}