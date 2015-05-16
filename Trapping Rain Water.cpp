//Trapping Rain Water
#include<iostream>
#include<vector>
using namespace std;

分别计算所有石头的格子数，然后计算把水填满以后的格子数，二者相减就是填进的水的数量；
计算水填满的时候左边右边分别设置一个最大值，每次比较一下，较小的那个最大值就是填水以后的高度，因为不过相对矮的那个怎么填，
另一边总会有一个更高一点的挡着它。

int trap(vector<int>& height) {
       if(height.size()<=0) return 0;
       int summap = 0;
       int sumres = 0;

       for(int i=0;i<height.size();i++)
       	summap+=height[i];

       int leftmax=0,rightmax=0;
       int left=0,right=height.size()-1;

       while(left<=right){
       	leftmax = max(leftmax,height[left]);
       	rightmax = max(rightmax,height[right]);

       	if(leftmax<=rightmax){
       		sumres+=leftmax;
       		left++;
       	}else
       	{
       		sumres+=rightmax;
       		right--;
       	}
       }

       int res = sumres-summap;
       return res;
    }



int main(){
	return 0;
}