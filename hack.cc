//#####################################
//## HACKING USE 2TW TOOLS SAME TIME ##
//## author CESAR VERSATTI 2021 ---- ##
//#####################################


#include <iostream>

using namespace std;

class Hacking {
    public:
      virtual void StartH() = 0;
      //{
           //cout<<"Hacking start..\n";
       //}
};

class Hydra:public Hacking {
    public:
       void StartH() {
            cout<<"Hydra start..\n";
        }
};
class Map:public Hacking {
    public:
       void StartH() {
           cout<<"Map start..\n";
        }
    
};

int main()
{
     Hacking* i1 = new Hydra();
    //i1->StartH();
    
     Hacking* i2 = new Map();
    //i2->StartH();

    Hacking* Actions[2] = {i1,12};
    for(int i = 0; i < 2; i++)
        Actions[i]->StartH();

    system("pause>0");
}