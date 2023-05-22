#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� 1���� "�˾���(2)"  ���� Ǯ��
/// ��ġ�ϴ� ����(prons) ���ڿ� ��ŭ �տ��� �����ϸ鼭 �ڷ� ���Ѵ�.
/// #�絵��
/// </summary>
/// <param name="babbling"></param>
/// <returns></returns>
int solution(vector<string> babbling) {
    int answer = 0;

    vector<string> prons = { "aya", "ye", "woo", "ma" };
    
    for (auto babble : babbling)
    {
        string currentWord = "";
        for (int i = 0; i < prons.size(); i++)
        {
            //���� �ߺ� ���� üũ
            if (prons[i] == currentWord)
                continue;

            //���ڿ� ó���� ���� ���ڿ��� �ִ��� �˻�, �ִٸ� ������ 0���� �ٽ� ����
            if (babble.substr(0, prons[i].length()) == prons[i])
            {
                babble = babble.substr(prons[i].length(), babble.length() - 1);
                currentWord = prons[i];
                i = -1;
            }
        }

        if (babble.empty())
        {
            answer++;
        }
            
    }

    return answer;
}