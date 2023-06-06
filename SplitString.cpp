#include <string>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ����1 "���ڿ� ������" ���� Ǯ��
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
int solution(string s) {
    int answer = 0;

    char startCh = '^';
    int startChCount = 0;

    for (int i = 0; i < s.length(); i++)
    {
        //�и� �� ���ڿ��� ù ��° ���ڸ� ���� ����, 1���� �� ���� ���� �˻�
        if (startCh == '^')
        {
            startCh = s[i];
            startChCount = 1;
            answer++;
            continue;
        }
        
        //i ��° ���ڰ� ù �����̸� ���� �ƴϸ� ����
        if (s[i] == startCh)
        {
            startChCount++;
        }
        else
        {
            startChCount--;
        }
        
        //���ڿ� ī��Ʈ ���� �ʱ�ȭ, �и��� ���ڿ� ���� ī��Ʈ ����
        if (startChCount <= 0)
        {
            startCh = '^';
            startChCount = 0;
        }
    }

    return answer;
}