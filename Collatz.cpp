#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "�ݶ��� ����" ����
/// </summary>
/// <param name="num"></param>
/// <returns></returns>
int solution(int num) {
    int answer = 0;
    //�׽�Ʈ ���̽��� ���� ��� �߿� int �������� �ʰ��� ���� �ֱ� ������ ���� ǥ�� ������ ���� �ڷ����� ���
    //������ �޾� �ô� ���� �����ε� ������ ���ؼ� ���� Ǯ�̸� �ô�...
    long longNum = num; 
    for (int count = 0; count < 500; count++)
    {
        if (longNum == 1)
        {
            answer = count;
            break;
        }
        else
        {
            answer = -1;
        }

        //num & 0x01 �� ������� ¦�� �Ǻ� ����
        if (longNum % 2 == 0)
            longNum /= 2;
        else
            longNum = longNum * 3 + 1;
    }

    return answer;
}