#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "�ݶ���" ���� Ǯ��
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