#include <iostream>
#include <list>

using namespace std;

class User
{
public:
    string Fullname;
    string Address;
    string PhoneNumber;
    int Age;
    string Birthdate;

    User(string f, string a, string p, int g, string b)
     : Fullname(f), Address(a), PhoneNumber(p), Age(g), Birthdate(b) {}
};

class UserService
{
public:
    list<User> Users;

    void AddUser(User user)
    {
        Users.push_back(user);
    }

    void GetUser()
    {
        for(auto user : Users)
        {
            cout << "Fullname: " << user.Fullname << endl;
            cout << "Address: " << user.Address << endl;
            cout << "Age: " << user.Age << endl;
            cout << "PhoneNumber: " << user.PhoneNumber << endl;
            cout << "Birthdate: "<< user.Birthdate << endl;
        }
    }

    void push_front(User user)
    {
        Users.push_front(user);
    }

    void reseiz()
    {
        Users.clear();
    }
};

int main()
{
    string Fullname, Address, PhoneNumber, Birthdate;
    int Age;

    cout << "Welcome to taraqqiyot!" << endl;

    cout << "Fullname: ";
    cin >> Fullname;

    cout << "Address: ";
    cin >> Address;

    cout << "Age: ";
    cin >> Age;

    cout << "PhoneNumber: ";
    cin >> PhoneNumber;

    cout << "Birthdate: ";
    cin >> Birthdate;

    UserService userService;

    User newUser(Fullname, Address, PhoneNumber, Age, Birthdate);

    userService.AddUser(newUser);

    userService.GetUser();

    cout << "Foydalanuvchini ro'yxatning birinchi qismiga qo'shish:" << endl;
    userService.push_front(newUser);

    cout << "Foydalanuvchilar old qismga qo'shgandan keyin:" << endl;
    userService.GetUser();

    cout << "Ro'yxatni qayta tiklash:" << endl;
    userService.reseiz();

    cout << "O'lchamni o'zgartirgandan keyin foydalanuvchilar: " << endl;
    userService.GetUser();

    return 0;
}
