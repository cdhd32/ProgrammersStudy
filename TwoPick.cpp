#include <string>
#include <vector>
#include <set>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "�� �� �̾Ƽ� ���ϱ�" ���� Ǯ��
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