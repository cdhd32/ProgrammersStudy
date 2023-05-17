#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "푸드 파이트 대회" 문제 풀이
/// 문자열 추가와 뒤집기를 조합하여 해답 문자열을 생성
/// </summary>
/// <param name="food"></param>
/// <returns></returns>
string solution(vector<int> food) {
    string answer = "";

    string serial = "";

    for (int i = 1; i < food.size(); i++)
    {
        //음식 개수가 홀수면 1을 빼고 2로 나눈다.
        int iterCount = food[i] % 2 == 1 ? (food[i] - 1) / 2 : food[i] / 2;
        for (int j = 0; j < iterCount; j++)
        {
            serial.append(to_string(i));
        }
    }

    answer = serial + "0";
    reverse(serial.begin(), serial.end());
    answer += serial;

    return answer;
}