//intervals = [[1,3],[2,6],[8,10],[15,18]]
//o/p = [[1, 6], [8,10], [15, 18]]
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals){
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> mergedInt;
    if(intervals.size() == 0)
        return mergedInt;

    vector<int> temp = intervals[0];

    for(auto i:intervals){
        if(temp[1] >= i[0]){
            temp[1] = max(temp[1], i[1]);
        }
        else{
            mergedInt.push_back(temp);
            temp = i;
        }
    }
    mergedInt.push_back(temp);
    return mergedInt;
    
}

int main(){
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8,10},{15, 18}};
    vector<vector<int>> mergedInt = mergeIntervals(intervals);
    cout<<"Overlapping subintervals are:";
    for(auto x:mergedInt){
        cout<<"{"<< x[0]<<"," <<x[1] << "}"<<endl;
    }
    return 0;
}

//ans 
//Overlapping subintervals are:{1,6}
// {8,10}
// {15,18}