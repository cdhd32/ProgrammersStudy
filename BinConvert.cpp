#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// 프로그래머스 문제 레벨 1 ""
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
bool solution(string s)
{
    bool answer = true;

    int pCount = 0, cCount = 0;

    for (char ch : s)
    {
        if (ch == 'p' || ch == 'P')
        {
            pCount++;
        }
        else if (ch == 'y' || ch == 'Y')
        {
            cCount++;
        }
        else
        {

        }
    }

    if (pCount == cCount)
        answer = true;
    else
        answer = false;

    return answer;
}

//vector<int> solution(vector<int> arr) {
//    vector<int> answer;
//
//    int min = arr[0];
//    int minIndex = 0;
//
//    if (arr.size() == 1)
//    {
//        answer.push_back(-1);
//        return answer;
//    }
//
//    for (int i = 0; i < arr.size(); i++)
//    {
//        if (min > arr[i])
//        {
//            min = arr[i];
//            minIndex = i;
//        }
//    }
//
//    arr.erase(arr.begin() + minIndex);
//
//    answer = arr;
//
//    return answer;
//}

/*vector<long long> solution(int x, int n) {
    vector<long long> answer;

    int sum = x;
    for (int i = 0; i < n; i++)
    {
        answer.push_back(sum);
        sum += x;
    }

    return answer;
}
*/