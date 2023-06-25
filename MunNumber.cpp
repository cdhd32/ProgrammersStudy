#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 2 "�ִ񰪰� �ּڰ�" ���� Ǯ��
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