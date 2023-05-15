#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;

    int sum = 0;

    string numberString = to_string(x);

    for (char ch : numberString)
    {
        sum += ch - '0';
    }

    answer = x % sum == 0;

    return answer;
}