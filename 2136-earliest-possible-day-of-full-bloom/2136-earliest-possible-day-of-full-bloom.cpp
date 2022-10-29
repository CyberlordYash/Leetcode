class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>> v;
        int start=0,ans=0;
        for(int i=0;i<plantTime.size();i++)
        {
            v.push_back({growTime[i],plantTime[i]});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=0;i<plantTime.size();i++)
        {
            start=start+v[i].second;
            ans=max(ans,start+v[i].first);
        }
        return ans;
    }
};