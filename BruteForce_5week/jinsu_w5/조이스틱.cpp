#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int solution(string name) {
    int len = name.length();
    int answer = 0;


    for (char c : name) {
        answer += min(c - 'A', 'Z' - c + 1);
    }


    int min_move = len - 1;

    for (int i = 0; i < len; i++) {
        int next = i + 1;


        while (next < len && name[next] == 'A') {
            next++;
        }


        int move = i + len - next + min(i, len - next);
        min_move = min(min_move, move);
    }

    return answer + min_move;
}
