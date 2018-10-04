#ifndef HOST_H_
#define HOST_H_


#include <vector>
#include "Package.h"

class Host{
    std::vector<Package> memory;
    unsigned int MAC;
public:
    Host(unsigned int MAC):MAC(MAC){}
    bool send(Host & computer, unsigned int data);
    unsigned int getMAC(){ return MAC;}
    Package getLastData() {return *(memory.end()-1);}
};






#endif /* HOST_H_*/