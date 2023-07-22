#include <vector>
#include <algorithm>
using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 문제 "소수 만들기" 문제 풀이
/// </summary>
/// <param name="nums"></param>
/// <returns></returns>
int solution(vector<int> nums) {
    int answer = 0;

    vector<int> combination;

    for (int i = 0; i < 3; i++)
    {
        combination.push_back(1);
    }

    for (int i = 3; i < nums.size(); i++)
    {
        combination.push_back(0);
    }
    
    do
    {
        int sum = 0;
        int sumCount = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (combination[i] == 1)
            {
                sum += nums[i];
                sumCount++;
            }
                
            if (sumCount == 3)
                break;
        }

        int n = 2;
        for (; n < sum; n++)
        {
            if (sum % n == 0)
            {
                break;
            } 
        }

        if (n == sum)
            answer++;

    } while (prev_permutation(combination.begin(), combination.end()));

    return answer;
}

//다른 풀이 법
//bool isprime(int n) {
//    if (n == 1 || n == 0)return false;
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0)return false;
//    }
//    return true;
//}
//
//int solution(vector<int> nums) {
//    int answer = 0;
//    for (int i = 0; i < nums.size(); i++) {
//        for (int j = i + 1; j < nums.size(); j++) {
//            for (int k = j + 1; k < nums.size(); k++) {
//                if (isprime(nums[i] + nums[j] + nums[k]))
//                    answer++;
//            }
//        }
//    }
//    return answer;
//}