#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 ���� ���ϱ� ���� Ǯ��
/// </summary>
/// <param name="absolutes"></param>
/// <param name="signs"></param>
/// <returns></returns>
int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;

    for (int i = 0; i < absolutes.size(); i++)
    {
        int sign = signs[i] ? 1 : -1;
        answer += absolutes[i] * sign;
    }

    return answer;
}