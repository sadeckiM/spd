#include "import_tools.hh"
#include "dataTypes.hh"
#include "Permutation.hh"
#include "solution.hh"
#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::ostringstream dane;
    std::vector<Task> tasks;
    std::string file("../test.txt");
    importData(file, dane);
    int n = parse_dataset(dane, tasks);
    std::cout << "N: " << n << std::endl;
    Permutation p(n);
    Solution s(p, tasks);
    int best_sol = INT_MAX;
    std::vector<int> best_perm;
    int temp;
    do {
    	//std::cout << p << std::endl;
	//std::cout << "solution: " << s.get_solution() << std::endl;
	temp = s.get_solution();
	if (temp < best_sol){
		best_sol = temp;
		best_perm = p.perm;
	}
    } while(p.next_perm());

    p.perm = best_perm;
    std::cout << "Best solution: " << best_sol << std::endl;
    std::cout << p << std::endl;
    return 0;
}
