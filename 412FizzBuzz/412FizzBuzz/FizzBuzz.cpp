/*Write a program that outputs the string representation of numbers from 1 to n.
But for multiples of three it should output “Fizz” 
instead of the number and 
for the multiples of five output “Buzz”. 
	For numbers which are 
	multiples of both three and five output “FizzBuzz”.*/
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    //n: As description.
    // return: A list of strings.
    vector<string> fizzBuzz(int n) {
        vector<string> results;
        for (int i = 1; i <= n; i++) {
            if (i % 15 == 0) {
                results.push_back("FizzBuzz");
            } else if (i % 5 == 0) {
                results.push_back("Buzz");
            } else if (i % 3 == 0) {
                results.push_back("Fizz");
            } else {
				char buf[10];
                sprintf(buf, "%d", i);
                string b = buf;
                results.push_back(b);
				to_string(i);

            }
        }
        return results;
    }
};
int main()
         {
            Solution M;        //用定义好的类创建一个对象 点M
           vector<string> ss;
		   ss=M.fizzBuzz(20);
 
             return 0;
         }