#include "repository.h"

pioneerRepository::pioneerRepository()
{
    pioneerVector = vector<Pioneer>();
}

void pioneerRepository::add(Pioneer p)
{
    pioneerVector.push_back(p);
}