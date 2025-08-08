#include <queue>
#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    std::priority_queue<int> pq;

    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);

        if (x == 0) {
            if (pq.empty())
                printf("0\n");
            else {
                printf("%d\n", pq.top());
                pq.pop();
            }
        }
        else {
            pq.push(x);
        }
    }

    return 0;
}