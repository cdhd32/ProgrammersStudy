#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 문제 "같은 문자는 싫어" 풀이 코드
/// </summary>
/// https://learn.microsoft.com/ko-kr/cpp/standard-library/algorithm-functions?view=msvc-170#unique
/// std::unique를 사용해서 간단하게 해결하는 방법도 있음,
/// 복잡도는 O(N), 비교횟수는 (last(마지막 원소) - first(첫번째 원소)) - 1
/// <param name="arr">0~9까지 int 값을 최대 1,000,000 개까지 저장한 vector</param>
/// <returns></returns>
vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    if (arr.size() == 0)
        return answer;

    answer.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++)
    {
        //가장 마지막에 저장한 int 값과 비교한다.
        if (answer.back() != arr[i])
        {
            answer.push_back(arr[i]);
        }
    }

    return answer;
}