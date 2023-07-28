#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "숫자 짝꿍" 문제 풀이
/// </summary>
/// <param name="X"></param>
/// <param name="Y"></param>
/// <returns></returns>
string solution(string X, string Y) {
    string answer = "";

    vector<int> xnums = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> ynums = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < X.length(); i++)
    {
        for (int n = 0; n < 10; n++)
        {
            if (X[i] - '0' == n)
                xnums[n]++;
        }
    }

    for (int i = 0; i < Y.length(); i++)
    {
        for (int n = 0; n < 10; n++)
        {
            if (Y[i] - '0' == n)
                ynums[n]++;
        }
    }

    for (int i = 9; i >= 0; i--)
    {
        xnums[i] = min(xnums[i], ynums[i]);

        for (int j = 0; j < xnums[i]; j++)
            answer += i + '0';
    }

    if (answer.length() == 0)
        return "-1";

    if (answer[0] == '0')
        return "0";

    return answer;
}