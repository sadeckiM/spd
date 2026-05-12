#ifndef IMPORT_TOOLS_HH
#define IMPORT_TOOLS_HH

#include <sstream>
#include <vector>
#include "dataTypes.hh"

bool importData(std::string &fileName, std::ostringstream &dest);
int parse_dataset(std::ostringstream &data, std::vector<Task> &tasks);

#endif // IMPORT_TOOLS_HH
