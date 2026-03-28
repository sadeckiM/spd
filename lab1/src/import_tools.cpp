#include "import_tools.hh"

const int MAX_LEN = 128;

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
int parse_dataset(std::stringstream &data, std::list<Task> &tasks) {
	int n_tasks = 0;
	return n_tasks;
}
