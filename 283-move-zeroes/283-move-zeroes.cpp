class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;int count=0;
        int size=nums.size(),j;
        j=size-1;
        
        for(int i=0;i<size;i++)
        {
            if(nums[i]!=0)
            {
                v.push_back(nums[i]);
                count++;
            }
        }    
        for(int i=0;i<size-count;i++)
        {
            v.push_back(0);
        }
        nums=v;
        if(v.size()==0 && nums[0]==0)
            nums.push_back(0);
        
    }
};