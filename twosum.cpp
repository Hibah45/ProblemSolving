//{2, 5, 4, 7} target = 6 return {0, 2}
//target 3 -no pair found return {}
//{2, -1, 4, -5} target = 1 return {0,1}

//brute force
//{2, 5, 4, 7} target = 6 return {0, 2}
//target 3 -no pair found return {}
//{2, -1, 4, -5} target = 1 return {0,1}

//brute force
#include<bits/stdc++.h>

std::vector<int> twoSum(std::vector<int> nums, int target){
    std::vector<int> res;
    for(int i = 0;i<nums.size()-1;i++){
        for(int j = i+1;j<nums.size();j++){
            if(nums[i] == target - nums[j])
            {
                res.push_back(i);
                res.push_back(j);
                break;
            }
        }
    }
    return res;
}

int main(){
    std::vector<int> nums = {2, 5, 4, 7};
    int target = 6;
    std::vector<int> result = twoSum(nums, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}

