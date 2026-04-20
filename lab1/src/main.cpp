#include "import_tools.hh"
#include "dataTypes.hh"
#include "problem.hh"
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>

int main(int argc, char *argv[]) {
    std::ostringstream dane;
    std::vector<Task> tasks;
    if(argc < 3){
	    std::cout << "Usage: " << argv[0] << " <plik_testowy>" << " <own|brute|sort_dj|sort_rj|schrage|p_schrage>"<< std::endl;
	    return 0;
    }
    std::string file(argv[1]);
    importData(file, dane);
    int n = parse_dataset(dane, tasks);
    std::cout << "File: " << argv[1] << std::endl;
    std::cout << "N: " << n << std::endl;
    //Permutation p(n);
    //solution s(p, tasks);
    Problem problem(tasks, n);
    if(!strcmp(argv[2], "own")) {
    	std::cout << "Own algorithm: " << problem.own_algorithm() << std::endl;
    } else if (!strcmp(argv[2], "brute")) {
    	std::cout << "Brute-force: " << problem.brute_force() << std::endl;
    } else if (!strcmp(argv[2], "sort_dj")) {
    	std::cout << "Sort dj: " << problem.sort_algorithm() << std::endl;
    } else if (!strcmp(argv[2], "sort_rj")) {
    	std::cout << "Sort rj: " << problem.sort_algorithm(true) << std::endl;
    } else if (!strcmp(argv[2], "schrage")) {
    	std::cout << "Schrage: " << problem.Schrage() << std::endl;
    } else if (!strcmp(argv[2], "p_schrage")) {
    	std::cout << "Schrage_preemptive: " << problem.Schrage_preemptive() << std::endl;
    }
    return 0;
}
