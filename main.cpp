#include <iostream>  // 在屏幕输入输出都要这个头文件
using namespace std;

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

// show menu
void showMenu()
{
    cout << "************************" << endl;
    cout << "****** 1. add    *******" << endl;
    cout << "****** 2. show   *******" << endl;
    cout << "****** 3. delete *******" << endl;
    cout << "****** 4. find   *******" << endl;
    cout << "****** 5. fix    *******" << endl;
    cout << "****** 6. clear  *******" << endl;
    cout << "****** 7. quit   *******" << endl;
    cout << "************************" << endl;
}



int main() {

    int select = 0; // 用户选择输入变量

    while (true)
    {
        showMenu();

        cin >> select;

        switch (select)
        {
            case 1:
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