#include "Media.h"


bool Media::insertPackage(Package data){
    if(dataFlow.size() < capacity){
        dataFlow.push_back(data);
        return true;
    }
    else
        return false;
}

bool Media::getPackageByID(unsigned int hostID, std::vector<Package>& ReceiverMemory){
    std::vector<Package>::iterator packit;
    unsigned int i = 0;
    while(i < dataFlow.size()){
        if(dataFlow[i].receiverID == hostID){
            ReceiverMemory.push_back(dataFlow[i]);
            dataFlow.erase(dataFlow.begin() + i);
        }
        else
            i++;
    }       
}