#include<iostream>
#include<string>
using namespace std;


int main(void) 
{
	char a[] = "123";
   char* str = a;
   //if(str==NULL) return -1;
   int val = 0;
   while(*str)
   {
   		if(*str==' ') {str++;}
   		else
   			if(*str=='-') 
   			{
   				val*=(-1);
   			}
   			else
   				if(*str=='+')
   				{
   					str++;
   				}
   				else
   					val = val*10+*str;   		
   }
   cout<<val<<endl;
}
