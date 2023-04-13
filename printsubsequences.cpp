#include<bits/stdc++.h>
using namespace std;


void printSubseq(vector<int>& arr, int n , int ind, vector<int>& ds){
    //base condition
    if(ind == n){
        // count++;
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size()==0)
            cout<<"{}";
        cout<<endl;
        return;

    }

    //take case
    ds.push_back(arr[ind]);
    printSubseq(arr, n , ind+1, ds);
    //not take
    
    ds.pop_back();

    printSubseq(arr, n, ind+1, ds);
}
int main(){
    //[3,1,2]-[3,1,2], [3,1], [3, 2], [1,2], [3], [1], [2], []
    vector<int> arr = {3,1,2};
    vector<int> ds;
    int n = arr.size();
    printSubseq(arr, n ,0, ds);
    // cout<<"Count subsequences:"<<count<<endl;
    return 0;
}