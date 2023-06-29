#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/// <summary>
/// 프로그래머스 인형 뽑기 문제, #미해결
/// </summary>
/// <param name="board"></param>
/// <param name="moves"></param>
/// <returns></returns>
int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<vector<int>> boardTr;
    vector<int> bucket;

    for (int i = 0; i < board.size(); i++)
    {
        boardTr.push_back(vector<int>());

        for (int j = 0; j < board.size(); j++)
        {
            boardTr[i].push_back(board[j][i]);
        }

        reverse(boardTr[i].begin(), boardTr[i].end());

        for (int n : boardTr[i])
            cout << to_string(n) + " ";
        cout << "\n";
    }

    for (int move : moves)
    {
        for (int i = boardTr[move - 1].size(); i >= 0; i++)
        {
            int n = boardTr[move - 1][i];
            if (n == 0)
                continue;

            if (bucket.empty())
                bucket.push_back(n);
            else
            {
                if (bucket.back() == n)
                {
                    bucket.pop_back();
                    answer += 2;
                }
                else
                {
                    bucket.push_back(n);
                }
            }
            break;
        }
    }

    return answer;
}