#ifndef SOLUTION_HH
#define SOLUTION_HH

#include "dataTypes.hh"
#include "Permutation.hh"
#include <vector>
#include <climits>

class Solution {
  int current_L;
  int solve();
  Permutation &p;
  std::vector<Task> &tasks;
public:
  int get_solution() {return solve();}
  Solution(Permutation &perm, std::vector<Task> &t) : p(perm), tasks(t) {};
};

#endif // SOLUTION_HH
