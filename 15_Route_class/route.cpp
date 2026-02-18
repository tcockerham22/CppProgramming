#include <iostream>
#include <string>
#include <cstdlib> // rand function

// Create Route structure (source, destination)
class Route{
private:
    std::string source;
    std::string destination;
    int length;

    // Private method
    void updateLength(){
        length = (source.empty() || destination.empty()) ? 0 : rand() % 900 + 50;
    }

public:

    // Constructors must be public, have the same name as the class
    // Constructors have no return type (not even void)

    // Route(){ // No argument constructor
    //     length = 0;
    // }

    // No argument constructor (second version)
    Route() : source("-"), destination("-"), length(0){}

    // Constructor with arguments
    Route(const std::string& s, const std::string& d){
        setSource(s);
        setDestination(d);
    }

    // Create a method of the structure
    void print(){
        std::cout << source << " -> " << destination;
        std::cout << ": " << length << std::endl;
    }

    // Get methods (accessor functions, getters)
    std::string getSource(){
        return source;
    }
    std::string getDestination(){
        return destination;
    }
    int getLength(){
        return length;
    }

    // Set functions (setters, mutator functions)
    void setSource(const std::string& new_source){
        source = new_source;
        updateLength();
    }
    void setDestination(const std::string& new_destintion){
        destination = new_destintion;
        updateLength();
    }

};


int main(void){
    // Set the seed
    srand(time(0));

    //Create an object of Route structure
    Route spring_trip;
    spring_trip.print();

    spring_trip.setSource("Lakeland");
    spring_trip.setDestination("Honolulu");
    spring_trip.print();


    //....
    
    spring_trip.setDestination("New York");
    
    //Call structure method
    spring_trip.print();

    // Create second Route object
    Route summer_vacation("Lakeland", "Tokyo");
    summer_vacation.print();

    return 0;
}