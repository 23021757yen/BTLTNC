
#include <bits/stdc++.h>

using namespace std;

class Sinhvien
{
    private:
    int age;
    string first_name;
    string last_name;
    int mark;
   
     public:
     void set(int a)
     {
         age=a;
     }
     int get()
     {
         return age;
     }
     void set_f(string s)
     {
         first_name=s;
     }
     string get_f()
     {
         return first_name;
     }
     void set_l(string s1)
     {
         last_name=s1;
     }
     string get_l()
     {
         return last_name;
     }
     void set_m(int m)
     {
         mark=m;
     }
     int get_m()
     {
         return mark;
     }
     
};
int main()
{
    Sinhvien sv;
    int age;
    string fname;
    string lname;
    int mark;
    
    cin>>age>>fname>>lname>>mark;
    sv.set(age);
    sv.set_f(fname);
    sv.set_l(lname);
    sv.set_m(mark);

    cout<< sv.get()<<endl;
    cout<<sv.get_l()<<", "<<sv.get_f()<<endl;
    cout<<sv.get_m()<<endl;
    cout<<endl;
    cout<<sv.get()<<","<<sv.get_f()<<","<<sv.get_l()<<","<<sv.get_m();

    return 0;
}
