#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 ���� "�������� 1�� �Ǵ� �� ã��"
/// �̰��� ���� 1 �ַ��???
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