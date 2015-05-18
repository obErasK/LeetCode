//Search a 2D Matrix

#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int> >& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int m = 0;
        int n = col-1;
        while(m<row&&n>=0){
        	if(matrix[m][n]<target){
        		m++;
        	}
        	else{
        		if(matrix[m][n]>target){
        			n--;
        		}
        		else{
        			if(matrix[m][n]==target)
        				return true;
        		}
        	}
        }
        return false;
    }

    int main(){
    	// vector<vector<int> > matrix = {
    	//   {1,   3,  5,  7},
    	//   {10, 11, 16, 20},
    	//   {23, 30, 34, 50}
    	// };
    	// cout<<searchMatrix( matrix, 3);
    	return 0;
    }