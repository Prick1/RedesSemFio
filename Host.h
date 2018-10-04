#ifndef HOST_H_
#define HOST_H_


#include <vector>
#include "Package.h"
#include "Point.h"
#include "Media.h"

class Host{
    std::vector<Package> memory;
    unsigned int MAC;
    Point location;
public:
    Host(unsigned int MAC, Point location):MAC(MAC), location(location){}
    bool send(Media & media, unsigned int DestinyID, std::string data);
    unsigned int getMAC(){ return MAC;}
    Package getLastData() {return *(memory.end()-1);}
};






#endif /* HOST_H_*/