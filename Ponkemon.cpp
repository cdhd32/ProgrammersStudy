#include <vector>
#include <unordered_set>
using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "���ϸ�" ����
/// nums�� ���ϸ���� �ߺ� ���� ���·� unordered_set�� �����ϸ�
/// unordered_set.size()�� ���� ���� ������ ���ϸ��� �����ϴ� ������� ������ �� ���ϸ� ���� ��ȣ�� ������ �ȴ�.
/// ���� N/2 ���� Ŭ ��� N/2 ��ŭ�� ������ ���� ������ ��õ� ������ ���� ���� ���� ������ ���ϸ��� �����ϴ� ����� �ȴ�.
/// ���� �������� nums.size() / 2 �� �ѹ� ���ؼ� ���信 �ش��ϴ� ���� ��ȯ�ϸ� �ȴ�.
/// </summary>
/// <param name="nums"></param>
/// <returns></returns>
int solution(vector<int> nums)
{
    int answer = 0;
    unordered_set<int> ponkemonSet;
    
    for (auto num : nums)
    {
        ponkemonSet.insert(num);
    }

    if (ponkemonSet.size() < nums.size() / 2)
        answer = ponkemonSet.size();
    else
        answer = nums.size() / 2;

    return answer;
}