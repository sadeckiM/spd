#ifndef DATATYPES_HH
#define DATATYPES_HH

struct Task {
    int pj;
    int dj;
    int rj;
};

class Permutations {
    int n;
    int *perm;
    public:
        Permutations();
        ~Permutations();
        inline const int & operator [](int i) { return perm[i]; };
        // add more operators
        inline void set(int i, int a) { perm[i] = a; };
        inline int size() { return n; }
};

#endif // DATATYPES_HH
