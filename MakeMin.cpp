#include<vector>
#include <algorithm>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 2 "�ּڰ� �����" ���� Ǯ��
/// </summary>
/// <param name="A"></param>
/// <param name="B"></param>
/// <returns></returns>
int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());

    for (int i = 0; i < A.size(); i++)
    {
        answer += A[i] * B[i];
    }

    return answer;
}