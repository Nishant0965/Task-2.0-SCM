#include <iostream>
using namespace std;

class Animal
{
    public:
    void funAnimal()
    {
        cout<<"Hello I am a Animal"<<endl;
    }
};



class Cat: public Animal
{
    public:
    void funCat()
    {
        cout<<"Hello I am a Cat";
    }


};

class Tiger: public Cat{

};

int main()
{
    Tiger obj;
    obj.funAnimal();
    obj.funCat();
}