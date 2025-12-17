#ifndef NETWORK_INFRASTRUCTURE_H
#define NETWORK_INFRASTRUCTURE_H

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include "networkDevice.hpp"

using namespace std;

class NetworkInfrastructure {
    public:
        NetworkInfrastructure();
        NetworkInfrastructure(string);
        ~NetworkInfrastructure();

        string getName() const;
        vector<NetworkDevice*> getDevices() const;

        void setName(string);
        void setDevices(vector<NetworkDevice*>);

        vector<NetworkDevice*> listDevices();
        void addDevice(NetworkDevice*);
        NetworkDevice* searchDeviceByHostname(string hostname);
        void removeDeviceByHostname(string hostname);
        double averagePowerConsumptionByType();
    private:
        string name;
        static int MAX_DEVICES;
        vector<NetworkDevice*> devices;
};

#include "networkInfrastructure.tpp"

#endif