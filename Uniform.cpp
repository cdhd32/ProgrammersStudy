#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "체육복 문제"
/// 전역으로 전체 학생 수 만큼의 배열을 선언하고
/// 여분이 있는 학생은 1, 도둑맞은 학생은 -1로 저장하는 방법도 있다.
/// 여분이 있는데 도둑 맞은 학생을 먼저 체크하고 앞뒤로 빌려줄 수 있는 학생을 검사한다.
/// #재도전
/// </summary>
/// <param name="n"></param>
/// <param name="lost"></param>
/// <param name="reserve"></param>
/// <returns></returns>
int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    //도둑 맞은 만큼 감소
    n -= lost.size();

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    //여분이 있는데 도둑 맞은 학생 집계
    for (int i = 0; i < lost.size(); i++)
    {
        for (int j = 0; j < reserve.size(); j++)
        {
            if (lost[i] == reserve[j])
            {
                lost.erase(lost.begin() + i);
                i--;
                reserve.erase(reserve.begin() + j);
                j--;
                n++;
            }
        }
    }

    //앞뒤로 빌려 줄 수 있는 학생 찾기
    for (int i = 0; i < lost.size(); i++)
    {
        for (int j = 0; j < reserve.size(); j++)
        {
            if (lost[i] + 1 == reserve[j] || lost[i] - 1 == reserve[j])
            {
                lost.erase(lost.begin() + i);
                i--;
                reserve.erase(reserve.begin() + j);
                n++;
                break;
            }
        }
    }

    answer = n;

    return answer;
}