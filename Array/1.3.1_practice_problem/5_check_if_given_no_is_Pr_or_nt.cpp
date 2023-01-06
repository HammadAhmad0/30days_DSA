/* given Queries check if the given no. is present in the array or not
a[]={2,3,5,6,7,8}
quries 4
like 3 4 5 6
present or not
*/
#include<iostream>
using namespace std;
#include <vector>
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   const int N=1e5 + 10;
   vector<int> freq(N,0);
   for(int i=0;i<n;i++){
    freq[v[i]]++;

   }
    cout<<"enter quries: "; 
    int q;
    cin>>q;
    while(q--){
        int qureyelement;
        cin>>qureyelement;
        cout<<freq[qureyelement]<<endl;
        
    }

}
