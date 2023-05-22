#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 1레벨 "옹알이(2)"  문제 풀이
/// 일치하는 발음(prons) 문자열 만큼 앞에서 제거하면서 뒤로 비교한다.
/// #재도전
/// </summary>
/// <param name="babbling"></param>
/// <returns></returns>
int solution(vector<string> babbling) {
    int answer = 0;

    vector<string> prons = { "aya", "ye", "woo", "ma" };
    
    for (auto babble : babbling)
    {
        string currentWord = "";
        for (int i = 0; i < prons.size(); i++)
        {
            //발음 중복 여부 체크
            if (prons[i] == currentWord)
                continue;

            //문자열 처음에 발음 문자열이 있는지 검사, 있다면 루프는 0부터 다시 시작
            if (babble.substr(0, prons[i].length()) == prons[i])
            {
                babble = babble.substr(prons[i].length(), babble.length() - 1);
                currentWord = prons[i];
                i = -1;
            }
        }

        if (babble.empty())
        {
            answer++;
        }
            
    }

    return answer;
}