#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 �ڵ��� ��ȣ ������ ����
/// *�� �������ϴ� ������ ���ѵ� �ش� ������ŭ ��ȸ�ϸ鼭 ���ڸ� ��ü�Ѵ�.
/// </summary>
/// <param name="phone_number"></param>
/// <returns></returns>
string solution(string phone_number) {
    string answer = "";

    int encryptionLength = phone_number.size() - 4; //������ 4�ڸ��� ������ �ʴ´�

    for (int i = 0; i < encryptionLength; i++)
    {
        phone_number[i] = '*';
    }

    answer = phone_number;

    return answer;
}