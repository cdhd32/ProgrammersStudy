#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1���� "���� ���� ����" ���� Ǯ��
/// �ٸ� ������� ������ �ڵ� �м� :
/// ���ĺ� 26�ڿ� �����ϴ� �ּ� ��ư �Է� ���� �����ϴ� ���̺��� �����
/// target�� �ִ� ���ڿ��� �ּ� ��ư �Է� ���� ����ϰ� �����Ѵ�.
/// ��, keymap���� target ���ڿ��� �ִ� ���ڸ� ã�� �� ���� ���� ��ǥ ���ڿ��� �ۼ� �� �� �����Ƿ� -1�� �����Ѵ�.
/// �ƴϸ� 26�ڿ� �����ϴ� ���̺��� ����� �� ���� keymap�� �ִ� ���ڷθ� ȿ�������� ���̺��� �����ϴ� ������� �����ص� ���� �� ����.
///  
/// ���� Ǭ ��� ȸ�� : 
/// �׳� keymap�� target�� ���� �ϳ��� �����ϴ� 4�� ���� (find_first_of ����)�� ����Ͽ� Ǯ����.
/// keymap, targets ���� 100, ���ڿ� ���̰� 100���� ���� �Ǿ ����ð��� ���� �ɸ����� �ʾ�����
/// ������ ���̰� �� ������� �ð��� ���� �ɷ��� ������ �����Ѵ�. #�絵��
/// </summary>
/// <param name="keymap"></param>
/// <param name="targets"></param>
/// <returns></returns>
vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    for (int t = 0; t < targets.size(); t++)
    {
        int pressCount = 0;
        for (int i = 0; i < targets[t].length(); i++)
        {
            vector<int> keyPressCounts;
            for (int j = 0; j < keymap.size(); j++)
            {
                int keyPressCount = keymap[j].find_first_of(targets[t][i]);

                if (keyPressCount >= 0)
                    keyPressCounts.push_back(keyPressCount + 1);
            }

            if (keyPressCounts.size() > 0)
            {
                sort(keyPressCounts.begin(), keyPressCounts.end());
                pressCount += keyPressCounts[0];
            }
            else
            {
                pressCount = -1;
                break;
            }
        }

        answer.push_back(pressCount);
    }

    return answer;
}