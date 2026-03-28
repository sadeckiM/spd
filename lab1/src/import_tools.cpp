#include "import_tools.hh"

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

/*
 * Parse data from stringstream to list of tasks.
 * Returns number of tasks
 */
int parse_dataset(std::stringstream &data, std::list<Task> &tasks) {
	int n_tasks = 0;
	return n_tasks;
}
