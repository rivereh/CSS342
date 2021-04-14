#include "event.h"

string Event::getTitle() const { return title; }
string Event::getDescription() const { return description; }
void Event::setTitle(string _title) { title = _title; }
void Event::setDescription(string _description) { description = _description; }

ostream& operator<<(ostream &os, const Event &event)
{
	event.print(os);
	return os;
}