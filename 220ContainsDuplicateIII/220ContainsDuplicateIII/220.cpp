# include<vector>
#include<map>
using namespace std;
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        map<int, int> m;
        int j = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i - j > k && m[nums[j]] == j) 
				m.erase(nums[j++]);
            auto a = m.lower_bound(nums[i] - t);
            if (a != m.end() && abs(a->first - nums[i]) <= t) return true;
            m[nums[i]] = i;
        }
        return false;
    }
}; 
void main()
{
	Solution a;
	 std::vector<int> ivec;
	 ivec.push_back(10);
	 ivec.push_back( 2);
	 ivec.push_back( 40);
	 ivec.push_back( 3);
	ivec.push_back( 60);
	ivec.push_back( 4);
	bool aa=a.containsNearbyAlmostDuplicate(ivec,4,3);

;


}