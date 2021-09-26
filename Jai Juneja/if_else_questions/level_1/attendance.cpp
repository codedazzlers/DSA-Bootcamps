
#include <iostream>

using namespace std;

int main() {
    int classesHeld, classesAttended, percent;
    
    cout << "Give number of classes held: ";
    cin >> classesHeld;
    cout << "Give number of classes attended: ";
    cin >> classesAttended;

    percent = (classesAttended * 100)/classesHeld;
    
    if (percent >= 75)
        cout << "Student is allowed to sit for exam" << endl;
    else 
        cout << "Student is not allowed to sit for exam" << endl;
    return 0;
}
