class Solution {
public:
    int romanToInt(string s) {
        int i=s.size(),sum=0;
        
            map<char,int> m{
                {'I',1},
                 {'V',5},
                 {'X',10},
                 {'L',50},
                 {'C',100},
                 {'D',500},
                 {'M',1000},
            };
            
            for(int j=0;j<i;j++)
            {
                if(m[s[j]]<m[s[j+1]])sum=sum-m[s[j]];
                else sum=sum+m[s[j]];
            }
            
        
        return sum;
        
    }
};