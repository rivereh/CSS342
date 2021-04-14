#include <iostream>
using namespace std;

class Person
{
public:
    Person(string _name, int _age) : name(_name), age(_age) {}
private:
    string name;
    int age;
    friend void birthday(Person &person)
    {
        person.age++;
    }
    friend ostream& operator<<(ostream &outStream, const Person &person)
    {
        outStream << person.name << " " << person.age;
        return outStream;
    }
};

class Book
{
    friend class Movie;
private:
    string title;
    string author;
    int year;
public:
    Book(string _title) : title(_title) {}
};

class Movie
{
private:
    string title;
    string director;
    int year;
public:
    void AdaptBook(Book &b)
    {
        title = b.title;
    }
    friend ostream& operator<<(ostream &outStream, const Movie &movie)
    {
        outStream << movie.title;
        return outStream;
    }
};

int main()
{
    // Person river("River", 23);
    // cout << river << endl;
    // birthday(river);
    // cout << river << endl;

    Book b("1984");
    Movie m;

    m.AdaptBook(b);
    cout << m << endl;

}