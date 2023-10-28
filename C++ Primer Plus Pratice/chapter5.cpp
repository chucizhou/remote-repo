#include <iostream>
#include <string>
#include <array>

//#include <cstring>
class Application{
private:
    std::string first_name;
    std::string last_name;
    int text;
    char grade;
    int age;
public:
    void In(){
        std::cout << "What is your fist name?\n";
        getline(std::cin,first_name);
        std::cout << "What is your last name?\n";
        getline(std::cin,last_name);
        std::cout << "What letter grade do you  deserve?\n";
        std::cin >> grade;
        std::cout << "What is your age\n";
        std::cin >> age;
    }
    void Out(){
        std::cout << "Name: " << last_name +","+ first_name << std::endl;
        std::cout << "Grade:" << (char(grade+1)) << std::endl;
        std::cout << "Age:" << age;
    }
};
struct CandyBar{
    std::string Brand;
    double Weight;
    int C_num;
};
struct Pizza{
    std::string Id;
    double D;
    double weight;
};
int main(){
    //2.
    /*std::string name;
    std::string dessert;
    std::cout << "Enter your name:\n" ;
    getline(std::cin,name);
    std::cout << "Enter your favorite dessert:\n";
    getline(std::cin,dessert);
    std::cout << "I have some delicious " << dessert << " for you," << name << std::endl;*/

    //2. try to use class
    /*Application a1;
    a1.In();
    a1.Out();*/

    //5.
    /*CandyBar snack = {
            "Mocha Munch",
            2.3,
            350
    };
    std::cout << "Brand:" << snack.Brand << "\n"
    << "Weight:" << snack.Weight << "\n" << "C_num:" << snack.C_num << std::endl;*/

    //7.哇哦，我不知道，我只是试试——居然可以使用pizza[num]这种格式
    int count;
    std::cout << "How many pizza's message you need to save:" ;
    std::cin >> count;
    std::cin.get();
    Pizza pizza[count];
    for(int i=0;i<count;i++) {
        std::cout << "Enter the Company's name:" ;
        getline(std::cin,pizza[i].Id);
        std::cout << "Enter the diameter:";
        std::cin >> pizza[i].D;
        std::cout << "Enter the weight:";
        std::cin >> pizza[i].weight;
        std::cin.get();
    }

    //8.
    /*int count;
    std::cout << "How many pizza's message you need to save:" ;
    std::cin >> count;
    Pizza* ptr_pizza = new Pizza[count];
    std::cin.get();
    for(int i=0;i<count;i++){
        std::cout << "Enter the diameter:";
        std::cin >> (ptr_pizza+i)->D;
        std::cout << "Enter the Company's name:" ;
        getline(std::cin,(ptr_pizza+i)->Id);
        std::cout << "Enter the weight:";
        std::cin >> (ptr_pizza+i)->weight;
        std::cin.get();
        std::cout << "Company is : " << (ptr_pizza+i)->Id << " Weight is : "
             << (ptr_pizza+i)->weight << " , Diameter is : " << (ptr_pizza+i)->D << std::endl;
    }
    delete [] ptr_pizza;//不要忘记释放*/

    //10.
    /*const int times =3;
    std::array<double,times>grade{};

    std::cout << "please input your first grade : ";
    std::cin >> grade[0];

    std::cout << "please input your second grade : ";
    std::cin >> grade[1];

    std::cout << "please input your third grade : ";
    std::cin >> grade[2];

    double average = (grade[0] + grade[1] + grade[2])/times;
    std::cout << times << " times average is "<< average << std::endl;*/
}
