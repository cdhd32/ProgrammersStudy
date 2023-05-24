#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 ���� "�������" ���� Ǯ��
/// </summary>
/// <param name="k"></param>
/// <param name="m"></param>
/// <param name="score"></param>
/// <returns></returns>
int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int boxCount = score.size() / m;

    sort(score.begin(), score.end(), greater<>());

    for (int i = 0; i < boxCount; i++)
    {
        answer += score[i * m + m - 1] * m;
    }

    return answer;
}