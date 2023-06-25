#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 2 "최댓값과 최솟값" 문제 풀이
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
string solution(string s) {
    string answer = "";
    int numBegin = 0;
    vector<int> nums;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            string numStr = s.substr(numBegin, i - numBegin);
            nums.push_back(stoi(numStr));
            numBegin = i + 1;
        }
    }

    string numStr = s.substr(numBegin, s.length());
    nums.push_back(stoi(numStr));

    sort(nums.begin(), nums.end());

    answer = to_string(nums[0]) + " ";
    answer.append(to_string(nums.back()));

    return answer;
}