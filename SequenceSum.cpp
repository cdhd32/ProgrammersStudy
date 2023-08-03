#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 2 "���� �κ� ���� ���� ����" ���� Ǯ��
/// </summary>
/// <param name="elements"></param>
/// <returns></returns>
int solution(vector<int> elements) {
    int answer = 0;

    unordered_set<int> sumSet;

    for (int i = 0; i < elements.size(); i++)
    {
        int partialSum = 0;
        for (int j = 1; j < elements.size() - 1; j++)
        {
            partialSum += elements[(i + j) % elements.size()];
            if (sumSet.find(partialSum) == sumSet.end())
            {
                sumSet.insert(partialSum);
            }
        }
    }

    answer = sumSet.size();

    return answer;
}