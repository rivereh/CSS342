#include "binaryEvent.h"

bool BinaryEvent::getStatus() const { return hasThisHappened; }
void BinaryEvent::setStatus(bool newStatus) { hasThisHappened = newStatus; }

void BinaryEvent::print(ostream& os) const
{
    os << "Title: " << getTitle() << endl;
    os << "Description: " << getDescription() << endl;
    os << "Staus: ";
    (hasThisHappened) ? os << "This event has happened!" : os << "This event has not happened!";
}