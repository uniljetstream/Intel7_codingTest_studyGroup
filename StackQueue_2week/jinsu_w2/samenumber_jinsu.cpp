#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            answer.push_back(arr[i]);
        }
    }

    if (!arr.empty())
        answer.push_back(arr.back());


   
    cout << "Hello Cpp" << endl;
    return answer;
}

int main() {
    vector<int> input = { 4, 4, 4, 3, 3 };
    vector<int> output = solution(input);

    cout << "°á°ú: ";
    for (int val : output) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
