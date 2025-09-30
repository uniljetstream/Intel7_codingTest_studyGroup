#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, n;
    cin >> N;

    vector<int> road, station;
    
    for (int i = 0; i < N - 1; i++) {
        cin >> n;
        road.push_back(n);
    }

    for (int i = 0; i < N; i++) {
        cin >> n;
        station.push_back(n);
    }

    int index_station = 0, index_road = 0, price;
    unsigned long long cost = 0;
    while (index_station != N - 1) {
        price = station[index_station];
        while (1) {
            if (station[index_station] >= price) { // 해당 인덱스의 주유소의 가격이 현재 주유소보다 크거나 같을 때
                if (index_station < N - 1)
                    index_station++;
                else
                    break;
            }
            else  // 해당 인덱스의 주유소의 가격이 현재 주유소보다 저렴할 때
                break;
        }
        for (int i = index_road; i < index_station; i++) {
            cost += (unsigned long long)road[i] * (unsigned long long)price;
        }
        index_road = index_station;
    }
    cout << cost;
}