#pragma once
#include <vector>
#include <memory>

class Server;
class Pod;

class SchedulerStrategy {
    public:
        virtual ~SchedulerStrategy() = default;
        virtual std::shared_ptr<Server> selectServer(const Pod& pod, const std::vector<std::shared_ptr<Server>>& servers) = 0;
};
