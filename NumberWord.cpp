#include <string>
#include <vector>

using namespace std;

const int radix = 10;
string numberStrings[] = {
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine"
};

/// <summary>
/// ���α׷��ӽ� ���� 1 "���� ���ڿ��� ���ܾ�" ���� Ǯ��
/// https://thispointer.com/find-and-replace-all-occurrences-of-a-sub-string-in-c/
/// ���ڿ� �˻� ��, ġȯ�ϴ� ��� ����, ���� ����ϴ� ����̴� Ȯ���ϰ� �����ϵ��� ����
/// ���⼭ ����ϴ� �ֿ� string ���� �Լ��� �� �����ϵ��� ����
/// regex�� ����ϴ� ����� �ִµ� ���⵵, ��� ������ ��������Ƿ� string���� ����ϵ� ������ ����
/// �� �ܿ��� �Է� ���ڿ��� Ž���ϸ鼭 ���� ������ �� 2���ڱ��� �б�ó���� ���ϴ� ������� �����ϴ� ����� �ִ�.
/// �ڵ� ���̴� ����������� ���ڿ� �� ������ ���� �� �־ ���� ������ �����Ѵ�.
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
int solution(string s) {
    int answer = 0;

    for (int i = 0; i < radix; i++)
    {
        string replaceStr = to_string(i);
        size_t pos = s.find(numberStrings[i]);
        while (pos != string::npos)
        {
            s.replace(pos, numberStrings[i].size(), replaceStr);

            pos = s.find(numberStrings[i], pos + replaceStr.size());
        }   
    }

    answer = stoi(s);

    return answer;
}