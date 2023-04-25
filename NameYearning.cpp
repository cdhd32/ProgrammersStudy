#include <string>
#include <vector>
#include <unordered_map>

#include <iostream>
using namespace std;


/// <summary>
/// ���α׷��ӽ� ���� 1 �߾� �������� �ַ��
/// </summary>
/// <param name="name">3 �� name.size() �� 100</param>
/// <param name="yearning">>3 �� yearning.size() �� 100</param>
/// <param name="photo">3 �� photo.size() �� 100</param>
/// <returns></returns>
vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;

    //�̸�-�߾����� ������ �����ϴ� unordered_map
    unordered_map<string, int> nameYearningMap;
    
    //size == name.size() == yearning.size() �̹Ƿ� int ���� �ϳ��� 0���� size ���� ��ȸ�ص� ����
    //���� name.size() != yearning.size() �� �� �� vector�� ��ȸ�ϴ� �� ������ ����� ������? #Question
    int size = name.size();
    for (int i = 0; i < size; i++)
    {
        nameYearningMap[name[i]] = yearning[i];
    }

    //���� vector ������ �� photo�� int ���� 2���� ��ȸ
    int colSize = photo.size();

    for (int i = 0; i < colSize; i++)
    {
        //i ���� �ѹ� �� 1 �྿ ó��,
        //�ະ�� �־��� �̸����� ������ �����ϰ� j �������� �̸� �ϳ��� ��ȸ�ϸ鼭
        //�̸��� �����ϴ� �߾������� nameYearningMap���� ã�Ƽ� �� �� ���� �հ� rowSum�� ���Ѵ�.
        int rowSum = 0;
        int rowSize = photo[i].size();
        for (int j = 0; j < rowSize; j++)
        {
            rowSum += nameYearningMap[photo[i][j]];
        }

        //�ະ ������ ��� vector�� �����Ѵ�.
        answer.push_back(rowSum);
    }

    return answer;
}
