#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "최소직사각형" 문제
/// </summary>
/// <param name="sizes"></param>
/// <returns></returns>
int solution(vector<vector<int>> sizes) {
    int answer = 0;

    int maxWidth = 0;
    int maxHeight = 0;

    for (auto& size : sizes)
    {
        //넓은 쪽을 가로로 한다.
        if (size[0] < size[1])
        {
            //XOR 스왑
            size[0] = size[0] ^ size[1];
            size[1] = size[0] ^ size[1];
            size[0] = size[0] ^ size[1];
        }

        //명함 별로 비교 하면서 가장 큰 너비, 높이를 저장
        if (size[0] > maxWidth)
            maxWidth = size[0];

        if (size[1] > maxHeight)
            maxHeight = size[1];
    }

    answer = maxWidth * maxHeight;

    return answer;
}