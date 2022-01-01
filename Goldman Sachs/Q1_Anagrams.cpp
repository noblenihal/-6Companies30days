// https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#

class Solution
{
public:
    vector<vector<string>> Anagrams(vector<string> &string_list)
    {
        //code here

        int len = string_list.size();
        unordered_map<string, vector<string>> map;
        vector<vector<string>> vec;

        for (auto e : string_list)
        {
            string str = e;
            sort(str.begin(), str.end());
            map[str].push_back(e);
        }

        for (auto i : map)
        {
            vec.push_back(i.second);
        }

        return vec;
    }
};