class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int size = chars.size(), temp = 0;
        vector<char> c;
        if (size == 0)
            return 0;
        if (size == 1)
        {
            return 1;
        }
        int curr = chars[0];
        for (int i = 0; i < size; i++)
        {
            if (curr == chars[i])
            {
                temp++;
            }
            else
            {
                c.push_back(curr);
                string str = to_string(temp);
                if (temp != 1)
                {
                    for (char d : str)
                    {
                        c.push_back(d);
                    }
                }

                temp = 1;

                curr = chars[i];
            }
            if (i == size - 1)
            {
                c.push_back(curr);
                string str = to_string(temp);
                if (temp != 1)
                {
                    for (char d : str)
                    {
                        c.push_back(d);
                    }
                }
            }
        }
        chars = c;
        int fin = c.size();
        return fin;
    }
};