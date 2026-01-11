#include <iostream>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int s = 0;
        int j = height.size()-1;
        for(int i = 0; i < j;)
        {
            s = max(min(height[j],height[i])*(j-i),s);
            if(height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return s;        
    }
};

int main()
{
    int height = [1,8,6,2,5,4,8,3,7];
}
