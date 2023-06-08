#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N;

bool compare(const string& a, const string& b)
{
    if (a[N] != b[N])
    {
        return a[N] < b[N];
    }
    else
    {
        return a.compare(b) < 0;
    }
}

/// <summary>
/// ���α׷��ӽ� ���� 1 "���ڿ� �� ������� �����ϱ�" ���� Ǯ��
/// </summary>
/// <param name="strings"></param>
/// <param name="n"></param>
/// <returns></returns>
vector<string> solution(vector<string> strings, int n) {

    N = n;
    sort(strings.begin(), strings.end(), compare);

    return strings;
}