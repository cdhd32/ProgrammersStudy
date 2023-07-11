#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "덧칠하기" 문제
/// </summary>
/// <param name="n"></param>
/// <param name="m"></param>
/// <param name="section"></param>
/// <returns></returns>
int solution(int n, int m, vector<int> section) {
    int answer = 0;

    while (section.size() > 0)
    {
        int max = 0;
        int length = 0; //section 기준 0번째 부터 페인트 칠이 된 마지막 섹션
        for (int i = 0; i < section.size(); i++)
        {
            //한번에 칠하는 섹션 탐색
            if (section[i] <= section[0] + m - 1)
                length = i;
            else
            {
                length = i - 1;
                break;
            }
        }

        //한번에 칠하는 섹션 앞에서 부터 제거
        for (int i = 0; i < length + 1; i++)
        {
            section.erase(section.begin());
        }

        answer++;
    }
    

    return answer;
}