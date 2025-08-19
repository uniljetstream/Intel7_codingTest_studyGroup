#include <iostream>
#include <set>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    char line[4000];  // char 배열로 변경
    set<int> tooth;

    cin >> n;
    cin.ignore(); 
    cin.getline(line, sizeof(line));

    char* token = strtok(line, " ");

    while(token != NULL){
        tooth.insert(atoi(token));
        token = strtok(NULL, " ");
    }

    sort(tooth.begin(), tooth.end());

    return 0;
}
