#include <string>
#include <vector>
using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "���ǰ��" ���� �ش�
/// </summary>
/// <param name="answers"></param>
/// <returns></returns>
vector<int> solution(vector<int> answers) {
    vector<int> answer;

    vector<vector<int>> patterns;
    patterns.push_back({1, 2, 3, 4, 5});                    //5
    patterns.push_back({ 2, 1, 2, 3, 2, 4, 2, 5});          //8
    patterns.push_back({ 3, 3, 1, 1, 2, 2, 4, 4, 5, 5});    //10

    int answersSize = answers.size();

    int highScore = 0;
    for (int n = 0; n < patterns.size(); n++)
    {
        int score = 0;
        for (int i = 0; i < answersSize; i++)
        {
            //  % ������ Ȱ���Ͽ� �ݺ��Ǵ� ������ Ž���Ѵ�.
            if (patterns[n][i % patterns[n].size()] == answers[i])
                score++;
        }

        if (highScore < score)
        {
            highScore = score;
            answer.clear();
            answer.push_back(n+1);
        }
        else if (highScore == score)
        {
            answer.push_back(n+1);
        }
    }

    return answer;
}