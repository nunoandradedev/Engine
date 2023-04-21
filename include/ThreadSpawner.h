#include <iostream>
#include <thread>
#include <memory>
#include <mutex>
#include <Windows.h>

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
        std::cout<<"The callback function is active"<<std::endl;
        Sleep(500);
    }



private:
    std::shared_ptr<std::thread> myThread;
    std::mutex threadMutex;
};