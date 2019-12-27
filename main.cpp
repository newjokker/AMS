#include <iostream>  // 在屏幕输入输出都要这个头文件
#include <string>
using namespace std;

#define MAX_NUM 1000

/*
 * 要实现的功能
    * 添加联系人
    * 显示联系人
    * 删除联系人
    * 查找联系人
    * 修改联系人
    * 清空联系人
    * 退出通讯录
 * */

// 显示菜单
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

// 联系人结构体
struct Person
{
    int m_Sex;
    int m_Age;
    string m_Name;
    string m_Phone;
    string m_Addr;
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

int main() {

    int select = 0; // 用户选择输入变量

    Addressbooks abs;
    abs.m_Size = 0;

    while (true)
    {
        showMenu();

        cin >> select;

        switch (select)
        {
            case 1:
                addPerson(&abs);
                system("pause");
                system("cls");  // 清屏操作
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 0:
                cout << "see you later" << endl;
                system("pause");
                return 0;
            default:
                break;
        }

    }
}