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
/// ���α׷��ӽ� ���� 1 "���� ū ����" ���� Ǯ��
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