/* given array={1,2,3,4,5,1}
last occurence=5
*/
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
cout<<"enter element which you want occurence ";
cin>>x;
int occurence=-1;
/*
for(int i=0;i<v.size();i++){
if(v[i]==x){
occurence=i;
}
}*/
for(int i=v.size()-1;i>=0;i--)
{
    if(v[i]==x){
        occurence=i; 
        break;
    }
}
cout<<"occurence: "<<occurence<<endl;

return 0;
}
