#include <string>
#include <vector>
#include <cmath>
#include <cstring>

using namespace std;

/// <summary>
/// 프로그래머스 레벨1 "소수 찾기" 문제 풀이, 속도도 빠르고 효율성 테스트도 통과
/// N까지의 수 를 bool 플레그로 소수 여부 확인 및 저장
/// 출처 : https://kbw1101.tistory.com/18
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int solution(int n) {

    int answer = 0;

    bool* arr = new bool[n + 1];
    memset(arr, 1, sizeof(bool) * (n + 1));

    int root = sqrt(n);

    for (int i = 2; i <= root; i++)
    {
        if (arr[i] == true)
            for (int j = i + i; j <= n; j += i)
                arr[j] = false;
    }

    for (int i = 2; i < n; i++)
        if (arr[i] == true)
            answer++;
    return answer;
}

/// <summary>
/// 프로그래머스 레벨1 "소수 찾기" 문제 풀이, 정확성 테스트는 통과했으나 효율성 테스트는 전부 통과 못함
/// #재도전
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
//int solution(int n) {
//    int answer = 0;
//    vector<int> primes = {2};
//    int sqrtN = sqrt(n);
//    for (int i = 2; i <= sqrtN; i++)
//    {
//        int j = 0;
//        for (;j < primes.size(); j++)
//        {
//            if (i*i % primes[j] == 0)
//                break;
//        }
//
//        if (j == primes.size())
//        {
//            primes.push_back(i);
//        }
//    }
//
//    answer = primes.size();
//
//    return answer;
//}