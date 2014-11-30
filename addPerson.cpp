#include "addPerson.h"
#include "pioneer.h"

addPioneer::addPioneer()
{
    pioneerRepo = pioneerRepository();
}

void addPioneer::add(Pioneer p)
{
    pioneerRepo.add(p);
}