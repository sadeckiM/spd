#include "import_tools.hh"
#include <string>

#define MAX_LEN 128

bool importData(std::string& file_name, std::ostringstream& dest) {
  FILE * file = fopen(file_name.c_str(), "r");
  if(!file) {
    std::cerr << "importData: Error opening file" << std::endl;
    return false;
  }
  std::string word;
  char buf[MAX_LEN];

  while(fgets(buf, MAX_LEN, file)) {
    dest << buf;
  }

  if (fclose(file) != 0) {
    std::cerr << "importData: Error closing file" << std::endl;
    return false;
  }

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
