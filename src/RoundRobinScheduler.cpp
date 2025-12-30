#include "RoundRobinScheduler.hpp"
#include "Server.hpp"

std::shared_ptr<Server> RoundRobinScheduler::selectServer(
    const Pod& pod,
    const std::vector<std::shared_ptr<Server>>& servers
) {
    if (servers.empty()) return nullptr;

    std::size_t attempts = servers.size();

    while (attempts--) {
        auto& server = servers[currentIndex];
        currentIndex = (currentIndex + 1) % servers.size();

        if (server->canHost(pod)) {
            return server;
        }
    }

    return nullptr; // no server can host
}



// How cluster uses the strategies

// #include "Cluster.hpp"
// #include "LeastLoadedScheduler.hpp"

// Cluster cluster(
//     std::make_unique<LeastLoadedScheduler>()
// );

// to switch later 
// cluster.setScheduler(
//     std::make_unique<RoundRobinScheduler>()
// );