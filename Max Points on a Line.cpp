//Max Points on a Line 

#include<iostream>
#include<map>
#include<vector>
using namespace std;

struct Point {
      int x;
     int y;
     Point() : x(0), y(0) {}
     Point(int a, int b) : x(a), y(b) {}
  };

int maxPoints(vector<Point>& points) {
	if(points.size()==0) return 0;
        map<double,int> count;
        double slope;
        int maxnum = 0;

        for(int i=0;i<points.size();i++){
        	count.clear();
        	count[INT_MIN] = 0;
        	int rep = 1;
        	for(int j=0;j<points.size();j++){
        		if(i==j) continue;
        		if(points[i].x==points[j].x&&points[i].y==points[j].y) { rep++; continue;}
        		if(points[i].x==points[j].x) slope = INT_MAX;
        		else
	        		{
	        			slope = (double)(points[j].y-points[i].y)/(points[j].x-points[i].x);
	        		}
        		count[slope]++;
        	}
        	map<double,int>::iterator it = count.begin();
        	for(;it!=count.end();it++){
        		if((it->second+rep)>maxnum)
        			maxnum = it->second+rep;
        	}
        }
        return maxnum;
    }

    int main(){
    	return 0;
    }
