#include "tree.h"

int main()
{
    // initialize supervisor, instructors, and students
    Supervisor erwin("Ewrin");
    Instructor hange("Hange");
    Instructor miche("Miche");
    Instructor levi("Levi");
    Student eren("Eren");
    Student mikasa("Mikasa");
    Student armin("Armin");
    Student jean("Jean");
    Student sasha("Sasha");
    Student connie("Connie");
    Student crysta("Crysta");
    Student reiner("Reiner");
    Student bertholdt("Berthholdt");
    Student annie("Annie");
    Student beane("Beane");
    Student sawney("Sawney");
    Student marco("Marco");
    Student grisha("Grisha");
    Student gabi("Gabi");
    Student floch("Floch");
    Student pieck("Pieck");
    Student falco("Falco");
    Student onyankopon("Onyankopon");

    Tree tree(&erwin); // initalize tree with supervisor Ewrin

    // insert instructors
    tree.insert(hange);
    tree.insert(miche);
    tree.insert(levi);

    // insert students
    tree.insert(eren);
    tree.insert(mikasa);
    tree.insert(armin);
    tree.insert(jean);
    tree.insert(sasha);
    tree.insert(connie);
    tree.insert(crysta);
    tree.insert(reiner);
    tree.insert(bertholdt);
    tree.insert(annie);
    tree.insert(beane);
    tree.insert(sawney);
    tree.insert(marco);
    tree.insert(grisha);
    tree.insert(gabi, "Miche"); // insert student to specific instructor
    tree.insert(floch);
    tree.insert(pieck);
    tree.insert(falco);
    tree.insert(onyankopon);

    cout << "Tree before instructor Hange removal:\n";
    cout << tree << endl;

    tree.removeInstructor("Hange");


    cout << tree << endl;

}