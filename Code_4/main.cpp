#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    string path = "/home/student/file2.txt";
    ifstream fin;
    string x;
    string s1;
    fin.open(path);
    if (!fin.is_open()) {
        cout<<"������ ������ "<<endl;
    } else {
        cout<<"���� ������ � ������! \n";
        cout<<"���������� ������ ����� (������ ��������): \n";
        while (!fin.eof()) {
            s1=x;
            x= "";
            getline(fin, x);
            cout<<x<<endl;
        }
    }
    string pytb = "/home/student/file1.txt";
    ofstream fout;
    fout.open(pytb, ofstream::app);
    if (!fout.is_open()) {
        cout<<"������ ������"<<endl;
    } else {
        fout<<s1;
    }
    fout.close();
    ifstream f;
    string y;
    f.open(pytb);
    if (!f.is_open()) {
        cout<<"������ ������ "<<endl;
    } else {
        cout<<"���� ������ � ������! "<<endl;
        cout<<"���������� ������� ����� (���� ���������� ���������� ����� 2): "<<endl;
        while (!f.eof()) {
            y= "";
            getline(f, y);
            cout<<y<<endl;
        }
        fin.close();
        f.close();
        return 0;
    }
}