#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "실패율" 문제
/// </summary>
/// <param name="left"></param>
/// <param name="right"></param>
/// <returns></returns>
bool comp(pair<int, int>& left, pair<int, int>& right)
{
    if (left.second == right.second)
        return left.first < right.first;
    else
        return left.second < right.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, int>> failed;

    for (int i = 1; i <= N+1; i++)
    {
        failed.push_back(make_pair(i, 0));
    }

    for (int i = 0; i < stages.size(); i++)
    {
        for (int j = 0; j < )
        failed[stages[i]-1].first++;
        failed[stages[i]-1].second++;
    }

    sort(failed.begin(), failed.end(), comp);

    for (const pair<int, int>& pair : failed)
    {
        answer.push_back(pair.first);
    }

    return answer;
}