#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "�̻��� ���� �����" ���� Ǯ��
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
string solution(string s) {
    string answer = "";

    int utol = 'a' - 'A';
    int wordCount = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            wordCount = 0;
            continue;
        }
            

        if (wordCount % 2 != 0)
        {
            if (s[i] < 'a')
                s[i] += utol;
        }
        else
        {
            if (s[i] >= 'a')
                s[i] -= utol;
        }

        wordCount++;
    }

    answer = s;

    return answer;
}