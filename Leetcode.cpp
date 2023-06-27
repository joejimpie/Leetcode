#include <iostream>
#include "Leetcode1.cpp"

int main()
{
  leetcode1();
}

void leetcode1()
{
  std::vector<int> param; //[2,7,11,15]
  param.push_back(2);
  param.push_back(7);
  param.push_back(11);
  param.push_back(15);

  lc1::Solution solution;
  auto result = solution.twoSum_unorderedMap(param, 9);
}

void leetcode21()
{
  ////list1 = [1, 2, 4], list2 = [1, 3, 4]
  //std::vector<int> param1;
  //std::vector<int> param2;

  //param1.push_back(1);
  //param1.push_back(2);
  //param1.push_back(4);

  //param1.push_back(1);
  //param1.push_back(3);
  //param1.push_back(4);

  //lc21::Solution solution;
  //auto result = solution.twoSum_unorderedMap(param, 9);
}