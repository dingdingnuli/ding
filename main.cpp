#include <iostream>

using namespace std;


class AbstractCalculator{

public:

    virtual int Result()=0;

    int num1;
    int num2;

};

class addCalculator:public AbstractCalculator{
     int Result(){

         return num1 + num2;
    }
};

class subCalculator:public AbstractCalculator{
    int Result(){

        return num1 - num2;
    }
};

class mulCalculator:public AbstractCalculator{
    int Result(){

        return num1 * num2;
    }
};

class divCalculator:public AbstractCalculator{
    int Result(){

        return num1 / num2;
    }
};

void test01(){

    AbstractCalculator * abc = new addCalculator;

    abc->num1 = 29;
    abc->num2 = 33;

    cout<<abc->num1<<"+"<<abc->num2<<"="<<abc->Result()<<endl;
    delete abc;


    abc=new subCalculator;

    abc->num1 = 29;
    abc->num2 = 33;

    cout<<abc->num1<<"-"<<abc->num2<<"="<<abc->Result()<<endl;
    delete abc;

}


int main() {
    test01();

    return 0;
}
