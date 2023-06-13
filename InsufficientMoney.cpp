using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "������ �ݾ� ����ϱ�" ���� Ǯ��
/// �Է��� int ���̶� int ���� �������ϸ�
/// �߰��� �����÷ο찡 �Ͼ �� ������ ����ȯ�� ���־���Ѵ�.
/// </summary>
/// <param name="price"></param>
/// <param name="money"></param>
/// <param name="count"></param>
/// <returns></returns>
long long solution(int price, int money, int count)
{
    long long answer = -1;

    long long sum = (long long)price * (long long)count * ((long long)count + 1) / 2;

    answer = sum - money;

    if (answer <= 0)
        answer = 0; 

    return answer;
}