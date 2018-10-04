#include "Host.h"
#include <iostream>
#include <string>

int main(){

    Media media;
    Host A(media, 193, Point(2,2));
    Host B(media, 155, Point(50,50));
    A.sendPackage(media, 155, "Hello puto");
    B.receivePackage(media);
    std::string data;
    B.getLastData(data);
    std::cout << data << std::endl;
    return 0;
}