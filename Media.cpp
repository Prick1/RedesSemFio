#include "Media.h"


bool Media::insertPackage(Package data){
    if(dataFlow.size() < capacity){
        dataFlow.push_back(data);
        return true;
    }
    else
        return false;
}

int Media::getPackageByID(unsigned int hostID, std::vector<std::string>& ReceiverMemory){
    std::vector<Package>::iterator packit;
    unsigned int i = 0;
    unsigned int receivedPackages = 0;
    while(i < dataFlow.size()){
        if(dataFlow[i].receiverID == hostID){
            if(hostLocations[hostID].getDistance(hostLocations[dataFlow[i].senderID]) < RADIUS){
                std::cout << "Inserindo pacote" << std::endl;
                ReceiverMemory.push_back(std::string(dataFlow[i].Data));
                dataFlow.erase(dataFlow.begin() + i);
                receivedPackages++;
            }
            else{
                std::cout << "Fora de alcance\n";
                i++;
            }
        }
        else
            i++;
    }
    return receivedPackages;       
}