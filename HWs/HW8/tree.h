#ifndef TREE_H
#define TREE_H
#include "person.h"
#include "student.h"
#include "instructor.h"
#include "supervisor.h"
#include <vector>
using std::cout;
using std::endl;
using std::vector;

class Tree
{
public:
    Tree(Person* person) : person(person) {}
    void insert(Instructor);
    void insert(Student);
    void insert(Student, string);
    void insertOverload(Tree*);
    void removeStudent(string);
    void removeInstructor(string);
    int getIndex(vector<Tree*>, string);
    Tree* find(string);

private:
    Person *person;
    vector<Tree*> children;
    int insertIndex = 0;
    friend ostream& operator<<(ostream&, const Tree&);
};

#endif /* TREE_H */