#include <string>
#include <vector>
#include <unordered_map>

#include <iostream>
using namespace std;


/// <summary>
/// 프로그래머스 레벨 1 추억 점수문제 솔루션
/// </summary>
/// <param name="name">3 ≤ name.size() ≤ 100</param>
/// <param name="yearning">>3 ≤ yearning.size() ≤ 100</param>
/// <param name="photo">3 ≤ photo.size() ≤ 100</param>
/// <returns></returns>
vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;

    //이름-추억점수 정보를 저장하는 unordered_map
    unordered_map<string, int> nameYearningMap;
    
    //size == name.size() == yearning.size() 이므로 int 변수 하나로 0부터 size 까지 순회해도 무방
    //만약 name.size() != yearning.size() 일 때 두 vector를 순회하는 더 안전한 방법이 있을까? #Question
    int size = name.size();
    for (int i = 0; i < size; i++)
    {
        nameYearningMap[name[i]] = yearning[i];
    }

    //이중 vector 구조로 된 photo는 int 변수 2개로 순회
    int colSize = photo.size();

    for (int i = 0; i < colSize; i++)
    {
        //i 루프 한번 당 1 행씩 처리,
        //행별로 주어진 이름들의 갯수를 저장하고 j 루프에서 이름 하나씩 순회하면서
        //이름에 대응하는 추억점수를 nameYearningMap에서 찾아서 행 별 점수 합계 rowSum에 더한다.
        int rowSum = 0;
        int rowSize = photo[i].size();
        for (int j = 0; j < rowSize; j++)
        {
            rowSum += nameYearningMap[photo[i][j]];
        }

        //행별 점수는 출력 vector에 저장한다.
        answer.push_back(rowSum);
    }

    return answer;
}
