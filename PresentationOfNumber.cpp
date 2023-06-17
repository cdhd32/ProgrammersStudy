#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 2 "숫자의 표현" 문제 풀이
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int solution(int n) {
    int answer = 0;

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = i; j <= n; j++)
        {
            sum += j;
            if (sum >= n)
                break;
        }

        if (sum == n)
            answer++;
            
    }

    return answer;
}