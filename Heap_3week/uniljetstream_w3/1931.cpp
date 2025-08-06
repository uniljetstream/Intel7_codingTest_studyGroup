#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n,start,end,time=0,cnt=0;
    map<int, int> room;

    cin >> n;

    for(int i=0;i<n;i++)
    {

        cin>>start>>end;
        if(room.empty())
            room[start]=end;
        else if(--room.end()->second <= start) 
            room[start]=end;

        time++;
        }
    }
    cout << room.size()+cnt;
    return 0;
}

