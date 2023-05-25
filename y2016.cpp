#include <string>
#include <vector>

using namespace std;

int daysPerMonthArr[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
string dayStrings[] = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };

/// <summary>
/// 프로그래머스 레벨 1 "2016년" 문제 풀이
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
string solution(int a, int b) {
    string answer = "";

    int days = b - 1;

    for (int month = 0; month < a - 1; month++)
    {
        days += daysPerMonthArr[month];
    }

    answer = dayStrings[days % 7];

    return answer;
}