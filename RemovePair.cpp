#include <string>
#include <stack>
using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 2 "¦���� �����ϱ�" ���� Ǯ��
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
int solution(string s)
{
    int answer = 0;
    stack<char> stack;

    for (auto ch : s)
    {
        if (stack.size() > 0 && stack.top() == ch)
        {
            stack.pop();
        }
        else
        {
            stack.push(ch);
        }
    }
    if (stack.empty() == true)
        answer = 1;
    else
        answer = 0;

    return answer;
}

//ó�� Ǭ ���, ����ð� �ʰ� �޽��� ����
//#include<string>
//#include <stack>
//#include <vector>
//using namespace std;
//int solution(string s)
//{
//    int answer = 0;
//
//    while (s.length() > 0)
//    {
//        int i = 0;
//        for (; i < s.length(); i++)
//        {
//            if (s[i] == s[i + 1])
//            {
//                s.erase(s.begin() + i, s.begin() + i + 2);
//                break;
//            }
//        }
//
//        if (i == s.length())
//            break;
//    }
//
//    if (s.length() == 0)
//        answer = 1;
//
//    return answer;
//}