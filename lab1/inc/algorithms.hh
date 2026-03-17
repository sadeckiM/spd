#ifndef ALGORITHMS_HH
#define ALGORITHMS_HH

class HeuristicSort {
    std::vector<Task> taskVec;
    public:
        HeuristicSort();
        ~HeuristicSort();
        void loadTask(Task t) { taskVec.push_back(t); };
        

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
        inline int size() { return n; };
};


#endif  // ALGORITHMS_HH
