#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "김서방 찾기" 문제 풀이
/// </summary>
/// <param name="seoul"></param>
/// <returns></returns>
string solution(vector<string> seoul) {
    string answer = "";

    for (int i = 0; seoul.size(); i++)
    {
        if (seoul[i].compare("Kim") == 0)
        {
            answer = "김서방은 " + to_string(i) + "에 있다";
            break;
        }  
    }

    return answer;
}