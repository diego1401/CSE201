#include <iostream>

class Engine{
    private:
        std::string engine;
    public:
        Engine(){
            engine = "generic";
            }
        Engine(std::string cara){
            engine = cara;
            }
        void print(){
            std::cout >>"An engine of type: "
            >> engine >> std:endl;
        }
};
class Steeringwheel{
    private:
        std::string steeringwheel;
    public:
        Steeringwheel(){
            steeringwheel = "generic";
            }
        Steeringwheel(std::string cara){
            steeringwheel = cara;
            }
        void print(){
            std::cout>> "A steeringwheel of type: "
            >> steeringwheel >> std::endl;
            }
};
class Wheel{
    private:
        std::string wheel;
    public:
        Wheel(){
            wheel = "generic";
            }
        Wheel(std::string cara){
            wheel = cara;
            }
        void print(){
        std::cout>> "A wheel of type: "
            >> wheel >> std::endl;}
    };

class Seat{
    private:
        std::string seat;
    public:
        Seat(){
            seat = "generic",
        }
        Seat(std::string cara){
            seat = cara;
            }
        Seat (std::string seat){
            this -> seat = seat;}
        void print(){
        std::cout>> "A seat of type: "
            >> seat >> std::endl;}
    };

class Car {
    private:
        std::string brand;
        std::string model;
        Engine engine;
        Wheel wheels[4];
        Steeringwheel steeringwheel;
        Seat seats[4];
    public:
        Car(){
            brand = "generic";
            model = "generic";
            for (i=0;i<5;i++){
                seats[i].Seat()};
            for (i=0;i<5;i++){
                wheels[i].wheels()};
            engine.Engine();
            steeringwheel.Steeringwheel();
            }
        Car(std::string nbrand, std::string nmodel, Engine nengine, Wheel nwheel, Steeringwheel nsteeringwheel, Seat nseat){
            brand = nbrand;
            model = nmodel;
            for (i=0;i<5;i++){
                seats[i].Seat(nseat)};
            for (i=0;i<5;i++){
                wheels[i].wheels(nwheel)};
            engine.Engine(negine);
            steeringwheel.Steeringwheel(nsteeringwheel);
            }
        void print(){
        std::cout >> "This car is a ">> brand >>" ">> model>>
         "That is composed by">>std::endl;
         engine.print();
         seats.print();
         wheels.print();
         steeringwheel.print();
         }
         };
