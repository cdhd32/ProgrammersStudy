#include <string>
#include <vector>

using namespace std;

int recipeArr[] = { 1, 2, 3, 1 };

int CheckIngredient(vector<int>& ingredient, int pos)
{
    if (pos + 3 >= ingredient.size())
        return -1;

    int hit = 0;
    for (; hit < 4; hit++)
    {
        if (recipeArr[hit] != ingredient[pos + hit])
        {
            break;
        }
    }

    if (hit == 4)
        return 0;
    else
        return -1;
}

/// <summary>
/// 프로그래머스 레벨 1 "햄버거 만들기" 문제 풀이
/// </summary>
/// <param name="ingredient"></param>
/// <returns></returns>
int solution(vector<int> ingredient) {
    int answer = 0;
    int pos = 0;
    while (pos < ingredient.size())
    {
        vector<int> subIngredient;
        
        int result = CheckIngredient(ingredient, pos);

        if (result == 0)
        {
            ingredient.erase(ingredient.begin() + pos, ingredient.begin() + pos + 4);
            answer++;

            if (pos > 0)
                pos--;
        }
        else
        {
            pos++;
        }
    }

    return answer;
}