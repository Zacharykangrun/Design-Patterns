
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Kitchen
{
private:
    Kitchen(){}
    ~Kitchen(){}
    /* data */
public:
    static Kitchen* getInstance(){
        static Kitchen* instance = new Kitchen();
        return instance;
    }
    
    void prepareFood(const std::string &food){
        std::cout << "kitchen is cooking: " << food << std::endl;
    }
};

class command
{
public:
    command(/* args */){}
    virtual ~command(){}
    virtual void execute() const = 0;
};

class Order : public command
{
public:
    Order(Kitchen* kitchen, vector<string> foods):m_kitchen(kitchen), m_foods(foods){

    }
    ~Order(){}
    virtual void execute() const override {
        cout << "kitchen is preparing food material..." << endl;
        for(const string & item:m_foods){
            m_kitchen->prepareFood(item);
        }
    }
private:
    Kitchen* m_kitchen;
    vector<string> m_foods;
};

class Waitress
{
private:
    command* m_command;
public:
    Waitress(/* args */){}
    ~Waitress(){
        delete m_command;
    }

    void orderUP(command * command){
        cout<< "Waitress is submitting..." << endl;
        m_command = command;
        m_command->execute();
    }
};

class Client
{
public:
    Client(/* args */){}
    ~Client(){}

    void orderFood(Waitress& Waitress, vector<string>foods){
        Waitress.orderUP(new Order(Kitchen::getInstance(),foods));
    }
};
