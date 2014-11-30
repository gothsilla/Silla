#ifndef addPerson_h
#define addPerson_h

#include "pioneer.h"
#include "repository.h"

class addPioneer
{
private:
    pioneerRepository pioneerRepo;
public:
    addPioneer();
    void add(Pioneer p);
};

#endif // carservice_h
