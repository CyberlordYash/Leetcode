class Solution {
public:
    int countPrimes(int n) {
        vector<bool> v(n+1,1);
        v[0]=v[1]=0;
        int count=0;
        
        for(int i=2;i<n;i++)
        {
            if(v[i])
            {
               count++;
                for(int j=2*i;j<n;j=j=j+i)
                {
                    v[j]=0;
                }
            }
            
        }
        return count;
        
    }
};