#include "event.h"
#include "binaryEvent.h"
#include "timedEvent.h"
#include "decisionTree.h"

int main()
{
    BinaryEvent event("Passed CSS342", "Successfully achieved at least a 2.0 in CSS 342");
    BinaryEvent event2("Job promotion", "Promotion to sales manager");
    TimedEvent event3("Vacation", "Trip to Mexico", 32);
    TimedEvent event4("Attack On Titan", "When the next episode will be available", 7);
    TimedEvent event5("Next term", "When Spring term will begin", 13);

    DecisionTree tree;
    tree.addEvent(&event);
    tree.addEvent(&event2);
    tree.addEvent(&event3);
    tree.addEvent(&event4);
    tree.addEvent(&event4); // adding duplicate

    tree.removeEvent(&event5); // removing event that does not exist in tree

    tree.printPathways();
    tree.printPathways(&event);

    tree.find(&event); // finding event in tree
    tree.find(&event5); // finding event not in tree
}