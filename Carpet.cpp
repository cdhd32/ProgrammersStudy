#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 2 "ī��" ���� Ǯ��
/// </summary>
/// <param name="brown"></param>
/// <param name="yellow"></param>
/// <returns></returns>
vector<int> solution(int brown, int yellow) {
    vector<int> answer;

    int tileSum = brown + yellow;

    for (int w = 3; w <= tileSum; w++)
    {
        if (tileSum % w == 0)
        {
            int h = tileSum / w;

            if ((w - 2) * (h - 2) == yellow)
            {
                if (w >= h)
                {
                    answer.push_back(w);
                    answer.push_back(h);
                }
                else
                {
                    answer.push_back(h);
                    answer.push_back(w);
                }

                break;
            }
        }
    }

    return answer;
}