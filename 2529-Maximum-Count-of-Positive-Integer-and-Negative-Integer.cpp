#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumCount(vector<int>&nums) 
    {
        int posCount=0;
        int negCount=0;
        int n=nums.size();
        for (int i=0;i<n;i++) 
        {
            if(nums[i]>0) 
            {
                posCount++;
            } 
            else if(nums[i]<0)
            {
                negCount++;
            }
        }
        return max(posCount,negCount);
    }
};
