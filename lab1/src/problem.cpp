#include "problem.hh"
#include "Permutation.hh"
#include <climits>
#include <iostream>
#include <algorithm>

Problem::Problem(std::vector<Task> &tasks, int num) : t(tasks), p(num), s(p,tasks){
	n = num;
}

int Problem::sort_algorithm(bool by_rj) {
	if (by_rj) {
  std::sort(p.perm.begin(), p.perm.end(), [&](const int a, const int b) {
    return t[a].rj < t[b].rj;
  });
	} else {
  std::sort(p.perm.begin(), p.perm.end(), [&](const int a, const int b) {
    return t[a].dj < t[b].dj;
  });
	}
	return s.get_solution();
}

int Problem::brute_force() {
  int best_sol = INT_MAX;
  std::vector<int> best_perm;
  int temp;
  do {
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

int Problem::own_algorithm(){
	int L;

	for(int i = 0; i < n-1; ++i) {
		L = s.get_solution();
		iter_swap(p.perm.begin()+i, p.perm.begin()+i+1);
		if(s.get_solution() > L) 
			iter_swap(p.perm.begin()+i, p.perm.begin()+i+1);
	}
	return s.get_solution();
}
