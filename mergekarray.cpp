#include<bits/stdc++.h>
using namespace std;

vector<int> mergekarrays(vector<vector<int>> &nums){
    //brute force- put everything in vector with insert method for each array i.e merged.insert(merged.end(), arr.begin(), arr.end) then sort
    //this take O(Nlogn + N)
    //merge 2 sorted arrays recursive call -TC nd S.C-NLOGK
    //priority queue -OlogK and SC= O(k)

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    for(int i =0;i<nums.size();i++){
        if(nums[i].size() != 0){
            q.push({nums[i][0], i}); //value and index of first element to insert
        }
    }

    vector<int> merged;

    while(!q.empty()){ //fetch smaller value and pushing into result merged vector
        int value = q.top().first;
        int ind = q.top().second;
        q.pop();
        merged.push_back(value);

        if(nums[ind].size()> 1){
            nums[ind].erase(nums[ind].begin());
            q.push({nums[ind][0], ind});
        }
    }
    return merged;
    
}

int main(){
    vector<vector<int>> arr = {{1, 4, 6}, {}, {2,7}};

    vector<int> res = mergekarrays(arr);
    cout<<"Resultant array is:";
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}