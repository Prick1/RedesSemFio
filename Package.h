#ifndef PACKAGE_H_
#define PACKAGE_H_

#include <vector>
#include <string>
class Package{
public:
    std::string Data;
    unsigned int senderID;
    unsigned int receiverID;
    Package(std::string Data,unsigned int senderID, unsigned int receiverID)
            : Data(Data), senderID(senderID), receiverID(receiverID){}
};


#endif /* PACKAGE_H_ */