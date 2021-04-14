#ifndef EVENT_H
#define EVENT_H
#include <iostream>
using namespace std;

class Event
{
public:
    Event(string _title, string _description) : title(_title), description(_description) {}
    string getTitle() const;
    string getDescription() const;
    void setTitle(string);
    void setDescription(string);
    virtual void print(ostream&) const = 0;
private:
    string title;
    string description;
    friend ostream& operator<<(ostream&, const Event&);
};

#endif /* EVENT_H */