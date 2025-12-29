#pragma once
#include <vector>
#include <memory>
#include <string>
#include "Server.hpp"
#include "Scheduler.hpp"


class Cluster {
private:
std::vector<std::shared_ptr<Server>> servers;
Scheduler scheduler;


public:
Cluster() = default;


void addServer(const std::shared_ptr<Server>& server);


bool deployPod(const std::shared_ptr<Pod>& pod);
bool scalePod(const std::string& podName, int replicas);


void showStatus() const;
};