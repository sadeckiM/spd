#ifndef PROBLEM_HH
#define PROBLEM_HH

#include "Permutation.hh"
#include "solution.hh"

class Problem {
  Permutation p; 
  Solution s;
  int n = p.get_n(); 
  std::vector<Task> &tasks;
public:
  int sort_algorithm();
  int brute_force();
  int own_algorithm();
  int Shrage();
  Problem(Permutation &perm, std::vector<Task> &t) : perm(p), tasks(t) {}
};

#endif // PROBLEM_HH
