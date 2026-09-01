#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
};



int main()
{


    Student s1,s2,s3;

    s1.name = "Inan";
    s1.age = 21;

    s2.name = "Rakib";
    s2.age = 23;

    s3.name = "Sojib";
    s3.age = 24;


    cout<<s1.name<<" "<<s1.age<<" "<<endl;
    cout<<s2.name<<" "<<s2.age<<" "<<endl;
    cout<<s3.name<<" "<<s3.age<<" "<<endl;


    return 0;
}



