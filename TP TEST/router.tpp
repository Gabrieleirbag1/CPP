#include "router.hpp"

Router::Router() {}

Router::Router(int _routingTableSize) : routingTableSize(_routingTableSize) {}

Router::~Router() {}

int Router::getCpuCores() const {
    return routingTableSize;
}

void Router::setCpuCores(int _routingTableSize) {
    routingTableSize = _routingTableSize;
}

void Router::printInfo(ostream &os) {    os << "Network device of unknow type:" << endl;
    os << "Hostname :" << getHostname() << endl;
    os << "IP address :" << getIpAddress() << endl;
    os << "Location :" << getLocation() << endl;
    os << "Vendor :" << getVendor() << endl;
    os << "OS version :" << getOsVersion() << endl;
    os << "Installed in :" << getYear() << endl;
    if (getIsCritical()) {
        os << "This device is critical" << endl;
    } else {
        os << "This device is not critical" << endl;
    }
    os << "Power consumption :" << getPowerConsumption() << endl;

    os << "CPU Cores :" << routingTableSize;
}