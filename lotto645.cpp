#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "�ζ��� �ְ� ������ ���� ����" ���� Ǯ��
/// </summary>
/// <param name="lottos"></param>
/// <param name="win_nums"></param>
/// <returns></returns>
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;

    int rank[7] = {6, 6, 5, 4, 3, 2, 1};

    int zerocount = 0;
    int matchCount = 0;

    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());

    for (int lotto : lottos)
    {
        if (lotto == 0)
            zerocount++;
    }

    for (int win_num : win_nums)
    {
        if (binary_search(lottos.begin(), lottos.end(), win_num))
            matchCount++;
    }

    answer.push_back(rank[matchCount + zerocount]);
    answer.push_back(rank[matchCount]);

    return answer;
}