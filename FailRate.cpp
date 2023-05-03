#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "������" ����
/// ���ڵ� �ϳ��� �ش��ϴ� �ڷ� ������
/// �ΰ��� pair�� �����ϴ� vector 2���� �����ؼ� ���� ����� �ڵ尡 �Ǿ���.
/// struct �ϳ��� ���� �����ϴ� ���� ���� �� ����. #�絵��
/// </summary>
/// <param name="left"></param>
/// <param name="right"></param>
/// <returns></returns>
bool comp(pair<int, double>& left, pair<int, double>& right)
{
    //�������� ������ ���� ó�� 1
    //�ߺ� ó��, ���ϴ� �������� ������ stage ��ȣ ���� ������ ������ ����
    if ((double)left.second == (double)right.second)
        return left.first < right.first;
    else
        return (double)left.second > (double)right.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;

    //������ compare �Լ� ����Ÿ� struct�� ����� �͵� ����غ��� �ѵ�
    vector<pair<int, int>> failedRates;
    vector<pair<int, double>> stageFailedRates;

    for (int i = 1; i <= N; i++)
    {
        failedRates.push_back(make_pair(0, 0));
    }

    for (int i = 0; i < stages.size(); i++)
    {
        //������ = (���������� ���������� ���� Ŭ�������� ���� �÷��̾��� ��) / (���������� ������ �÷��̾� ��)
        //���������� ���������� ���� Ŭ�������� ���� �÷��̾��� ��(����)first,
        //���������� ������ �÷��̾� �� (�и�) second�� ����
        failedRates[stages[i] - 1].first++;
        for (int j = 0; j < stages[i]; j++)
            failedRates[j].second++;
    }
    for (int i = 0; i < N; i++)
    {
        double failedRate;
        
        //�������� ������ ���� ó�� 2
        //���������� ������ ������ ���� ��� �ش� ���������� �������� 0���� ó�� 
        if (failedRates[i].second != 0)
            failedRate = (double)failedRates[i].first / (double)failedRates[i].second;
        else
            failedRate = 0.0;

        stageFailedRates.push_back(make_pair(i+1, failedRate));
    }   

    sort(stageFailedRates.begin(), stageFailedRates.end(), comp);

    for (const pair<int, double>& pair : stageFailedRates)
    {
        answer.push_back(pair.first);
    }

    return answer;
}