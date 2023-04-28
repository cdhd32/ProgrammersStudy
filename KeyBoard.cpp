#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1문제 "대충 만든 자판" 문제 풀이
/// 다른 사람들이 제출한 코드 분석 :
/// 알파벳 26자에 대응하는 최소 버튼 입력 수를 저장하는 테이블을 만들어
/// target에 있는 문자열의 최소 버튼 입력 합을 계산하고 저장한다.
/// 단, keymap에서 target 문자열의 있는 문자를 찾을 수 없을 때는 목표 문자열을 작성 할 수 없으므로 -1을 저장한다.
/// 아니면 26자에 대응하는 테이블을 만드는 것 보다 keymap에 있는 문자로만 효율적으로 테이블을 구성하는 방법으로 구현해도 좋을 것 같다.
///  
/// 내가 푼 방법 회고 : 
/// 그냥 keymap과 target의 문자 하나씩 대조하는 4중 루프 (find_first_of 포함)를 사용하여 풀었다.
/// keymap, targets 개수 100, 문자열 길이가 100으로 제한 되어서 수행시간이 오래 걸리지는 않았으나
/// 개수와 길이가 더 길었으면 시간이 오래 걸렸을 것으로 예상한다. #재도전
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