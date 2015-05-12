//Reverse Bits
#include<iostream>
using namespace std;


uint32_t reverseBits(uint32_t n) {
        uint32_t m = 0;
        uint32_t temp = 0;
        for(int i=0;i<32;i++)
        {
        	temp = n&0x01;
        	m = m*2+temp;
        	n = n>>1;
        }
        return m;
    }

int main()
{
	uint32_t n = 11;
	cout<<reverseBits(n)<<endl;
}
