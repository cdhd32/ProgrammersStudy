#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "�ּ����簢��" ����
/// </summary>
/// <param name="sizes"></param>
/// <returns></returns>
int solution(vector<vector<int>> sizes) {
    int answer = 0;

    int maxWidth = 0;
    int maxHeight = 0;

    for (auto& size : sizes)
    {
        //���� ���� ���η� �Ѵ�.
        if (size[0] < size[1])
        {
            //XOR ����
            size[0] = size[0] ^ size[1];
            size[1] = size[0] ^ size[1];
            size[0] = size[0] ^ size[1];
        }

        //���� ���� �� �ϸ鼭 ���� ū �ʺ�, ���̸� ����
        if (size[0] > maxWidth)
            maxWidth = size[0];

        if (size[1] > maxHeight)
            maxHeight = size[1];
    }

    answer = maxWidth * maxHeight;

    return answer;
}