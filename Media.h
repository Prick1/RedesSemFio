#ifndef MEDIA_H_
#define MEDIA_H_

#define MAX_CAPACITY 20
#include <vector>
#include <map>
#include "Package.h"
#include <algorithm>
#include <iostream>
#include "Point.h"
#define RADIUS 30

class Media{
    std::vector<Package> dataFlow;
    int capacity = MAX_CAPACITY;
    std::map<unsigned int, Point> hostLocations; //Lembrar de preencher
public:
    bool insertPackage(Package data);
    int getPackageByID(unsigned int hostID,std::vector<std::string>& ReceiverMemory);
    void insertHostOnMedia(unsigned int hostID, Point location){ hostLocations[hostID] = location; }
};

#endif /* MEDIA_H_ */