#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    ifstream f1("/media/Общедоступные/file6/data_v1.bin", ios::binary);
    ofstream f2("/media/Общедоступные/file6/56.bin", ios::out | ios::binary);
    int size;
    f1.seekg (0, std::ios::end);
    size = f1.tellg();
    f1.seekg(0,ios::beg);
    int len = size / 8;
    double A[len];
    f1.read((char*)&A, sizeof(A));
    float B[len];
    for (int i = 0; i < len; i++) {
        B[i] = 1/A[i];
    }
    f2.write((char*)&B, sizeof(B));
    f1.close();
    f2.close();
    return 0;
}