#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 2 "�Ǻ���ġ ��" ���� Ǯ��
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int solution(int n) {
    int answer = 0;

    vector<int> num;

    num.push_back(0);
    num.push_back(1);

    //������ ������ ������ ����Ͽ� �����÷ο츦 ����
    //F(n) % m 
    //  = (F(n-1) + F(n-2)) % m
    //  = (F(n-1) % m + F(n-2) % m) % m
    for (int i = 2; i <= n; i++)
    {
        num.push_back((num[i - 2] + num[i - 1]) % 1234567);
    }

    answer = num.back();

    return answer;
}