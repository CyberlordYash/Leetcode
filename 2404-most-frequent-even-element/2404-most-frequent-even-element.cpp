class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int size=nums.size();
        map<int,int> m;
        for(int i=0;i<size;i++)
        {   if(nums[i]%2==0)
            m[nums[i]]++;
        }
        int max=-1,ans=-1;
        for(auto i:m)
        {
            if(i.second>max){
                max=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};