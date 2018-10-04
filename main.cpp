#include "Host.h"
#include <iostream>
#include <string>

int main(int argc, char *argv[]){
    if(argc == 4){
        unsigned int sdHostAdr = (unsigned int) std::stoi(argv[1]);
        unsigned int rcvHostAdr = (unsigned int) std::stoi(argv[2]);
        unsigned int data = (unsigned int) std::stoi(argv[3]);

        Host Sender(sdHostAdr);
        Host Receiver(rcvHostAdr);
        
        Sender.send(Receiver, data);
        std::cout << "\n" << Receiver.getLastData() << std::endl;

    }
}