
#ifndef OS2_USERLEVELMANAGER_H
#define OS2_USERLEVELMANAGER_H


#include <vector>
#include <queue>
#include <unordered_map>
#include <list>

using namespace std;

struct comparator {
    bool operator()(int i, int j) {
        return i > j;
    }
};
class UserLevelManager
{

    UserLevelManager(int maxNumOfThreads){
        
    }

    priority_queue<int, std::vector<int>, comparator> minHeap;
    list<int> linkedList;
    std::unordered_map<int , int> hashMap;


};


#endif //OS2_USERLEVELMANAGER_H
