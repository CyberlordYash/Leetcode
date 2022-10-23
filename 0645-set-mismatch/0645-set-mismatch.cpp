class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
                int size=nums.size();
        vector<int> m(size+1,0);vector<int > v;

        
        for(int i=0;i<size;i++)
        {
            m[nums[i]]++;
        }
        for(int i=1;i<=size;i++)
        {
            if(m[i]==2)v.push_back(i);

            
        }
         for(int i=1;i<=size;i++)
        {
           
            if(m[i]==0)v.push_back(i);
            
        }
        return v;
        
    }
};