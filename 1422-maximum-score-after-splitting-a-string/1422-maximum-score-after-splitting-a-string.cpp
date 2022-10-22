class Solution {
public:
    int maxScore(string s) {
        int size=s.size();int sum=0;int m=0;
        for(int i=0;i<size-1;i++)
        {   sum=0;
            for(int j=0;j<=i;j++)
            {
                if(s[j]=='0')sum=sum+1;
            }
            
            for(int j=i+1;j<size;j++)
            {
                if(s[j]=='1')sum=sum+1;
            }
            
            m=max(m,sum);
        }
        return m;
    }
};