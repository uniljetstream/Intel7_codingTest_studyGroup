#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    string s, e, q;
    int answer=0;
    set<string> beforeStart;
    set<string> end2strimingEnd;

    cin >> s >> e >> q;

    int sh{stoi(s.substr(0, 2))}; // 시작시간에서 시만 추출
    int sm{stoi(s.substr(3, 5))}; // 시작 시간에서 분만 추출

    int eh{stoi(e.substr(0, 2))}; // 개강 총회 종료 시간에서 시만 추출
    int em{stoi(e.substr(3, 5))}; // 개강 총회 종료 시간에서 분만 추출

    int qh{stoi(q.substr(0, 2))}; // 스트리밍 종료 시간에서 시만 추출
    int qm{stoi(q.substr(3, 5))}; // 스트리밍 종료 시간에서 분만 추출

    string time, name;

    while (1) // 입력 끝에 도달하면 정지
    {
        cin >> time >> name;
        if (cin.eof()) break;

        int timeH{stoi(time.substr(0, 2))};
        int timeM{stoi(time.substr(3, 5))};
        
        if (sh > timeH || (sh == timeH && sm >= timeM))
            beforeStart.emplace(name);
        else if ((eh < timeH || (eh == timeH && em <= timeM)) && (qh > timeH || (qh == timeH && qm >= timeM)))
        {
            end2strimingEnd.emplace(name);
        }
    }

    for(string e:end2strimingEnd)
    {
        if(beforeStart.find(e) != beforeStart.end())
            answer++;
    }

    cout << answer << endl;
    return 0;
}
