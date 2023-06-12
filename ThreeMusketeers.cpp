#include <string>
#include <vector>
#include <tuple>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "���ѻ�" ���� Ǯ��, tuple ���� �Ƚᵵ �� ��?
/// ���� ���ϱ� ���� ����Ʈ
/// https://velog.io/@ggh-png/C-%EC%88%9C%EC%97%B4%EA%B3%BC-%EC%A1%B0%ED%95%A9
/// https://ansohxxn.github.io/algorithm/combination/
/// �Ϲ����� ������ ���ϴ� �˰����� �����غ��� #�絵��
/// </summary>
/// <param name="number"></param>
/// <returns></returns>
int solution(vector<int> number) {
    int answer = 0;

    vector<tuple<int, int, int>> triples;

    for (int i = 0; i < number.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                triples.push_back({ i, j, k });
            }
        }
    }

    for (auto triple : triples)
    {
        if (number[get<0>(triple)] + number[get<1>(triple)] + number[get<2>(triple)] == 0)
            answer++;
    }

    return answer;
}