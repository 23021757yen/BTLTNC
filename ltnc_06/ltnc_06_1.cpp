#include<bits/stdc++.h>

using namespace std;

struct Sinhvien
{
    int age;
    string first_name;
    string last_name;
    int standard;
    
    void Out (Sinhvien sinhvien)
    {
        cout<<sinhvien.age<<" "<<sinhvien.first_name<<" "<<sinhvien.last_name<<" "<<sinhvien.standard;
    }
};
int main()
{
    Sinhvien sinhvien ;
    cin>>sinhvien.age>>sinhvien.first_name>>sinhvien.last_name>>sinhvien.standard;
    sinhvien.Out(sinhvien);
    return 0;
}
