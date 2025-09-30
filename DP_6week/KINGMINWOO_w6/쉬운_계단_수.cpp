#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    long long array[101][10] = { 0 }; // array[i][j]: 길이가 i일 때 j로 시작하는 가능한 계단 수

    for (int i = 0; i <= 9; i++) {
        if (i == 0) 
            array[1][i] = 0;
        else
            array[1][i] = 1;
    }
    
    for (int i = 2; i < 101; i++) {
        for (int j = 0; j <= 9; j++) {
            if (j == 0)
                array[i][j] = array[i - 1][j + 1];
            else if (j == 9)
                array[i][j] = array[i - 1][j - 1];
            else 
                array[i][j] = array[i - 1][j - 1] + array[i - 1][j + 1];
          
            array[i][j] %= 1000000000;
        }
    }

    long long sum = 0;
    for (int i = 0; i < 10; i++) {
        sum = (sum + array[N][i]) % 1000000000;
    }

    cout << sum;
}
