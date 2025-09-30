#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M, B;
    cin >> N >> M >> B;

    vector<int> blocks(N * M);
    int min_h = 256, max_h = 0;

    for (int i = 0; i < N * M; ++i)
    {
        cin >> blocks[i];
        min_h = min(min_h, blocks[i]);
        max_h = max(max_h, blocks[i]);
    }

    int best_time = 1e9;
    int best_height = 0;

    for (int h = min_h; h <= max_h; ++h) { //
        long long remove_block = 0, add_block = 0;

        for (int b : blocks) {
            if (b > h) remove_block += b - h;  //block_height > target_height
            else add_block += h - b;
        }

        if (remove_block + B >= add_block) {  //work_possible
            int time = remove_block * 2 + add_block;
            if (time < best_time || (time == best_time && h > best_height)) {
                best_time = time;
                best_height = h;
            }
        }
    }

    cout << best_time << " " << best_height << "\n";
}
