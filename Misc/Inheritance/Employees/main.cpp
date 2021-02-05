#include <iostream>
#include "hourlyemployee.h"
#include "salariedemployee.h"

using namespace std;

int main()
{

    HourlyEmployee river;
    river.setName("River");
    river.setSsn("123-45-6789");
    river.setRate(20.50);
    river.setHours(40);
    river.printCheck();

    SalariedEmployee julianna("Julianna", "987-65-4321", 10500.00);
    julianna.printCheck();

    


}