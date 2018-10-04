#ifndef HOST_H_
#define HOST_H_


#include <vector>
#include "Package.h"
#include "Point.h"
#include "Media.h"

class Host{
    std::vector<std::string> memory;
    unsigned int MAC;
    Point location;
public:
    Host(Media& media, unsigned int MAC, Point location);
    bool sendPackage(Media & media, unsigned int DestinyID, std::string data);
    unsigned int getMAC(){ return MAC;}
    void getLastData(std::string & str) {str = *(memory.end()-1);}
    bool receivePackage(Media & media);
};






#endif /* HOST_H_*/