#ifndef ComputerSciencePioneer_h
#define ComputerSciencePioneer_h

#include <vector>
#include "pioneer.h"

using namespace std;

class pioneerRepository
{
private:
    vector<Pioneer> pioneerVector;
public:
    pioneerRepository();
    void add(Pioneer p);
};

#endif // ComputerSciencePioneer_h

