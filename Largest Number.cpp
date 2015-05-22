//Largest Number 

#include<iostream>
#include<vector>
using namespace std;

bool cmp(const string &s1,const string &s2){
	return (s1+s2)>(s2+s1);
}


string largestNumber(vector<int>& nums) {
        if(nums.size()==0) return 0;

        vector<string> element(nums.size());
        for(int i=0;i<nums.size();i++){
        	element[i] = to_string(nums[i]);
        }

        sort(element.begin(), element.end(),cmp);

        string res;
        if(element[0]=="0") return 0;
        else{
        	for(int i=0;i<element.size();i++){
        		res+=element[i];
       		}
        }
        
        return res;
    }

    int main(){
    	return 0;
    }