#include <iostream>

using namespace std;
/*5. Start with the date structure in Exercise 5 in Chapter 4 and transform it into a date
class. Its member data should consist of three ints: month, day, and year. It should also
have two member functions: getdate(), which allows the user to enter a date in
12/31/02 format, and showdate(), which displays the date.

5. Create a structure of type date that contains three members: the month, the day of the
month, and the year, all of type int. (Or use day-month-year order if you prefer.) Have
the user enter a date in the format 31/12/2001, store it in a variable of type struct date,
then retrieve the values from the variable and print them out in the same format.*/
class date {
    private :
        int year , month , day ;
        char slash_dummy ;
    public :
        void getdate(){
            cout << "Enter date in 31/12/2001 : "<<endl;
            cin >> day >> slash_dummy >> month >> slash_dummy >> year ;
                }
        void showdate(){
            cout << "The date is :" << day << slash_dummy << month << slash_dummy << year;
              }
};



int main()
{
    date d1 ;
    d1.getdate();
    d1.showdate();
    return 0;
}
