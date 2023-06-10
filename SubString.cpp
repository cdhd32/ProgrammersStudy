#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "크기가 작은 부분문자열" 문제 풀이
/// 문제에서 제시한 자리수가 int 표현 범위 넘어감 (최대 18 자리)
/// </summary>
/// <param name="t"></param>
/// <param name="p"></param>
/// <returns></returns>
int solution(string t, string p) {
    int answer = 0;

    vector<string> subStrings;

    long tLength = t.length();
    long pLength = p.length();

    for (int i = 0; i <= tLength - pLength; i++)
    {
        subStrings.push_back(t.substr(i, pLength));
    }

    long pIntVal = stol(p);
    for (const string& subString : subStrings)
    {
        if (stol(subString) <= pIntVal)
            answer++;
    }

    return answer;
}