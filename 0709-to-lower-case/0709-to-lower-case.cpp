class Solution {
public:
    string toLowerCase(string s) {
        int size=s.size();int n;
        for(int i=0;i<size;++i)
        {   n=s[i];
            if(n<=90 && n>=65){n=n+32;s[i]=n;}
            
            
            
        }
        return s;
    }
};