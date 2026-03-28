#include "main.hh"
#include "import_tools.hh"
#include "dataTypes.hh"
#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::ostringstream dane;
    std::vector<Task> tasks;
    std::string file("../test.txt");
    printf("Dupa\n\r");
    importData(file, dane);
    std::cout << "N: " << parse_dataset(dane, tasks) << std::endl;
    tasks[0].print();
    tasks[1].print();
    //std::cout << dane.str() << std::endl;

    return 0;
}
