#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "������ȣ" ����
/// ���� ��ȣ ���� ��ü�� ����� ������ �ƽ�Ű �ڵ忡 ���� ���ذ� ������ Ǯ�� ���� ����
/// </summary>
/// <param name="s"></param>
/// <param name="n"></param>
/// <returns></returns>
string solution(string s, int n) {
    string answer = "";
    int alphabetSize = 'z' - 'a' + 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            answer += ' ';
            continue;
        }

        if (s[i] >= 'a')
        {
            answer += 'a' + (s[i] - 'a' + n) % alphabetSize;
        }
        else
        {
            answer += 'A' + (s[i] - 'A' + n) % alphabetSize;
        }
    }

    return answer;
}