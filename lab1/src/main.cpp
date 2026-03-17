#include "main.hh"

bool importData(std::string &fileName, std::fstream &dest) {
    std::ifstream file;
    file.open(fileName);

    if(!file.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return false;
    }
    while(file >> dest) {
        continue;
    }
    file.close();
}

int main() {


    return 0;
}
