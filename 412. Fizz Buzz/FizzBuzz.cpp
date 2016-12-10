(#include <vector>
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
                results.push_back(to_string(i));
            }
        }
        return results;
    }
};
int main()
         {
            Solution M;        //用定义好的类创建一个对象 点M
           
 
             return 0;
         }