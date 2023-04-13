//Mostcommonsubstring in a string of length k

// "abcdwabcf" k =3 
//abc, bcd, cdw, dwa, wab, abc, bcf

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

string commonString(string s, int k){
    if(s.empty() || k>s.size())
        return "string empty or k is larger";
    string str;
    int maxCount = 0;
    string maxstring;
    unordered_map<string, int> mp;
    for(int i =0;i<s.size()-k;i++){
        str = s.substr(i, k);
        mp[str]++;
        if(mp[str] > maxCount){
            maxCount = mp[str];
            maxstring = str;
        }
    }

    // for(auto i:mp){
    //     cout<<i.first<<","<<i.second<<endl;
    //     if(i.second == k){
    //         maxstring = i.first;
    //         break;
    //     }
    // }
    return maxstring;

}

int main(){
    string s = "abcabcdfabcg";
    int k = 2;
    string res = commonString(s, k);
    cout<<"Common string in length k is:"<<res<<endl;
    return 0;
}