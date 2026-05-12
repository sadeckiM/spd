#include "solution.hh"
#include <climits>

int Solution::solve() {
  int Lmax = INT_MIN;
  int current_L = 0;
  int t = 0;

  for(int i = 0; i < p.get_n(); ++i) {
    t = std::max(t, tasks[p[i]].rj);
    t += tasks[p[i]].pj;
    
    current_L = t - tasks[p[i]].dj;
    //std::cout << "Task " << i << " -> L_curr: " << current_L << "\t L_max: " << Lmax << std::endl; 
    if(current_L > Lmax) {Lmax = current_L;}
  }
  return Lmax;
}
