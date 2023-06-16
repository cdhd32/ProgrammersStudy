#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 2 "JadenCase ���ڿ� �����" ���� Ǯ��
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
string solution(string s) {
    string answer = "";

    //�� ù ��° ���ڴ� �빮�ڷ� ��ȯ
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - ('a' - 'A'); //�ҹ��� -> �빮�� ��ȯ

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i - 1] != ' ')
        {
            //�ٷ� �չ��ڰ� ������ �ƴϰ� ���� ���ڰ� �빮�� �� ��
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + ('a' - 'A'); //�빮�� -> �ҹ��� ��ȯ
        }
        else
        {
            //�ٷ� �չ��ڰ� �����̰� ���� ���ڰ� �ҹ��� �� ��
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - ('a' - 'A'); //�ҹ��� -> �빮�� ��ȯ
            }
        }
    }

    answer = s;

    return answer;
}