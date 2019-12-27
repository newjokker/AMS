#include <iostream>  // 在屏幕输入输出都要这个头文件
#include <string>
using namespace std;

#define MAX_NUM 1000

void showMenu()
{
    cout << "************************" << endl;
    cout << "****** 1. add    *******" << endl;
    cout << "****** 2. show   *******" << endl;
    cout << "****** 3. delete *******" << endl;
    cout << "****** 4. find   *******" << endl;
    cout << "****** 5. fix    *******" << endl;
    cout << "****** 6. clear  *******" << endl;
    cout << "****** 0. quit   *******" << endl;
    cout << "************************" << endl;
}

struct Person
{
    int m_Sex=0;
    int m_Age=0;
    string m_Name="";
    string m_Phone="";
    string m_Addr="";
};

struct Addressbooks
{
    struct Person PersonArray[MAX_NUM];
    int m_Size=0;
};

void addPerson(Addressbooks *abs)
{
    if(abs->m_Size == MAX_NUM)
    {
        cout << "addressbooks is over flow"<< endl;
    }
    else
    {
        // name
        string name;
        cout << "print name :" << endl;
        cin >> name;
        abs->PersonArray[abs->m_Size].m_Name = name;
        // sex
        int sex=0;
        while (true)
        {
            cout << "print sex :" << endl;
            cout << "1 : man " << endl;
            cout << "2 : woman " << endl;
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->PersonArray[abs->m_Size].m_Sex = sex;
                break;
            }
        }
        // phone
        string phone;
        cout << "print phone :" << endl;
        cin >> phone;
        abs->PersonArray[abs->m_Size].m_Phone = phone;
        // address
        string addr;
        cout << "print address :" << endl;
        cin >> phone;
        abs->PersonArray[abs->m_Size].m_Addr = addr;
        //
        abs->m_Size++;
        cout << "add success" << endl;
    }
}

void showPerson(Addressbooks *abs)
{
    for(int i=0;i<abs->m_Size;i++)
    {
        cout << "name :" << abs->PersonArray[i].m_Name << endl;
        cout << "sex :" << abs->PersonArray[i].m_Sex << endl;
        cout << "age :" << abs->PersonArray[i].m_Age << endl;
        cout << "phone :" << abs->PersonArray[i].m_Phone << endl;
        cout << "address :" << abs->PersonArray[i].m_Addr << endl;
        cout << "--------------------------------------" << endl;
    }
}

void deletePerson(Addressbooks *abs)
{
    string name;
    Person *person;
    cout << "delete person name" << endl;
    cin >> name;
    for(int i=0;i<abs->m_Size;i++)
    {
        if (abs->PersonArray[i].m_Name == name)
        {
            for(int j=i;j<abs->m_Size;j++)
            {
                abs->PersonArray[i] = abs->PersonArray[i+1];  // 为什么可以这么直接赋值？
                abs->m_Size--;
            }
        }
    }
}

void findPerson(Addressbooks *abs)
{
    Person person;
    string name;
    cin >> name;

    for(int i=0;i<abs->m_Size;i++)
    {
        if (abs->PersonArray[i].m_Name == name)
        {
            person = abs->PersonArray[i];
            cout << "--------------------------------------" <<endl;
            cout << "name :" <<endl;
            cout << "sex :" <<endl;
            cout << "age :" <<endl;
            cout << "address :" <<endl;
            cout << "--------------------------------------" <<endl;
        }
    }
}

void clear(Addressbooks *abs)
 {
    abs->m_Size=0;
 }

int main() {

    int select = 0;

    Addressbooks abs;

    while (true)
    {
        showMenu();

        cin >> select;

        switch (select)
        {
            case 1:
                addPerson(&abs);
                break;
            case 2:
                showPerson(&abs);
                break;
            case 3:
                deletePerson(&abs);
                break;
            case 4:
                findPerson(&abs);
                break;
            case 5:
                break;
            case 6:
                clear(&abs);
                break;
            case 0:
                cout << "see you later" << endl;
                return 0;
            default:
                break;
        }
        system("pause");
        system("cls");  // 清屏操作
    }
}