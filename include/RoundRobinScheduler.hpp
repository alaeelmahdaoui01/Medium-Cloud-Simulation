#pragma once
#include "SchedulerStrategy.hpp"
#include <cstddef>

class RoundRobinScheduler : public SchedulerStrategy {
private:
    std::size_t currentIndex = 0;

public:
    std::shared_ptr<Server> selectServer(
        const Pod& pod,
        const std::vector<std::shared_ptr<Server>>& servers
    ) override;
};
