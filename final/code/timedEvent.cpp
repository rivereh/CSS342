#include "timedEvent.h"

int TimedEvent::getDaysRemaining() const { return daysRemaining; }
void TimedEvent::setDaysRemaining(int _newDays) { daysRemaining = _newDays; }

void TimedEvent::print(ostream& os) const
{
    os << "Title: " << getTitle() << endl;
    os << "Description: " << getDescription() << endl;
    os << "Days Remaining: " << daysRemaining;
}