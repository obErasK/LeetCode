//Merge Sorted Array
#include<iostream>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p = m+n-1;
        int i = m-1;
        int j = n-1;

        while((i>=0)&&(j>=0)){
        	if(nums1.at(i)>nums2.at(j)){
        		nums1.at(p) = nums1.at(i);
        		i--; p--;
        	}
        	else {
        		nums1.at(p) = nums2.at(j);
        		j--; p--;
        	}
        }

        if(i<0){
        	while(j>=0){
        		nums1.at(p) = nums2.at(j);
        		j--; p--;
        	}
        }

        if(j<0){
        	while(i>=0){
        		nums1.at(p) = nums1.at(i);
        		i--; p--;
        	}
        }
    }