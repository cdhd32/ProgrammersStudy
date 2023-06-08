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
/// 프로그래머스 레벨 1 "문자열 내 마음대로 정렬하기" 문제 풀이
/// </summary>
/// <param name="strings"></param>
/// <param name="n"></param>
/// <returns></returns>
vector<string> solution(vector<string> strings, int n) {

    N = n;
    sort(strings.begin(), strings.end(), compare);

    return strings;
}