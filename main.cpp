#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

void print(){
    cout<<"  |------------------------------------|"<<endl;
    cout<<"  |--------- C++���� �ػ����� ---------|"<<endl;
    cout<<"  |*--1.ʵ��10�����ڵĶ�ʱ�رռ���� --|"<<endl;
    cout<<"  |*--2.�����رռ����               --|"<<endl;
    cout<<"  |*--3.ע�������                   --|"<<endl;
    cout<<"  |*--4.ָ��ɾ���ļ�                 --|"<<endl;
    cout<<"  |*--0.�˳�ϵͳ                     --|"<<endl;
    cout<<"  |------------------------------------|"<<endl;
}
int main()
{
    system("title C++���Թػ�����");
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
        cout<<"�����ڶ�������Զ��رռ����?(0~600)\n";
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
