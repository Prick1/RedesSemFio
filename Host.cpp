#include "Host.h"

bool Host::send(Host & computer, unsigned int data){
    computer.memory.push_back(data);
}