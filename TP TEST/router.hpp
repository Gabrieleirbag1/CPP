#ifndef ROUTER_H
#define ROUTER_H

#include <iostream>
#include "networkDevice.hpp"

class Router : public NetworkDevice {
    public:
        Router();
        Router(int);
        ~Router();

        int getCpuCores() const;
        void setCpuCores(int);

        void printInfo(ostream &os) override;
    private:
        int routingTableSize;
};

#include "router.tpp"

#endif