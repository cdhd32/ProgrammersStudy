#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char, int> charMap;

    for (int i = 0; i < s.length(); i++)
    {
        if (charMap.find(s[i]) == charMap.end())
        {
            charMap[s[i]] = i;
            answer.push_back(-1);
        }    
        else
        {
            answer.push_back(i - charMap[s[i]]);
            charMap[s[i]] = i;
        }
    }

    return answer;
}