#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 핸드폰 번호 가리기 문제
/// *로 가려야하는 범위를 구한뒤 해당 범위만큼 순회하면서 문자를 교체한다.
/// </summary>
/// <param name="phone_number"></param>
/// <returns></returns>
string solution(string phone_number) {
    string answer = "";

    int encryptionLength = phone_number.size() - 4; //마지막 4자리는 가리지 않는다

    for (int i = 0; i < encryptionLength; i++)
    {
        phone_number[i] = '*';
    }

    answer = phone_number;

    return answer;
}