#include <string>

using namespace std;

/// <summary>
/// 프로그래머스 레벨1 "문자열 나누기" 문제 풀이
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
int solution(string s) {
    int answer = 0;

    char startCh = '^';
    int startChCount = 0;

    for (int i = 0; i < s.length(); i++)
    {
        //분리 될 문자열의 첫 번째 문자면 글자 저장, 1증가 후 다음 글자 검사
        if (startCh == '^')
        {
            startCh = s[i];
            startChCount = 1;
            answer++;
            continue;
        }
        
        //i 번째 문자가 첫 글자이면 증가 아니면 감소
        if (s[i] == startCh)
        {
            startChCount++;
        }
        else
        {
            startChCount--;
        }
        
        //문자열 카운트 과정 초기화, 분리된 문자열 개수 카운트 증가
        if (startChCount <= 0)
        {
            startCh = '^';
            startChCount = 0;
        }
    }

    return answer;
}