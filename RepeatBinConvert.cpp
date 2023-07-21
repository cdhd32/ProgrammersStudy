#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 2 "이진 변환 반복하기" 문제 풀이
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
vector<int> solution(string s) {
    vector<int> answer;

    int removeCnt = 0;
    int convertCnt = 0;

    while (s != "1")
    {
        int length = 0;

        for (char ch : s)
        {
            if (ch == '0')
            {
                removeCnt++;
            }
            else
            {
                length++;
            }
        }

        s = "";
        while (length > 0)
        {
            s += to_string(length % 2);
            length /= 2;
        }

        reverse(s.begin(), s.end());

        convertCnt++;
    }

    answer.push_back(convertCnt);
    answer.push_back(removeCnt);

    return answer;
}