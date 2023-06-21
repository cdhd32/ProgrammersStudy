#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "비밀 지도" 문제 풀이
/// </summary>
/// <param name="n"></param>
/// <param name="arr1"></param>
/// <param name="arr2"></param>
/// <returns></returns>
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for (int i = 0; i < n; i++)
    {
        int result = arr1[i] | arr2[i];

        string mapRow = "";

        for (int j = 0; j < n; j++)
        {
            if (result % 2 == 1)
                mapRow.append("#");
            else
                mapRow.append(" ");
            
            result /= 2;
        }

        reverse(mapRow.begin(), mapRow.end());
        answer.push_back(mapRow);
    }

    return answer;
}