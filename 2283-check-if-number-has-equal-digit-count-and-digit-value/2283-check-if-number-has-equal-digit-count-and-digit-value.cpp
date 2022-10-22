class Solution
{
public:
    bool digitCount(string num)
    {
        int size = num.size();
        vector<int> m(size, 0);

        string s;
        for (int i = 0; i < size; i++)
        {
           if(num[i]-48>=size)return false;
            int j = int(num[i]);
            m[j - 48]++;
        }
        for (int i = 0; i < size; i++)
        {
            s = s + to_string(m[i]);
        }
        if (s == num)
            return true;
        else
            return false;
    }
};