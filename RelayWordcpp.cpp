#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 2 "영어 끝말잇기" 문제
/// </summary>
/// <param name="n"></param>
/// <param name="words"></param>
/// <returns></returns>
vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<int> wordCount;
    
    unordered_set<string> triedWords;

    int player = 0;

    wordCount.push_back(1);
    for (int i = 1; i < n; i++)
        wordCount.push_back(0);

    int i = 1;
    triedWords.insert(words[0]);
    for (; i < words.size(); i++)
    {
        player = ++player % n;
        wordCount[player]++;

        if (words[i - 1].back() == words[i].front() &&
            triedWords.count(words[i]) == 0)
        {
            triedWords.insert(words[i]);
        }
        else
        {
            break;
        }
    }

    if (i < words.size())
    {
        answer.push_back(player+1);
        answer.push_back(wordCount[player]);
    }
    else
    {
        answer.push_back(0);
        answer.push_back(0);
    }

    return answer;
}