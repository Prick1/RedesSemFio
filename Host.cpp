#include "Host.h"

Host::Host(Media& media, unsigned int MAC, Point location):MAC(MAC), location(location){
    media.insertHostOnMedia(MAC, location);
}

bool Host::sendPackage(Media & media, unsigned int DestinyID, std::string data){
    //computer.memory.push_back(data);
    bool insertWithSuccess = media.insertPackage(Package(data, MAC, DestinyID));
}

bool Host::receivePackage(Media & media){
    int receivedPackages = media.getPackageByID(MAC, memory);
    if(receivedPackages > 0)
        return true;
    else
        return false;
}