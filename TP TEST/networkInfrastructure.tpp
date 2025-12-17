#include "networkInfrastructure.hpp"

NetworkInfrastructure::NetworkInfrastructure() {}

NetworkInfrastructure::NetworkInfrastructure(string _name) : name(_name) {}

NetworkInfrastructure::~NetworkInfrastructure() {}

string NetworkInfrastructure::getName() const {
    return name;
}

vector<NetworkDevice*> NetworkInfrastructure::getDevices() const {
    return devices;
}

void NetworkInfrastructure::setName(string _name) {
    name = _name;
}

void NetworkInfrastructure::setDevices(vector<NetworkDevice*> _devices) {
    devices = _devices;
}

vector<NetworkDevice*> NetworkInfrastructure::listDevices() {
    return devices;
}

void NetworkInfrastructure::addDevice(NetworkDevice* device) {
    // vérifier si il y a un doublon en récup la liste puis verifiér si même hostname
    vector<NetworkDevice*> currentDevices = listDevices();
    for (auto it = currentDevices.begin(); it != currentDevices.end(); ++it) {
        if ((*it)->getHostname() == device->getHostname()) {
            cout << "ERROR : No doublon authorized." << endl;
            return;
        }
    }
    // trie par ordre alphabétique du hostname 
    sort(currentDevices.begin(), currentDevices.end(), [](NetworkDevice* a, NetworkDevice* b) {
        return a->getHostname() < b->getHostname();
    });
    setDevices(currentDevices);

    if (devices.size() < 15) {
        devices.push_back(device);
    } else {
        cout << "ERROR : Cannot add more devices, maximum limit reached." << endl;
    }
}

NetworkDevice* NetworkInfrastructure::searchDeviceByHostname(string hostname) {
    for (const auto& device : devices) {
        if (device->getHostname() == hostname) {
            return device;
        }
    }
    cout << "ERROR : Device with hostname " << hostname << " not found." << endl;
    return new(NetworkDevice);
}

void NetworkInfrastructure::removeDeviceByHostname(string hostname) {
    for (auto it = devices.begin(); it != devices.end(); ++it) {
        if ((*it)->getHostname() == hostname) {
            devices.erase(it);
            cout << "Device with hostname " << hostname << " removed." << endl;
            return;
        }
    }
    cout << "ERROR : Device with hostname " << hostname << " not found." << endl;
}

double NetworkInfrastructure::averagePowerConsumptionByType() {
    if (devices.empty()) {
        cout << "ERROR : No devices in the infrastructure." << endl;
        return 0;
    }

    double totalPower = 0.0;
    for (const auto& device : devices) {
        totalPower += device->getPowerConsumption();
    }
    return totalPower / devices.size();
}
