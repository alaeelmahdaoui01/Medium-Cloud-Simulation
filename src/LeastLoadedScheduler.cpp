#include "LeastLoadedScheduler.hpp"
#include "Server.hpp"
#include <limits>


// The LeastLoadedScheduler scans all servers, 
// filters out those that cannot host the pod, 
// and selects the one with the lowest load, 
// defined as the maximum of CPU and memory utilization

std::shared_ptr<Server> LeastLoadedScheduler::selectServer(const Pod& pod,const std::vector<std::shared_ptr<Server>>& servers) {
    std::shared_ptr<Server> bestServer = nullptr;
    float minLoad = std::numeric_limits<float>::max();

    for (const auto& server : servers) {
        // Check if server can host the pod
        if (server->canHost(pod)) {
            float load = server->getLoad();
            if (load < minLoad) {
                minLoad = load;
                bestServer = server;
            }
        }
    }

    return bestServer; // nullptr if no server fits
}

