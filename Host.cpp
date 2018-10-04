#include "Host.h"

bool Host::send(Media & media, unsigned int DestinyID, std::string data){
    //computer.memory.push_back(data);
    bool insertWithSuccess = media.insertPackage(Package(data, MAC, DestinyID));
}