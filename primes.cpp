#include <string>
#include <vector>
#include <cmath>
#include <cstring>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ����1 "�Ҽ� ã��" ���� Ǯ��, �ӵ��� ������ ȿ���� �׽�Ʈ�� ���
/// N������ �� �� bool �÷��׷� �Ҽ� ���� Ȯ�� �� ����
/// ��ó : https://kbw1101.tistory.com/18
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
/// ���α׷��ӽ� ����1 "�Ҽ� ã��" ���� Ǯ��, ��Ȯ�� �׽�Ʈ�� ��������� ȿ���� �׽�Ʈ�� ���� ��� ����
/// #�絵��
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