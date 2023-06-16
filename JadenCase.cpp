#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 2 "JadenCase 문자열 만들기" 문제 풀이
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
string solution(string s) {
    string answer = "";

    //맨 첫 번째 문자는 대문자로 변환
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - ('a' - 'A'); //소문자 -> 대문자 변환

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i - 1] != ' ')
        {
            //바로 앞문자가 공백이 아니고 현재 문자가 대문자 일 때
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + ('a' - 'A'); //대문자 -> 소문자 변환
        }
        else
        {
            //바로 앞문자가 공백이고 현재 문자가 소문자 일 때
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - ('a' - 'A'); //소문자 -> 대문자 변환
            }
        }
    }

    answer = s;

    return answer;
}