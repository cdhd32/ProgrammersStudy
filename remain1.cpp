#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 문제 "나머지가 1이 되는 수 찾기"
/// 이것이 레벨 1 솔루션???
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int solution(int n) {
    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        if (n % i == 1)
        {
            answer = i;
            break;
        }
    }

    return answer;
}