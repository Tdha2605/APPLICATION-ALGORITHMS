/*
You are given a 0-indexed array of strings words and a character x.

Return an array of indices representing the words that contain the character x.

Note that the returned array may be in any order.

Input: words = ["leet","code"], x = "e"
Output: [0,1]
Explanation: "e" occurs in both words: "leet", and "code". Hence, we return indices 0 and 1.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x = 'a';
    vector<string> words = {"abc","bcd","aaaa","cbc"};
    
    vector<int> res;

    for (int i = 0; i < words.size(); i++)
    {
        if (words[i].find(x) >= 0 && words[i].find(x) < words[i].size())
        {
            cout << words[i].find(x) << "\n";
            res.push_back(i);
        }
    }
    cout << "[";
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
        if (i != res.size() - 1)
            cout << ", ";
    }

    cout << "]";
    return 0;
}