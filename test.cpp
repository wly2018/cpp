#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int tran(char s)
{
	if (s>='0' && s<='9') return s-'0';
	if (s>='a' && s<='z')
	return s-'a'+10;
	else return -1;
}

long power(int x, int k){
	int s=1;
	for (int i=0;i<k;i++)
	s=s*x;
	return s;
}

int main()
{
	string s1,s2,s3;
	int tag,ra,i,j,len,maxi;
	bool flag;
	long sum1,sum2;
	
	s1="121";
	s2="34";
	s3=s1;s1=s2;s2=s3;
	
	cout << s1.length() <<' '<< s2.length();
}
