#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ����1 ���� "���� ����(1)" Ǯ�� �ڵ�
/// </summary>
/// <param name="k"></param>
/// <param name="score"></param>
/// <returns></returns>
vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> rankScores;

    for (int i = 0; i < score.size(); i++)
    {
        rankScores.push_back(score[i]);

        sort(rankScores.begin(), rankScores.end(), greater<int>());

        if (rankScores.size() < k)
        {
            answer.push_back(rankScores.back());
        }
        else
        {
            answer.push_back(rankScores[k-1]);
        }
    }

    return answer;
}