#include <string>
#include <vector>

using namespace std;

/// ó������ ����ϰ� ���ں��� 1~N ���� ������ �����鼭 ����� ���ߴµ�
/// ���� �ð��� ���� �ɷ� �Ϻ� �׽�Ʈ ���̽��� ���� �ð� �ʰ��� ���� ��� ���� ���ϴ� ������ �־���.
/// ��Ʈ�� �ôµ� ���� ������ ���ڸ�
/// ��� ������ ���� ���̽��� ��� �� �����ϸ� �ڱ� �ڽ��� �Ǵ� ���̽��� �ƴ� ������ ���������µ�
/// �� �� ���� ���̽��� ���� �����ϰ� �б� ó���� �ϰ�
/// �����ٺ��� �۰� ����� �������� ��� ������ ���ϸ� ���� �ð��� ���� ���� ���� �� �ִ�.
/// ��) 100�� ������ 10�� ��� 1, 2, 5, 10 4��
///     100�� ��� 1, 2, 5, 10, 20, 25, 100 7��
/// ���� ���̴� ��� ���� ���� ����̶�� �ϴ� ���߿� �ٽ� �� �ð��� ���� ���� ���� �� ����. #�絵��

/// <summary>
/// ���α׷��ӽ� ���� 1 "���ܿ��� ����" ���� Ǯ�� �ڵ�
/// </summary>
/// <param name="number"></param>
/// <param name="limit"></param>
/// <param name="power"></param>
/// <returns></returns>
int solution(int number, int limit, int power) {
    int answer = 0;

    for (int i = 1; i <= number; i++)
    {
        int knightPower = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                knightPower++;
                if (j * j < i)
                    knightPower++;
            }
        }

        if (knightPower <= limit)
            answer += knightPower;
        else
            answer += power;
    }

    return answer;
}