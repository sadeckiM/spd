#ifndef DATATYPES_HH
#define DATATYPES_HH

struct Task {
    int rj;     // task availability
    int pj;     // execution time
    int dj;     // expected finish time

    Task(int r, int p, int d) : rj(r), pj(p), dj(d) {}
};


#endif // DATATYPES_HH
