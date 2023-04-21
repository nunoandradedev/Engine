#include <iostream>
#include <thread>
#include <memory>
#include <mutex>

class ThreadSpawner
{

public:
    ThreadSpawner()
    {
        myThread = std::make_shared<std::thread>(&ThreadSpawner::callback, this);
    }
    ~ThreadSpawner()
    {

    }

    void callback()
    {
        std::lock_guard<std::mutex> lock(this->threadMutex);
    }



private:
    std::shared_ptr<std::thread> myThread;
    std::mutex threadMutex;
};