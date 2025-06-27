#include <iostream>
using namespace std;

// Functions 

void main_function();

void add_teacher();

void add_student();

//----------------------


// Classes

class teachers {
public:
    string name;
    int age;
    float salary;
    teachers(string name, int age, float salary) {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }
    void display(int j) {
        cout << "\n---------------------- Teacher " << j + 1 << " Informations------------------------\n";
        cout << "Teacher's " << j+1 << " Name: " << name << endl;
        cout << "Teacher's " << j + 1 << " Age: " << age << endl;
        cout << "Teacher's " << j + 1 << " Salary: " << salary << endl;
        cout << "----------------------------------------------------------------------\n";
    }
};

class students {
public:
    string name;
    int age;
    int id;
    students(string name, int age, int id) {
        this->name = name;
        this->age = age;
        this->id = id;
    }
    void display(int j) {
        cout << "\n---------------------- Student " << j + 1 << " Informations------------------------\n";
        cout << "Student's " << j + 1 << " Name: " << name << endl;
        cout << "Student's " << j + 1 << " Age: " << age << endl;
        cout << "Student's " << j + 1 << " ID: " << id << endl;
        cout << "----------------------------------------------------------------------\n";
    }
    
};

//----------------------

int main()
{
    main_function();
    return 0;
}

// Functions' Details


void main_function()
{
    int User_choice;
    do
    {

        cout << "\n--------------- System options ---------------" << endl;
        cout << "\n1- Press 1 to Add Teacher";
        cout << "\n2- Press 2 to Add Student";
        cout << "\n3- Press 3 to Exit\n";
        cout << "\n-----------------"<<endl;
        cin >> User_choice;
        cout << "\n-----------------\n";
        switch (User_choice)
        {
        case 1:
            add_teacher();
            break;
        case 2:
            add_student();
            break;
        case 3:
            break;
        default:
            cout << "\n--------------- Enter a valid choice ---------------\n";
            main_function();
        }
    } while (User_choice != 3);

}

void add_teacher()
{
    int number_of_teachers_to_add;
    cout << "Enter the number of teachers you want to add to the system\n";
    cout << "-----------------"<<endl;
    cin >> number_of_teachers_to_add;
    cout << "\n-----------------\n";
    int ages[10];
    string names[10];
    float salarys[10];

    //for loop for getting data

    for (int i = 1; i <= number_of_teachers_to_add; i++)
    {
        cout << "Enter Name " << i << " :\n";
        cout << "-----------------"<<endl;
        cin >> names[i - 1];
        cout << "-----------------\n";

        cout << "Enter age " << i << " :\n";
        cout << "-----------------" << endl;
        cin >> ages[i - 1];
        cout << "-----------------\n";

        cout << "Enter salary " << i << " :\n";
        cout << "-----------------" << endl;
        cin >> salarys[i - 1];
        cout << "-----------------\n";
    }

    for (int j = 0; j < number_of_teachers_to_add; j++)
    {
        teachers teacher(names[j], ages[j], salarys[j]);
        teacher.display(j);
    }
}

void add_student()
{
    int number_of_students_to_add;
    cout << "Enter the number of students you want to add to the system\n";
    cout << "-----------------" << endl;
    cin >> number_of_students_to_add;
    cout << "\n-----------------\n";
    int ages[10];
    string names[10];
    int id[10];

    //for loop for getting data

    for (int i = 1; i <= number_of_students_to_add; i++)
    {
        cout << "Enter Name " << i << " :\n";
        cout << "-----------------" << endl;
        cin >> names[i - 1];
        cout << "-----------------\n";

        cout << "Enter age " << i << " :\n";
        cout << "-----------------" << endl;
        cin >> ages[i - 1];
        cout << "-----------------\n";

        cout << "Enter ID " << i << " :\n";
        cout << "-----------------" << endl;
        cin >> id[i - 1];
        cout << "-----------------\n";
    }

    for (int j = 0; j < number_of_students_to_add; j++)
    {
        students student(names[j], ages[j], id[j]);
        student.display(j);
    }
}


//---------------------------------