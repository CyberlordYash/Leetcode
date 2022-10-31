class Solution {
public:
    bool check(int day,vector<int>& b,int m,int k){
        int flowCount=0;
        int Boqt=0;
        for(int i=0;i<b.size();i++){
            if(b[i]<=day){
                flowCount++;
                if(flowCount==k){
                    Boqt++;
                    flowCount=0;
                }
            }
            else {
                flowCount=0;
            }
        }
        if(Boqt>=m) return true;
        return false;
    }
    
    int minDays(vector<int>& b, int m, int k) {
        if(((long long)m*(long long)k) > b.size()) return -1;
        int x=*max_element(b.begin(),b.end());
        int y=*min_element(b.begin(),b.end());
        while(y<x){
            int mid=y+(x-y)/2;
            if(check(mid,b,m,k)) x=mid;
            else y=mid+1;
        }
        return y;
    }
};