#include<iostream>
#include<string>
using namespace std;

#define INT_MAX (2147383647)
#define INT_MIN (-2147483648)

int atoichar(const char* str)
{

   if(str==NULL) return 0;
   int val = 0;
   int sign = 1;
   while(*str==' ') str++;
   if(*str=='-') {sign = -1; str++;}
   if(*str=='+') {sign = 1; str++;}

   while(*str)
   {
      val = val*10+(*str-'0');
      str++;         
   }
   return val*sign;
}


int atoi(string str)
{
   if(str=="") return 0;
   int i = 0;
   int sign = 1, val = 0;
   while(str[i]==' ')
   {
      i++;
   }
   if(str[i]=='-')
   {
      sign = -1;
      i++;
   }
   else
      if(str[i]=='+')
         i++;
   while((str[i]>='0')&&(str[i]<='9'))
   {
      if((val>INT_MAX/10)||(val==INT_MAX/10 && str[i]-'0'>7))
         if(sign==1)
            return INT_MAX;
         else
            return INT_MIN;
      val = val*10+(str[i++]-'0');
   }
   return val*sign;
}

int main(void) 
{
	char a[]="-123";
   string b = "2147483648";
   cout<<atoi(b)<<endl;
   return 0;
}