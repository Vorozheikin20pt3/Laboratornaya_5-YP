#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string path = "/media/�������������/file6/data_v1.txt";
    ifstream fin;
    fin.open(path);
    double sr;
    double n;
    int i=0;
    if (!fin.is_open()) {
        cout<<"���� �� ������ !"<<endl;
    }else {
            cout<<"���� ������"<<endl;
            while (!fin.eof()) {
                if (n==0) {} else {
                    cout<<n<<endl;
                    i++;
                    sr +=n;
                }
                fin>>n;
            }
            sr = sr/i;
            cout<<"������� �������������� :"<<endl;
            cout<<sr<<endl;
            fin.close();
        }
        return 0;
    }