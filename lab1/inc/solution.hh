#ifndef SOLUTION_HH
#define SOLUTION_HH

#include "dataTypes.hh"
#include "Permutation.hh"
#include <vector>
#include <climits>

class Solution {
  int Lmax = INT_MIN;
  int current_L;
  int solve();
public:
  Permutation p;
  std::vector<Task> &tasks;
  int get_solution() {return Lmax;}
  Solution();
};

#endif 
