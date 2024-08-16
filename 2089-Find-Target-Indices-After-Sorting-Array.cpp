#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> targetIndices(vector<int>&nums,int target) 
    {
        sort(nums.begin(),nums.end());
        vector<int>Find_Target_Indices;
        int n=nums.size();
        for (int i=0;i<n;i++) 
        {
            if (nums[i]==target) 
            {
                Find_Target_Indices.push_back(i);
            }
        }
        return Find_Target_Indices;
    }
};
