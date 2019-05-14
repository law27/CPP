#include<iostream>
#include<string>
using namespace std;

enum class Animal
{
  pig=1,
  chicken,
  goat,
  cat,
  dog,
  ostrich
};

string GetAnimalName(int a)
{
   Animal val = static_cast<Animal>(a);
   switch(val)
   {
   case Animal::pig: return string("Pig");
   break;
   case Animal::chicken: return string("Chicken");
   break;
   case Animal::goat: return string("Goat");
   break;
   case Animal::dog: return string("Dog");
   break;
   case Animal::ostrich: return string("Ostrich");
   break;
   default:
    return string("What??");
   }
}

int PrintNumberOfLegs(int a)
{
   Animal val = static_cast<Animal>(a);
   switch(val)
   {
   case Animal::pig: return 4;
   break;
   case Animal::chicken: return 2;
   break;
   case Animal::goat: return 4;
   break;
   case Animal::dog: return 4;
   break;
   case Animal::ostrich: return 2;
   break;
   default:
    return 0;
   }
}

int main()
{
 int b;
 cin>>b;
 cout<<"A "<<GetAnimalName(b)<<" has "<<PrintNumberOfLegs(b)<<" Legs"<<endl;
 return 0;
}
