#ifndef MEDIA_H_
#define MEDIA_H_

#define MAX_CAPACITY 20
#include <vector>
#include "Package.h"
#include <algorithm>

class Media{
    std::vector<Package> dataFlow;
    int capacity = MAX_CAPACITY;
public:
    bool insertPackage(Package data);
    bool getPackageByID(unsigned int hostID,std::vector<Package>& ReceiverMemory);
};

#endif /* MEDIA_H_ */