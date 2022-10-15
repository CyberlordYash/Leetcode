class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s=digits.size()-1;
        int temp=1;
        while(s>=0){
            if(temp==1){
        if(digits[s]<9){digits[s]=digits[s]+1;temp=0;}
        else
            {
                digits[s]=0;
                temp=1;
            }
        }
            
            s--;
        }
        s=digits.size();
        vector<int> v(s+1);
        if(temp==1)
            {   int i=0;
             v[i]=1;
                for( i=1;i<s-1;i++)
                {
                    v[i]=digits[i];
                }

           
            return v;
            }
         return digits;
        
        
    }
};