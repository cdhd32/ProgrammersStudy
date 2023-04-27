#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "콜라츠 추측" 문제
/// </summary>
/// <param name="num"></param>
/// <returns></returns>
int solution(int num) {
    int answer = 0;
    //테스트 케이스에 따라 계산 중에 int 정수형을 초과할 수도 있기 때문에 넓을 표현 범위를 가진 자료형을 사용
    //예전예 겪어 봤던 함정 패턴인데 예상을 못해서 문제 풀이를 봤다...
    long longNum = num; 
    for (int count = 0; count < 500; count++)
    {
        if (longNum == 1)
        {
            answer = count;
            break;
        }
        else
        {
            answer = -1;
        }

        //num & 0x01 의 방식으로 짝수 판별 가능
        if (longNum % 2 == 0)
            longNum /= 2;
        else
            longNum = longNum * 3 + 1;
    }

    return answer;
}