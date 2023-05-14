#include <vector>
#include <unordered_set>
using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "폰켓몬" 문제
/// nums의 폰켓몬들을 중복 없는 형태로 unordered_set에 저장하면
/// unordered_set.size()가 가장 많은 종류의 폰켓몬을 선택하는 방법으로 선택할 때 폰켓몬 종류 번호의 개수가 된다.
/// 만약 N/2 보다 클 경우 N/2 만큼만 선택한 것이 문제에 명시된 조건을 따라 가장 많은 종류의 폰켓몬을 선택하는 방법이 된다.
/// 따라서 마지막에 nums.size() / 2 랑 한번 비교해서 정답에 해당하는 값을 반환하면 된다.
/// </summary>
/// <param name="nums"></param>
/// <returns></returns>
int solution(vector<int> nums)
{
    int answer = 0;
    unordered_set<int> ponkemonSet;
    
    for (auto num : nums)
    {
        ponkemonSet.insert(num);
    }

    if (ponkemonSet.size() < nums.size() / 2)
        answer = ponkemonSet.size();
    else
        answer = nums.size() / 2;

    return answer;
}