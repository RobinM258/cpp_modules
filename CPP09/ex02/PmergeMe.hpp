#ifndef MERGE
#define MERGE

#include <vector>
#include <list>
class Pmerge
{
    private:
        std::vector<int>    vect;
        std::list<int>      lst;
    public:
        Pmerge(void);
        ~Pmerge(void);
        Pmerge(const Pmerge & );
        Pmerge & operator=(const Pmerge &);
};
#endif