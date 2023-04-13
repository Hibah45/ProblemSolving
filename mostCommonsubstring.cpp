
#include<bits/stdc++.h>
#include<string.h>
using namespace std;


// abcdfabcdfbc
//LONGEST common substring in  a given string
//same without k

int longestCommonSubstring(string s){
    //sliding window approach as we have to find the longest common substring without repeating characters
    //1st approach brute force check all combinations
    //2nd erase l whenever u encounter duplicate in sets
    //3rd approach is to use a map and keep moving l to r
    if(s.size() == 0)
        return 0;
    int maxans = 0;
    int l =0;
    int r = 0;
    unordered_map<char, int> mp;
    while(r<s.size()){
        if(mp.find(s[r]) != mp.end()){
            l = max(l, mp[s[r]]+1);
        }
        mp[s[r]] = r;

        maxans = max(maxans, r-l+1);
        r++;
    }
    return maxans;
    
}

// for(int r= 0; r<s.size(); r++){
//         if(sets.find(s[r]) != sets.end()){
//             while(l< r && sets.find(s[r]) != sets.end())
//             {
//                 sets.erase(s[l]);
//                 l++;
//             }
//         }
//         sets.insert(s[r]);
//         maxans = max(maxans, r-l+1);
//         }
//     return maxans;
int main(){
    string s = "abcaabde"; //abde-4
    int len = longestCommonSubstring(s);
    cout<<"Common string in length k is:"<<len<<endl;
    return 0;
}