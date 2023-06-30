#include <string>
#include <vector>
#include <set>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "두 개 뽑아서 더하기" 문제 풀이
/// </summary>
/// <param name="numbers"></param>
/// <returns></returns>
vector<int> solution(vector<int> numbers) {
    vector<int> answer;

    set<int> numSet;

    for (int i = 0; i < numbers.size(); i++)
    {
        for (int j = 0; j < numbers.size(); j++)
        {
            if (i != j)
                numSet.insert(numbers[i] + numbers[j]);
        }
    }

    for (auto it = numSet.begin(); it != numSet.end(); it++)
    {
        answer.push_back(*it);
    }

    return answer;
}