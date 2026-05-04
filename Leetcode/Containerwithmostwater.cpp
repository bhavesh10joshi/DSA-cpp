class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int temp = (min(height[i],height[j]))*j;

        while(i<j)
            {
                int v = (min(height[i],height[j]))*(j-i);
                if(temp<=v)
                    {
                        temp=v;
                    }
                if(height[i]<=height[j])
                {
                    i++;
                }
                else if(height[i]>height[j])
                {
                    j--;
                }
            }
        return temp;
    }
};