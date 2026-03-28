#include "main.hh"
#include "import_tools.hh"
#include <iostream>
#include <sstream>

int main() {
    std::stringstream dane;
    std::string file("../test.txt");
    printf("Dupa\n\r");
    importData(file, dane);
    std::cout << dane.str() << std::endl;

    return 0;
}
