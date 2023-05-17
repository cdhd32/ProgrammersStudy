#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "Ǫ�� ����Ʈ ��ȸ" ���� Ǯ��
/// ���ڿ� �߰��� �����⸦ �����Ͽ� �ش� ���ڿ��� ����
/// </summary>
/// <param name="food"></param>
/// <returns></returns>
string solution(vector<int> food) {
    string answer = "";

    string serial = "";

    for (int i = 1; i < food.size(); i++)
    {
        //���� ������ Ȧ���� 1�� ���� 2�� ������.
        int iterCount = food[i] % 2 == 1 ? (food[i] - 1) / 2 : food[i] / 2;
        for (int j = 0; j < iterCount; j++)
        {
            serial.append(to_string(i));
        }
    }

    answer = serial + "0";
    reverse(serial.begin(), serial.end());
    answer += serial;

    return answer;
}