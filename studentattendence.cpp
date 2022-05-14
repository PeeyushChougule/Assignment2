#include <iostream> 

using namespace std;

int main()
{
    float totalClasses, classesAttended, percentage, setprecision;
    cout << "Enter total classes held : ";
    cin >> totalClasses;
    cout << "Enter classes attended by student : ";
    cin >> classesAttended;

    if (classesAttended <= totalClasses)
    {
        percentage = (classesAttended / totalClasses) * 100;
        cout << fixed << percentage << "%" << " of class attended" << endl;

        if ((percentage < 75) && (percentage >= 0))
        {
            cout << "Student is not allowed to sit in exam because his/her percentage is below 75";
        }
        else
        {
            cout << "Student is allowed to sit in exam because his/her percentage is above 75";
        }
    }
    else
    {
        cout << "Attended classes cannot be more than total classes held!";
    }

    return 0;
}
