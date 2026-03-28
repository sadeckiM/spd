#include "main.hh"
#include "import_tools.hh"
#include "dataTypes.hh"
#include "Permutation.hh"
#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::ostringstream dane;
    std::vector<Task> tasks;
    std::string file("../test.txt");
    printf("Dupa\n\r");
    importData(file, dane);
    int n = parse_dataset(dane, tasks);
    std::cout << "N: " << n << std::endl;
    Permutation p(n);
    for(int i=0; i<10; ++i){
    	std::cout << p << std::endl;
	p.next_perm();
    }
    //tasks[0].print();
    //tasks[1].print();
    //std::cout << dane.str() << std::endl;

    return 0;
}
