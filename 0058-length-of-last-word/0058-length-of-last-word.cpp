class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int size=s.size(),count=0,temp=0;
        for(int i=0;i<size;i++)
        {
             if(s[i]==' ' && temp==1)
                break;
           if(s[i]==' ' && temp==0)
           {

           }
            else{
                temp=1;
                count++;
            }
           
        }
        return count;
    }
};