#ifndef DECISIONTREE_H
#define DECISIONTREE_H
#include "event.h"

// Did not have time to finish implementation
class DecisionTree
{
public:
    void addEvent(Event*);
    void removeEvent(Event*);
    bool find(Event*);
    void printLevels();
    void printPathways();
    void printPathways(Event*);
private:
    int totalEvents;
    int totalPathways;
};

#endif /* DECISIONTREE_H */