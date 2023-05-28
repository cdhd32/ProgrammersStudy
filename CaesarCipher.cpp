#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "시저암호" 문제
/// 이저 암호 구현 자체는 어렵지 않으나 아스키 코드에 대한 이해가 없으면 풀기 힘든 문제
/// </summary>
/// <param name="s"></param>
/// <param name="n"></param>
/// <returns></returns>
string solution(string s, int n) {
    string answer = "";
    int alphabetSize = 'z' - 'a' + 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            answer += ' ';
            continue;
        }

        if (s[i] >= 'a')
        {
            answer += 'a' + (s[i] - 'a' + n) % alphabetSize;
        }
        else
        {
            answer += 'A' + (s[i] - 'A' + n) % alphabetSize;
        }
    }

    return answer;
}