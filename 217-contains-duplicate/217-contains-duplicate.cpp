class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size=nums.size();   
        set<int> s;
        for(int i=0;i<size;i++)
            s.insert(nums[i]);
        if(s.size()<size)return true;
        else return false;
    }
};