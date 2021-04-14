#ifndef TIMEDEVENT_H
#define TIMEDEVENT_H
#include "event.h"

class TimedEvent : public Event
{
public:
    TimedEvent(string _title, string _description)
        : Event(_title, _description), daysRemaining(0) {}
    TimedEvent(string _title, string _description, int _days)
        : Event(_title, _description), daysRemaining(_days) {}
    int getDaysRemaining() const;
    void setDaysRemaining(int);
    void print(ostream&) const;
private:
    int daysRemaining;
};

#endif /* TIMEDEVENT_H */