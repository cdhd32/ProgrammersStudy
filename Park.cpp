#include <string>
#include <vector>

using namespace std;

/// <summary>
/// ���α׷��ӽ� ���� 1 "���� ��å" ���� Ǯ��
/// </summary>
/// <param name="park">3 �� park�� ���� �� 50, park�� ���簢�� ��� (�ʺ�� ���̰� �ٸ� ���� ����)</param>
/// <param name="routes">1 �� routes�� ���� �� 50, "E 2", "S 2", "W 1"�� ���� ���ڿ� ����</param>
/// <returns></returns>
vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;

    //���� ��ġ ���ϱ�
    int x = 0;
    int y = 0;

    const int h = park.size();
    const int w = park[0].length();
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (park[i][j] == 'S')
            {
                x = j;
                y = i;
                break;
            }
        }
    }

    //��ɺ��� �̵� ����

    int routesSize = routes.size();
    int dist = 0;
    int isVaildRoute = false;
    for (int i = 0; i < routesSize; i++)
    {
        int dist = routes[i][2] - '0';
        isVaildRoute = true;
        switch (routes[i][0])
        {
        //y-
        case 'N':
            //�־��� �������� �̵��� �� ������ ������� Ȯ��

            if (y - dist < 0)
            {
                isVaildRoute = false;
            }
            //�־��� �������� �̵� �� ��ֹ��� �������� Ȯ��
            else
            {
                for (int i = 1; i <= dist; i++)
                {
                    if (park[y - i][x] == 'X')
                    {
                        isVaildRoute = false;
                        break;
                    }
                }
            }
            
            //�� ���� ������ ������ ��� y- �������� dist��ŭ �̵�
            if (isVaildRoute)
            {
                y -= dist;
            }
            break;
        //y+
        case 'S':
            //�־��� �������� �̵��� �� ������ ������� Ȯ��

            if (y + dist >= h)
            {
                isVaildRoute = false;
            }
            //�־��� �������� �̵� �� ��ֹ��� �������� Ȯ��
            else
            {
                for (int i = 1; i <= dist; i++)
                {
                    if (park[y + i][x] == 'X')
                    {
                        isVaildRoute = false;
                        break;
                    }
                }
            }

            //�� ���� ������ ������ ��� y+ �������� dist��ŭ �̵�
            if (isVaildRoute)
            {
                y += dist;
            }
            break;
        //x+
        case 'E':
            //�־��� �������� �̵��� �� ������ ������� Ȯ��

            if (x + dist >= w)
            {
                isVaildRoute = false;
            }
            //�־��� �������� �̵� �� ��ֹ��� �������� Ȯ��
            else
            {
                for (int i = 1; i <= dist; i++)
                {
                    if (park[y][x + i] == 'X')
                    {
                        isVaildRoute = false;
                        break;
                    }
                }
            }

            //�� ���� ������ ������ ��� x+ �������� dist��ŭ �̵�
            if (isVaildRoute)
            {
                x += dist;
            }
            break;
        //x-
        case 'W':
            //�־��� �������� �̵��� �� ������ ������� Ȯ��

            if (x - dist < 0)
            {
                isVaildRoute = false;
            }
            //�־��� �������� �̵� �� ��ֹ��� �������� Ȯ��
            else
            {
                for (int i = 1; i <= dist; i++)
                {
                    if (park[y][x - i] == 'X')
                    {
                        isVaildRoute = false;
                        break;
                    }
                }
            }

            //�� ���� ������ ������ ��� x- �������� dist��ŭ �̵�
            if (isVaildRoute)
            {
                x -= dist;
            }
            break;
        } 
    }

    answer.push_back(y);
    answer.push_back(x);

    return answer;
}

//�ٸ� ��� Ǯ��
//pair<int, int>�� ����� Ǯ�̵� �־��µ� ���� �ߴ� Ǯ�̿� ���� �ٸ����� ����
//#include <bits/stdc++.h>
//using namespace std;
//using pi = pair<int, int>; //ó�� ���� ���� #Ȯ��
//
// ������ 4�� ¥�� int �迭 �ΰ��� map�� �����ؼ� ���
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//map<char, int> mapping = {
//    {'E', 0}, {'W', 1}, {'S', 2}, {'N', 3}
//};
//
//vector<int> solution(vector<string> park, vector<string> routes) {
//    int cx, cy;
//    for (int i = 0; i < park.size(); ++i) {
//        for (int j = 0; j < park[i].size(); ++j) {
//            if (park[i][j] == 'S') {
//                tie(cx, cy) = { i, j }; //tie? ó������ �Լ���. #Ȯ��
//                break;
//            }
//        }
//    }
//
//    for (int i = 0; i < routes.size(); ++i) {
//        int num = routes[i][2] - '0';
//        int dir = mapping[routes[i][0]];
//
//        int nx = cx, ny = cy;
//        while (num--) {
//            //dir �ε��� �ϳ��� ���� �Ǵ� x, y �� ���ϱ�
//            nx += dx[dir];
//            ny += dy[dir];
//
//            //4���⿡ �����ϴ� ���� ���� üũ
//            //�ڵ尡 ����Ǿ� ����� �������� �ѹ��� �� �������� ���� �� �ִ� ���� üũ �����
//            //���ʿ��� �б� ó���� �������� �ݺ��ϰ� �ִ� ���̴�.
//            if (!(nx >= 0 && nx < park.size()) || !(ny >= 0 && ny < park[0].size())) break;
//            //��ֹ� üũ
//            if (park[nx][ny] == 'X') break;
//        }
//
//        if (num < 0) {
//            cx = nx;
//            cy = ny;
//        }
//    }
//    return { cx, cy }; //�� �������� int[]���� std::vector<int>�� ���簡 �߻�
//}