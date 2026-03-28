#ifndef IMPORT_TOOLS_HH
#define IMPORT_TOOLS_HH

#include <iostream>
#include <sstream>
#include <list>
#include <fstream>
#include "dataTypes.hh"

bool importData(std::string &fileName, std::ostringstream &dest);

int parse_dataset(std::stringstream &data, std::list<Task> &tasks);

#endif // IMPORT_TOOLS_HH
