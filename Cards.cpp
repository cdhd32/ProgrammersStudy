#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "카드 뭉치" 문제, #재도전 예정
/// </summary>
/// <param name="cards1"></param>
/// <param name="cards2"></param>
/// <param name="goal"></param>
/// <returns></returns>
string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";

    for (int i = 0; i < goal.size(); i++)
    {
        auto c1 = cards1.begin();
        auto c2 = cards2.begin();
        
        while (c1 != cards1.end() && c2 != cards2.end())
        {
            if (*c1 == goal[i])
            {
                cards1.erase(c1);
                continue;
            }
            else
            {
                c1++;
            }

            if (*c2 == goal[i])
            {
                cards2.erase(c2);
                continue;
            }
            else
            {
                c2++;
            }
        }
    }

    return answer;
}