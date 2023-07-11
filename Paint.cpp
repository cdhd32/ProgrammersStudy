#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "��ĥ�ϱ�" ����
/// </summary>
/// <param name="n"></param>
/// <param name="m"></param>
/// <param name="section"></param>
/// <returns></returns>
int solution(int n, int m, vector<int> section) {
    int answer = 0;

    while (section.size() > 0)
    {
        int max = 0;
        int length = 0; //section ���� 0��° ���� ����Ʈ ĥ�� �� ������ ����
        for (int i = 0; i < section.size(); i++)
        {
            //�ѹ��� ĥ�ϴ� ���� Ž��
            if (section[i] <= section[0] + m - 1)
                length = i;
            else
            {
                length = i - 1;
                break;
            }
        }

        //�ѹ��� ĥ�ϴ� ���� �տ��� ���� ����
        for (int i = 0; i < length + 1; i++)
        {
            section.erase(section.begin());
        }

        answer++;
    }
    

    return answer;
}