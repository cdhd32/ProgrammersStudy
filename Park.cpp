#include <string>
#include <vector>

using namespace std;

/// <summary>
/// 프로그래머스 레벨 1 "공원 산책" 문제 풀이
/// </summary>
/// <param name="park">3 ≤ park의 길이 ≤ 50, park는 직사각형 모양 (너비와 높이가 다를 수도 있음)</param>
/// <param name="routes">1 ≤ routes의 길이 ≤ 50, "E 2", "S 2", "W 1"과 같은 문자열 저장</param>
/// <returns></returns>
vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;

    //시작 위치 구하기
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

    //명령별로 이동 수행

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
            //주어진 방향으로 이동할 때 공원을 벗어나는지 확인

            if (y - dist < 0)
            {
                isVaildRoute = false;
            }
            //주어진 방향으로 이동 중 장애물을 만나는지 확인
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
            
            //두 가지 조건을 충족할 경우 y- 방향으로 dist만큼 이동
            if (isVaildRoute)
            {
                y -= dist;
            }
            break;
        //y+
        case 'S':
            //주어진 방향으로 이동할 때 공원을 벗어나는지 확인

            if (y + dist >= h)
            {
                isVaildRoute = false;
            }
            //주어진 방향으로 이동 중 장애물을 만나는지 확인
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

            //두 가지 조건을 충족할 경우 y+ 방향으로 dist만큼 이동
            if (isVaildRoute)
            {
                y += dist;
            }
            break;
        //x+
        case 'E':
            //주어진 방향으로 이동할 때 공원을 벗어나는지 확인

            if (x + dist >= w)
            {
                isVaildRoute = false;
            }
            //주어진 방향으로 이동 중 장애물을 만나는지 확인
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

            //두 가지 조건을 충족할 경우 x+ 방향으로 dist만큼 이동
            if (isVaildRoute)
            {
                x += dist;
            }
            break;
        //x-
        case 'W':
            //주어진 방향으로 이동할 때 공원을 벗어나는지 확인

            if (x - dist < 0)
            {
                isVaildRoute = false;
            }
            //주어진 방향으로 이동 중 장애물을 만나는지 확인
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

            //두 가지 조건을 충족할 경우 x- 방향으로 dist만큼 이동
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

//다른 사람 풀이
//pair<int, int>를 사용한 풀이도 있었는데 내가 했던 풀이와 별로 다르지는 않음
//#include <bits/stdc++.h>
//using namespace std;
//using pi = pair<int, int>; //처음 보는 문법 #확인
//
// 방향을 4개 짜리 int 배열 두개와 map에 매핑해서 사용
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
//                tie(cx, cy) = { i, j }; //tie? 처음보는 함수다. #확인
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
//            //dir 인덱스 하나에 대응 되는 x, y 값 더하기
//            nx += dx[dir];
//            ny += dy[dir];
//
//            //4방향에 대응하는 공원 범위 체크
//            //코드가 단축되어 보기는 편하지만 한번의 비교 연산으로 끝날 수 있는 범위 체크 연산과
//            //불필요한 분기 처리를 루프별로 반복하고 있는 점이다.
//            if (!(nx >= 0 && nx < park.size()) || !(ny >= 0 && ny < park[0].size())) break;
//            //장애물 체크
//            if (park[nx][ny] == 'X') break;
//        }
//
//        if (num < 0) {
//            cx = nx;
//            cy = ny;
//        }
//    }
//    return { cx, cy }; //이 과정에서 int[]에서 std::vector<int>로 복사가 발생
//}