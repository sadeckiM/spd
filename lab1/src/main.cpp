#include "main.hh"
#include <iostream>
#include <sstream>

bool importData(std::string &fileName, std::stringstream &dest) {
    std::ifstream file(fileName);

    if(!file.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return false;
    }
    dest << file.rdbuf();
    file.close();
    return true;
}

int main() {
    std::stringstream dane;
    std::string file("../test.txt");
    printf("Dupa\n\r");
    importData(file, dane);
    std::cout << dane.str() << std::endl;

    return 0;
}
