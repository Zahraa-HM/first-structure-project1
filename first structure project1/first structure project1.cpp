

#include <iostream>

using namespace std;
struct Smartphone
{
    // reference
    string name;
    // value
    int storageSpace;
    // reference
    string color;
    // value
    double price;
};
struct person
{
    string name;
    int age;
    Smartphone smartphone;
};
void smartphoneInfo(Smartphone smartPhone)
{
    cout << "smartphone name: " << smartPhone.name << endl;
    cout << "smartphone storage :" << smartPhone.storageSpace << endl;
    cout << "smartphone color : " << smartPhone.color << endl;
    cout << " smartphone price :" << smartPhone.price << endl;
}
void personeInfo(person per)
{
    cout << "person name: " << per.name << endl;
    cout << "person age: " << per.age << endl;
    smartphoneInfo(per.smartphone);
}

int main()
{

}
