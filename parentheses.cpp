#include<string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 2 "�ùٸ� ��ȣ" ���� Ǯ��
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
bool solution(string s)
{
    bool answer = true;
    vector<char> perenMatches;

    for (auto ch : s)
    {
        if (perenMatches.size() <= 0)
            if (ch == ')')
                return false;
            else
            {
                perenMatches.push_back(ch);
                continue;
            }
                
        
        if (perenMatches.back() == '(' && ch == ')')
        {
            perenMatches.pop_back();
        }
        else
        {
            perenMatches.push_back(ch);
        }
    }

    if (perenMatches.size() > 0)
        answer = false;

    return answer;
}