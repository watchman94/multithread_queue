#include <iostream>
#include "include/queue.h"
#include <thread>
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Hello, Sunday!" << std::endl;
    ThreadsafeQueue<int> q;
    q.push(0);
    return 0;
}
