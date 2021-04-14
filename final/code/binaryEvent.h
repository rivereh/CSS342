#ifndef BINARYEVENT_H
#define BINARYEVENT_H
#include "event.h"

class BinaryEvent : public Event
{
public:
    BinaryEvent(string _title, string _description)
        : Event(_title, _description), hasThisHappened(false) {}
    BinaryEvent(string _title, string _description, bool _status)
        : Event(_title, _description), hasThisHappened(_status) {}
    bool getStatus() const;
    void setStatus(bool);
    void print(ostream&) const;
private:
    bool hasThisHappened;
};

#endif /* BINARYEVENT_H */