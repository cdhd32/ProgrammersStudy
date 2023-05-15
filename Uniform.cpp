#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "ü���� ����"
/// �������� ��ü �л� �� ��ŭ�� �迭�� �����ϰ�
/// ������ �ִ� �л��� 1, ���ϸ��� �л��� -1�� �����ϴ� ����� �ִ�.
/// ������ �ִµ� ���� ���� �л��� ���� üũ�ϰ� �յڷ� ������ �� �ִ� �л��� �˻��Ѵ�.
/// #�絵��
/// </summary>
/// <param name="n"></param>
/// <param name="lost"></param>
/// <param name="reserve"></param>
/// <returns></returns>
int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    //���� ���� ��ŭ ����
    n -= lost.size();

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    //������ �ִµ� ���� ���� �л� ����
    for (int i = 0; i < lost.size(); i++)
    {
        for (int j = 0; j < reserve.size(); j++)
        {
            if (lost[i] == reserve[j])
            {
                lost.erase(lost.begin() + i);
                i--;
                reserve.erase(reserve.begin() + j);
                j--;
                n++;
            }
        }
    }

    //�յڷ� ���� �� �� �ִ� �л� ã��
    for (int i = 0; i < lost.size(); i++)
    {
        for (int j = 0; j < reserve.size(); j++)
        {
            if (lost[i] + 1 == reserve[j] || lost[i] - 1 == reserve[j])
            {
                lost.erase(lost.begin() + i);
                i--;
                reserve.erase(reserve.begin() + j);
                n++;
                break;
            }
        }
    }

    answer = n;

    return answer;
}