#include <iostream>
#include <vector>
#include <unordered_map>

namespace lc1 {

	// Two Sum
	class Solution {

	public:

		// O(N^2)
		std::vector<int> twoSum_bruteForce(std::vector<int>& nums, int target) {
			std::vector<int> result;
			for (int i = 0; i < nums.size(); i++)
			{
				for (int j = 0; j < nums.size(); j++)
				{
					if (nums[i] + nums[j] == target)
					{
						result.push_back(i);
						result.push_back(j);
						return result;
					}
				}
			}

			return result;
		}

		// O(NLog(N))
		std::vector<int> twoSum_sortWithTwoPointers(std::vector<int>& nums, int target) {

			std::vector<int> result;

			//implement

			return result;
		}


		// O(N)
		std::vector<int> twoSum_unorderedMap(std::vector<int>& nums, int target) {

			std::unordered_map<int, int> map;
			std::vector<int> result;
			for (int i = 0; i < nums.size(); i++)
			{
				int complement = target - nums[i];
				auto itr = map.find(complement);
				if (itr != map.end())
				{
					result.push_back(i);
					result.push_back(map[complement]);
					return result;
				}
				else
				{
					map[nums[i]] = i;
				}
			}

			return result;
		}
	};
}