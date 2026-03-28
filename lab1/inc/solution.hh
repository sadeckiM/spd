#ifndef SOLUTION_HH
#define SOLUTION_HH

#include "dataTypes.hh"
#include "Permutation.hh"
#include <vector>

class Solution {
  int current_L = 0;
  Permutation &p;
  std::vector<Task> &tasks;
public:
  int solve();
  Solution(Permutation &perm, std::vector<Task> &t) : p(perm), tasks(t) {};
};

#endif // SOLUTION_HH
