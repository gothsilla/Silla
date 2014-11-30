#include "consoleui.h"
#include "pioneer.h"
#include "addPerson.h"
#include <string>

using namespace std;

consoleUI::consoleUI()
{
    addPioneer = addPioneer();
    
}


void consoleUI::start()
{
    string input;
    
    cout << "Welcome to this crazy beautiful data base (soon to be). Now, add to the list:" << endl;
    cin >> input;
    
    if (input == "add")
    {
        Pioneer p = Pioneer();
        cin >> p.name >> p.birthday >> p.deathday;
        
        addPioneer.add(p);
    } 
}