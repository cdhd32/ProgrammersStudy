#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 음양 더하기 문제 풀이
/// </summary>
/// <param name="absolutes"></param>
/// <param name="signs"></param>
/// <returns></returns>
int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;

    for (int i = 0; i < absolutes.size(); i++)
    {
        int sign = signs[i] ? 1 : -1;
        answer += absolutes[i] * sign;
    }

    return answer;
}