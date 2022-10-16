class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0,sum=0;
        int i=a.length()-1;
        int j=b.length()-1;
        string s;
        sum=0;carry=0;
        while(i>=0 || j>=0)
        {sum=carry;
            if(i>=0){sum=sum+int(a[i])-48;i--;}
            if(j>=0){sum=sum+int(b[j])-48;j--;}
         
         if(sum>1){
             int rem=sum%2;
             s=s+to_string(rem);
             carry=1;
                   }
         else
         {
             s=s+to_string(sum);
             carry=0;
         }
         
        }
        if(carry==1)
         {
             s=s+"1";
         }
            reverse(s.begin(),s.end());
        return s;
    }
};