#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int brown, int yellow) 
{
    vector<int> answer;
    vector<int> measure;
    for(int y_height=1;y_height <= yellow;y_height++)
    {
        int y_width;
        if(yellow % y_height == 0)
        {
            cout << y_height << '\n';
            y_width = yellow / y_height;
        }
        int b_width = y_width + 2;
        int b_height = y_height + 2;
        
        if(b_width * b_height == brown + yellow)
        {
            answer.push_back(b_width);
            answer.push_back(b_height);
            return answer;
        }
    }   
        
    return answer;
}