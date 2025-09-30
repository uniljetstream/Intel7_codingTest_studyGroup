#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> triangle) 
{
    int answer = 0;
    
    for(int i=1;i<triangle.size();i++)
    {
        for(int j=0;j<triangle[i].size();j++)
        {
            if(j==0)
            {
                triangle[i][j] = triangle[i-1][j] + triangle[i][j];
                //cout << triangle[i][j] << " ";
            }
            else if(j == triangle[i].size()-1)
            {
                triangle[i][j] = triangle[i-1][j-1] + triangle[i][j];
                //cout << triangle[i][j] << " ";
            }
            else
            {
                triangle[i][j] = max(triangle[i-1][j-1] + triangle[i][j],triangle[i-1][j] + triangle[i][j]);
                //cout << triangle[i][j] << " ";
            }
        }
        //cout << endl;
    }
    
    int sum=triangle[triangle.size()-1][0];
    //int n = triangle.size();
    for (int i = 1; i < triangle[triangle.size()-1].size(); i++) 
    {
        sum = max(sum, triangle[triangle.size()-1][i]);
    }
    answer = sum;
    return answer;
}