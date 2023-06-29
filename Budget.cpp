#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// 프로그래머스 레벨1 "예산" 문제
/// </summary>
/// <param name="d"></param>
/// <param name="budget"></param>
/// <returns></returns>
int solution(vector<int> d, int budget) {
    int answer = 0;
    int sum = 0;
    sort(d.begin(), d.end());

    for (int buy : d)
    {
        sum += buy;

        if (sum <= budget)
        {
            answer++;
        }
        else
        {
            break;
        }
    }

    return answer;
}