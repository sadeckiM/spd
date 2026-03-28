#include "solution.hh"

int Solution::solve() {
  int t = 0;
  int n_tasks = p.get_n();

  for(int i = 0; i < n_tasks; ++i) {
    t = std::max(t, tasks[p[i]].rj);
    t += tasks[p[i]].pj;
    
    current_L = t - tasks[p[i]].dj;
    if(current_L > Lmax)
      Lmax = current_L;
  }
  return Lmax;
}
