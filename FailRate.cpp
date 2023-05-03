#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "실패율" 문제
/// 레코드 하나에 해당하는 자료 구조를
/// 두개의 pair를 저장하는 vector 2개로 구성해서 보기 어려운 코드가 되었다.
/// struct 하나로 만들어서 정렬하는 것이 편할 것 같다. #재도전
/// </summary>
/// <param name="left"></param>
/// <param name="right"></param>
/// <returns></returns>
bool comp(pair<int, double>& left, pair<int, double>& right)
{
    //문제에서 제시한 예외 처리 1
    //중복 처리, 비교하는 실패율이 같으면 stage 번호 기준 오름차 순으로 정렬
    if ((double)left.second == (double)right.second)
        return left.first < right.first;
    else
        return (double)left.second > (double)right.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;

    //어차피 compare 함수 만들거면 struct로 만드는 것도 고려해볼만 한듯
    vector<pair<int, int>> failedRates;
    vector<pair<int, double>> stageFailedRates;

    for (int i = 1; i <= N; i++)
    {
        failedRates.push_back(make_pair(0, 0));
    }

    for (int i = 0; i < stages.size(); i++)
    {
        //실패율 = (스테이지에 도달했으나 아직 클리어하지 못한 플레이어의 수) / (스테이지에 도달한 플레이어 수)
        //스테이지에 도달했으나 아직 클리어하지 못한 플레이어의 수(분자)first,
        //스테이지에 도달한 플레이어 수 (분모) second에 저장
        failedRates[stages[i] - 1].first++;
        for (int j = 0; j < stages[i]; j++)
            failedRates[j].second++;
    }
    for (int i = 0; i < N; i++)
    {
        double failedRate;
        
        //문제에서 제시한 예외 처리 2
        //스테이지에 도달한 유저가 없는 경우 해당 스테이지의 실패율은 0으로 처리 
        if (failedRates[i].second != 0)
            failedRate = (double)failedRates[i].first / (double)failedRates[i].second;
        else
            failedRate = 0.0;

        stageFailedRates.push_back(make_pair(i+1, failedRate));
    }   

    sort(stageFailedRates.begin(), stageFailedRates.end(), comp);

    for (const pair<int, double>& pair : stageFailedRates)
    {
        answer.push_back(pair.first);
    }

    return answer;
}