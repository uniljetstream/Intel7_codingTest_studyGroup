#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
	sort(phone_book.begin(), phone_book.end()); //크기 순으로 정렬, 만약 앞번호를 포함하는 번호라면, 뒷번호는 앞번호를 포함하게됨. 
	for(int i=0;i<phone_book.size()-1;i++) //선택된 번호들은 뒷 번호하고만 비교하면된다.
    {
        //해당 차례의 폰 번호의 크기만큼 뒷번호의 일치 여부 비교, 사이즈도 비교가능한 사이즈로 제한.
        if(phone_book[i] == phone_book[i+1].substr(0, phone_book[i].size()) && phone_book[i].size() < phone_book[i+1].size())
            answer = false;
	}
    return answer;
}