//Repeated DNA Sequences 
#include<iostream>
#include<string>
#include<map>

#include<set>
#include<vector>
using namespace std;



vector<string> findRepeatedDnaSequences(string s) {
        vector<string> res;
        int num = 0;
        
        map<int, int> dna;
        // dna.insert(pair<string,int>("A",0));
        // dna.insert(pair<string,int>("C",1));
        // dna.insert(pair<string,int>("G",2));
        // dna.insert(pair<string,int>("T",3));

        int i=0;
        while(i<9)
        	num = ((num<<3)|(s.at(i++)&7));
        while(i<s.size())
        {
        	if(dna[num= ((num<<3)&0x3FFFFFFF | s.at(i++)&7)]++ == 1)
        		res.push_back(s.substr(i-10,10));
        }
        return res;
    }

vector<string> findRepeatedDnaSequences1(string s) {
    map<int, int> m;
    vector<string> r;
    int t = 0, i = 0, ss = s.size();
    while (i < 9)
        t = t << 3 | s[i++] & 7;
    while (i < ss)
        if (m[t = t << 3 & 0x3FFFFFFF | s[i++] & 7]++ == 1)
            r.push_back(s.substr(i - 10, 10));
    return r;
}

int main()
{
	/* code */
	// string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
	// vector<string> 
	// cout<<s<<endl;
	return 0;
}