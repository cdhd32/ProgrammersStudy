#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "콜라문제" 문제 풀이
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <param name="n"></param>
/// <returns></returns>
int solution(int a, int b, int n) {
    int answer = 0;

    while (n >= a)
    {
        int income = n / a * b;
        n = income + n % a;
        answer += income;
    }

    return answer;
}