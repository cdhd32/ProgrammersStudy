#include <string>
#include <vector>

using namespace std;

/// 처음에는 평범하게 숫자별로 1~N 까지 루프를 돌리면서 약수를 구했는데
/// 실행 시간이 오래 걸려 일부 테스트 케이스가 실행 시간 초과로 인해 통과 하지 못하는 문제가 있었다.
/// 힌트를 봤는데 내용 정리를 하자면
/// 약수 개수를 세는 케이스는 약수 중 제곱하면 자기 자신이 되는 케이스와 아닌 것으로 나뉘어지는데
/// 이 두 가지 케이스에 대해 적절하게 분기 처리를 하고
/// 제곱근보다 작고 가까운 정수까지 약수 개수를 구하면 수행 시간을 절반 정도 줄일 수 있다.
/// 예) 100의 제곱근 10의 약수 1, 2, 5, 10 4개
///     100의 약수 1, 2, 5, 10, 20, 25, 100 7개
/// 자주 쓰이는 약수 개수 세는 방법이라고 하니 나중에 다시 볼 시간을 갖는 것이 좋을 것 같다. #재도전

/// <summary>
/// 프로그래머스 레벨 1 "기사단원의 무기" 문제 풀이 코드
/// </summary>
/// <param name="number"></param>
/// <param name="limit"></param>
/// <param name="power"></param>
/// <returns></returns>
int solution(int number, int limit, int power) {
    int answer = 0;

    for (int i = 1; i <= number; i++)
    {
        int knightPower = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                knightPower++;
                if (j * j < i)
                    knightPower++;
            }
        }

        if (knightPower <= limit)
            answer += knightPower;
        else
            answer += power;
    }

    return answer;
}