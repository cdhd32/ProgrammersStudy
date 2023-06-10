#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "ũ�Ⱑ ���� �κй��ڿ�" ���� Ǯ��
/// �������� ������ �ڸ����� int ǥ�� ���� �Ѿ (�ִ� 18 �ڸ�)
/// </summary>
/// <param name="t"></param>
/// <param name="p"></param>
/// <returns></returns>
int solution(string t, string p) {
    int answer = 0;

    vector<string> subStrings;

    long tLength = t.length();
    long pLength = p.length();

    for (int i = 0; i <= tLength - pLength; i++)
    {
        subStrings.push_back(t.substr(i, pLength));
    }

    long pIntVal = stol(p);
    for (const string& subString : subStrings)
    {
        if (stol(subString) <= pIntVal)
            answer++;
    }

    return answer;
}