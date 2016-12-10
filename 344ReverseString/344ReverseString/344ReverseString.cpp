/*Write a function that takes a string as input and returns the string reversed.

Example:
Given s = "hello", return "olleh".*/
#include <string>
using namespace std;
class Solution {
public:
    string reverseString(string s) {
		string s2(s);
	
		int len=s2.length();
		for (int i=0;i<len;i++)
		{
			s2[i]=s[len-1-i];
			//char a=s[len-i];
			int aa=len-i;
		}
		char a=s[0];
		return s2;
        
    }
};
int main(){
	Solution M;
	string input="hello";
	string output= M.reverseString(input);
	return 0;
}
