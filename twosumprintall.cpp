#include<bits/stdc++.h>
using namespace std;
//1, 2, 3, 3, 4
vector<vector<int>> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> mp;
    vector<vector<int>> ans;
    for(int i =0;i<nums.size();i++){
        if(mp.find(target-nums[i]) != mp.end()){
            ans.push_back({nums[i], target-nums[i]});
        }
        mp[nums[i]] = i;
    }
    return ans;
}

int main(){
    vector<int> nums = {2, 4, 3, 3, 1}; //Pairs are:[2, 4],[3, 3]
    int target = 6;
    vector<vector<int>> sum = twoSum(nums, target);
    cout<<"Pairs are:"<<endl;
    for(auto pair: sum){
        cout << "[" << pair[0] << ", " << pair[1] << "]\n";

    }
    return 0;
}

// vector<int> ans;
//     vector<vector<int>> res;
//     sort(nums.begin(), nums.end());
//     int n = nums.size();
//     int l = 0, r = n-1;
//     while(l<r){
//         int sum = nums[l] + nums[r];
//         if(sum == target){
//             // ans.clear();
//             // ans.push_back(nums[l]);
//             // ans.push_back(nums[r]);
//             res.push_back({nums[l], nums[r]});
//             l++;
//             r--;
//         }
//         else if(sum>target)
//             r--;
//         else
//             l++;
//     }
//     return res;