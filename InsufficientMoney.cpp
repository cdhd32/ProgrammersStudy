using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "부족한 금액 계산하기" 문제 풀이
/// 입력이 int 형이라 int 끼리 곱연산하면
/// 중간에 오버플로우가 일어날 수 있으니 형변환을 해주어야한다.
/// </summary>
/// <param name="price"></param>
/// <param name="money"></param>
/// <param name="count"></param>
/// <returns></returns>
long long solution(int price, int money, int count)
{
    long long answer = -1;

    long long sum = (long long)price * (long long)count * ((long long)count + 1) / 2;

    answer = sum - money;

    if (answer <= 0)
        answer = 0; 

    return answer;
}