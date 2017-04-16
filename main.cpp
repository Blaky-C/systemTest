#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

void print(){
    cout<<"  |------------------------------------|"<<endl;
    cout<<"  |--------- C++语言 关机程序 ---------|"<<endl;
    cout<<"  |*--1.实现10分钟内的定时关闭计算机 --|"<<endl;
    cout<<"  |*--2.立即关闭计算机               --|"<<endl;
    cout<<"  |*--3.注销计算机                   --|"<<endl;
    cout<<"  |*--4.指定删除文件                 --|"<<endl;
    cout<<"  |*--0.退出系统                     --|"<<endl;
    cout<<"  |------------------------------------|"<<endl;
}
int main()
{
    system("title C++语言关机程序");
    system("mode con cols=48 lines=25");
    system("color 0F");
    system("date /t");
    system("time /t");

    //int i=system("del c:/Users/Jack_asus/Desktop/a.txt");
    //cout<<i;

    char cmd[20] = "shutdown -s -t";
    char t[5]="0";

    char del[10] = "del ";
    char delPath[50] = "";
    print();

    int c;
    cin>>c;

    switch(c){
    case 1:
        cout<<"您想在多少秒后自动关闭计算机?(0~600)\n";
        cin>>t;
        system(strcat(cmd,t));
        break;
    case 2:
        system("shutdown -p");
        break;
    case 3:
        system("shutdown -l");
        break;
    case 4:
        cout<<"Enter path of the file you want to delete:\n";
        cin>>delPath;
        system(strcat(del,delPath));
        break;
    case 0:
        break;
    default:
        cout<<"Input Error!"<<endl;
    }

    system("pause");
    return 0;
}
