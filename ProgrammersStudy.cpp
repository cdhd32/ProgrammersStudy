#include <string>
#include <vector>
#include <unordered_map>

#include <iostream>
using namespace std;

int main()
{
    
}

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;

    unordered_map<string, int> nameYearningMap;
    int size = name.size();

    for (int i = 0; i < size; i++)
    {
        nameYearningMap[name[i]] = yearning[i];
    }
    
    int colSize = photo.size();

    for (int i = 0; i < colSize; i++)
    {
        int rowSum = 0;
        int rowSize = photo[i].size();
        for (int j = 0; j < rowSize; j++)
        {
            rowSum += nameYearningMap[photo[i][j]];
        }
        
        answer.push_back(rowSum);
    }

    return answer;
}
