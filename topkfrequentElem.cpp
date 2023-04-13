//Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.


#include<bits/stdc++.h>
#include<string.h>
using namespace std;

 vector<int> topKFrequent(vector<int>& nums, int k) {
        //1,1,1,2,2,3 , k =2 1->3 2->2 and 3->1 then 1,2
        //return k most frequent elements meaning the ones that are being called more frequently

        unordered_map<int, int> mp;

        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
       
       //min heap to push the map pairs
       priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
       for(auto &it :mp){
           q.push({it.second, it.first});
           if(q.size()>k){
               q.pop();
           }
       }

       vector<int> res;

       while(k--){
           res.push_back(q.top().second);
           q.pop();
       }
       return res;
    }

int main(){
    vector<int> nums = {1,1,1,2,2,3};
    int k =2;
    vector<int> topK = topKFrequent(nums, k);
    for(auto i:topK){
        cout<<i<<" ";
    }
    return 0;
}