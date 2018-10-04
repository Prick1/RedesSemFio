#ifndef PACKAGE_H_
#define PACKAGE_H_

#include <vector>
class Package{
public:
    std::vector<unsigned char> Data;
    unsigned int senderID;
    unsigned int receiverID;
};


#endif /* PACKAGE_H_ */