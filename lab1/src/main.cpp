#include "import_tools.hh"
#include "dataTypes.hh"
#include "Permutation.hh"
#include "solution.hh"
#include "problem.hh"
#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::ostringstream dane;
    std::vector<Task> tasks;
    std::string file("../test_borsuk.txt");
    importData(file, dane);
    int n = parse_dataset(dane, tasks);
    std::cout << "N: " << n << std::endl;
    //Permutation p(n);
    //solution s(p, tasks);
    Problem problem(tasks, n);
    std::cout << "Own algorithm: " << problem.own_algorithm() << std::endl;
    //std::cout << "Brute-force: " << problem.brute_force() << std::endl;
    //std::cout << "Sort dj: " << problem.sort_algorithm() << std::endl;
    //std::cout << "Sort rj: " << problem.sort_algorithm(true) << std::endl;
    return 0;
}
