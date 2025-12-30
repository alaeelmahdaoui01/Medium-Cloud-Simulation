#pragma once
#include "SchedulerStrategy.hpp"

class LeastLoadedScheduler : public SchedulerStrategy {
    public:
        std::shared_ptr<Server> selectServer(const Pod& pod,const std::vector<std::shared_ptr<Server>>& servers) override;
};


