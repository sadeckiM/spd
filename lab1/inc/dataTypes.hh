#ifndef DATATYPES_HH
#define DATATYPES_HH
#include <iostream>

struct Task {
    int rj;     // task availability
    int pj;     // execution time
    int dj;     // expected finish time

    Task(int r, int p, int d) : rj(r), pj(p), dj(d) {}
    void print() {
	    std::cout << "r: " << rj << std::endl;
	    std::cout << "p: " << pj << std::endl;
	    std::cout << "d: " << dj << std::endl;
    }
};


#endif // DATATYPES_HH
