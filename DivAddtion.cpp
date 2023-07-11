#include <string>
#include <vector>

using namespace std;
/// <summary>
/// ���α׷��ӽ� ���� 1 "����� ������ ����" ���� Ǯ�� 
/// </summary>
/// <param name="left"></param>
/// <param name="right"></param>
/// <returns></returns>
int solution(int left, int right) {
    int answer = 0;

    for (int n = left; n <= right; n++)
    {
        int divCnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                divCnt++;
        }

        if (divCnt % 2 == 0)
            answer += n;
        else
            answer -= n;
    }
    

    return answer;
}