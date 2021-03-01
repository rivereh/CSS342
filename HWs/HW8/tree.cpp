#include "tree.h"

void Tree::insert(Instructor instructor)
{
    Tree *temp = new Tree(&instructor);
    children.push_back(temp);
}

void Tree::insert(Student student)
{
    if (insertIndex >= children.size())
        insertIndex = 0;
    Tree *temp = new Tree(&student);

    // check to make sure instructor has less than 8 students before inserting
    if (children.at(insertIndex)->children.size() < 8)
        children.at(insertIndex)->children.push_back(temp);
    else
        insertIndex++;
    insertIndex++;
}

void Tree::insert(Student student, string instructor)
{
    if (find(instructor) == nullptr)
    {
        cout << "Instructor does not exist!\n";
        return;
    }
    if (find(instructor)->children.size() >=8)
    {
        cout << "Instructor full, please choose another!\n";
        return;
    }
    Tree *temp = new Tree(&student);
    find(instructor)->children.push_back(temp);
}

void Tree::insertOverload(Tree* student)
{
    if (insertIndex >= children.size())
        insertIndex = 0;

    children.at(insertIndex)->children.push_back(student);
    insertIndex++;
}

void Tree::removeStudent(string student)
{
    if (find(student) == nullptr)
    {
        cout << "Student does not exist!\n";
        return;
    }
    Tree *temp = find(student);
    temp->children.erase(temp->children.begin() + getIndex(temp->children, student));
}

void Tree::removeInstructor(string instructor)
{
    vector<Tree*> copy;
    if (find(instructor) == nullptr)
    {
        cout << "Instructor does not exist!\n";
        return;
    }

    for (Tree* node : find(instructor)->children)
        copy.push_back(node);

    children.erase(children.begin() + getIndex(children, instructor));

    for (Tree* node : copy)
        insertOverload(node);
}

int Tree::getIndex(vector<Tree*> tree, string name)
{
    for (int i = 0; i < tree.size(); i++)
    {
        if (tree[i]->person->getName() == name)
            return i;
    }
    return -1;
}

Tree* Tree::find(string name)
{
    for (Tree *node : children)
    {
        if (node->person->getName() == name)
            return node;
        for (Tree *childNode : node->children)
        {
            if (childNode->person->getName() == name)
                return node;
        }
    }
    return nullptr;
}

ostream& operator<<(ostream &outStream, const Tree &tree)
{
    for (Tree *node : tree.children)
    {
        outStream << node->person->getName() << endl;
        for (Tree *childNode : node->children)
        {
            outStream << "  " << childNode->person->getName() << endl;
        }
    }
    return outStream;
}
