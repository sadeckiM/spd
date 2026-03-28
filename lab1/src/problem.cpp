#include "problem.hh"
#include <climits>
#include <iostream>

int Problem::sort_algorithm() {
  std::sort(tasks.begin(), tasks.end(), [](const Task&a, const Task&b) {
    return a.dj < b.dj;
  });

}

int Problem::brute_force() {
  int best_sol = INT_MAX;
  std::vector<int> best_perm;
  int temp;
  do {
    std::cout << p << std::endl;
	  std::cout << "solution: " << s.get_solution() << std::endl;
	  temp = s.get_solution();
	  if (temp < best_sol) {
		  best_sol = temp;
		  best_perm = p.perm;
	  }
  } while(p.next_perm());

  p.perm = best_perm;
  std::cout << "Best solution: " << best_sol << std::endl;
  std::cout << p << std::endl;
  return best_sol;
}
