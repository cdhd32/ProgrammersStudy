#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int ConuntOne(int num)
{
    int oneCount = 0;

    while (num != 0)
    {
        if (num % 2 == 1)
        {
            oneCount++;
        }

        num /= 2;
    }

    return oneCount;
}

/// <summary>
/// 프로그래머스 레벨 1 "다음 큰 숫자" 문제 풀이
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int solution(int n)
{
    int answer = 0;
    int oneCountN = ConuntOne(n);

    answer = n + 1;

    while (ConuntOne(answer) != oneCountN)
    {
        answer++;
    }

    return answer;
}