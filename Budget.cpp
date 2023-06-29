#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ����1 "����" ����
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