#include "import_tools.hh"
#include <string>

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
int parse_dataset(std::ostringstream &data, std::list<Task> &tasks) {
	int n_tasks = 0;
	std::istringstream input;
	std::string word;
	int buffer[3] = {0, 0, 0};

	input.str(data.str());
	input >> n_tasks;

       	while(input >> word){
		buffer[0] = std::stoi(word);
		input >> word;
		buffer[1] = std::stoi(word);
		input >> word;
		buffer[2] = std::stoi(word);

		tasks.emplace_back(Task(buffer[0], buffer[1], buffer[2]));
	}	

	return n_tasks;
}
