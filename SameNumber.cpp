#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 ���� "���� ���ڴ� �Ⱦ�" Ǯ�� �ڵ�
/// </summary>
/// https://learn.microsoft.com/ko-kr/cpp/standard-library/algorithm-functions?view=msvc-170#unique
/// std::unique�� ����ؼ� �����ϰ� �ذ��ϴ� ����� ����,
/// ���⵵�� O(N), ��Ƚ���� (last(������ ����) - first(ù��° ����)) - 1
/// <param name="arr">0~9���� int ���� �ִ� 1,000,000 ������ ������ vector</param>
/// <returns></returns>
vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    if (arr.size() == 0)
        return answer;

    answer.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++)
    {
        //���� �������� ������ int ���� ���Ѵ�.
        if (answer.back() != arr[i])
        {
            answer.push_back(arr[i]);
        }
    }

    return answer;
}