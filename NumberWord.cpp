#include <string>
#include <vector>

using namespace std;

const int radix = 10;
string numberStrings[] = {
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine"
};

/// <summary>
/// 프로그래머스 레벨 1 "숫자 문자열과 영단어" 문제 풀이
/// https://thispointer.com/find-and-replace-all-occurrences-of-a-sub-string-in-c/
/// 문자열 검색 후, 치환하는 방법 참고, 자주 사용하는 방법이니 확실하게 이해하도록 하자
/// 여기서 사용하는 주요 string 관련 함수도 잘 숙지하도록 하자
/// regex를 사용하는 방법도 있는데 복잡도, 출력 예상이 어려워지므로 string으로 사용하되 숙지만 하자
/// 그 외에는 입력 문자열을 탐색하면서 숫자 문자의 앞 2글자까지 분기처리로 비교하는 방법으로 구현하는 방법도 있다.
/// 코드 길이는 길어지겠지만 문자열 비교 연산을 줄일 수 있어서 빠른 성능을 보장한다.
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
int solution(string s) {
    int answer = 0;

    for (int i = 0; i < radix; i++)
    {
        string replaceStr = to_string(i);
        size_t pos = s.find(numberStrings[i]);
        while (pos != string::npos)
        {
            s.replace(pos, numberStrings[i].size(), replaceStr);

            pos = s.find(numberStrings[i], pos + replaceStr.size());
        }   
    }

    answer = stoi(s);

    return answer;
}