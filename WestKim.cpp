#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "�輭�� ã��" ���� Ǯ��
/// </summary>
/// <param name="seoul"></param>
/// <returns></returns>
string solution(vector<string> seoul) {
    string answer = "";

    for (int i = 0; seoul.size(); i++)
    {
        if (seoul[i].compare("Kim") == 0)
        {
            answer = "�輭���� " + to_string(i) + "�� �ִ�";
            break;
        }  
    }

    return answer;
}