#include <iostream>
#include <string>

using namespace std;

int main() {
    string term;
    
    cout << "HOLA! Enter an ENGINEERING TERM: ";
    cin >> term;
    
    if (term == "Algorithm") {
        cout << "A step-by-step procedure for solving a problem or performing a task" << endl;
    } else if (term == "Array") {
        cout << "A collection of items stored at contiguous memory locations" << endl;
    } else if (term == "Boolean") {
        cout << "A data type that can hold true or false values" << endl;
    } else if (term == "Class") {
        cout << "A blueprint for creating objects in object-oriented programming" << endl;
    } else if (term == "Compiler") {
        cout << "A program that translates source code into machine code" << endl;
    } else if (term == "Debugging") {
        cout << "The process of identifying and removing errors from code" << endl;
    } else if (term == "Encapsulation") {
        cout << "Bundling data and methods that operate on the data within one unit" << endl;
    } else if (term == "Function") {
        cout << "A block of code designed to perform a specific task" << endl;
    } else if (term == "Inheritance") {
        cout << "A mechanism where a new class derives properties from an existing class" << endl;
    } else if (term == "Interface"){
    	cout << "A shared boundary across which two or more separate components exchange information" << endl;
    } else if (term == "WIND LOAD") {
        cout << "The force of the wind on a site" << endl;
    } else if (term == "Library") {
        cout << "A collection of precompiled routines that a program can use" << endl;
    } else if (term == "Loop") {
        cout << "A sequence of instructions that repeats until a certain condition is met" << endl;
    } else if (term == "Method") {
        cout << "A function associated with an object in object-oriented programming" << endl;
    } else if (term == "Object") {
        cout << "An instance of a class containing data and methods" << endl;
    } else if (term == "Parameter") {
        cout << "A variable used to pass information into a function" << endl;
    } else if (term == "Recursion") {
        cout << "A method where the solution to a problem depends on solutions to smaller instances of the same problem" << endl;
    } else if (term == "Syntax") {
        cout << "The set of rules that defines the combinations of symbols in a programming language" << endl;
    } else if (term == "Variable") {
        cout << "A storage location identified by a name that can hold data" << endl;
    } else if (term == "Framework") {
        cout << "A platform for developing software applications with predefined structures" << endl;
    } else if (term == "Source Code") {
        cout << "The human-readable instructions written in a programming language" << endl;
    } else if (term == "Thread") {
        cout << "A sequence of programmed instructions that can be managed independently by a scheduler" << endl;
    } else if (term == "API") {
        cout << "A set of rules that allows different software" << endl;
    } else if (term == "Reinforced Concrete") {
        cout << "A composite material that combines the compressive strength of concrete with the tensile strength of steel reinforcement (rebars), widely used in structures such as buildings, bridges, and highways." << endl;
    } else if (term == "Foundation") {
        cout << "The lowest load-bearing part of a structure that transmits and distributes the building loads to the underlying soil or rock, ensuring stability and preventing settlement" << endl;
    } else if (term == "Load-Bearing Wall") {
        cout << "A wall that supports not only its own weight but also additional loads from the roof, floors, and other structural elements, contributing to the overall stability of a building" << endl;
    } else if (term == "Structural Analysis") {
        cout << "The process of determining the effects of loads and forces on a structure’s components to ensure that it can safely withstand the applied loads without failure" << endl;
    } else if (term == "Shear Force") {
        cout << "An internal force within a structural element that causes adjacent sections to slide past one another, critical in assessing a structure's ability to resist deformation" << endl;
    } else if (term == "Bending Moment") {
        cout << "A measure of the bending effect produced by forces acting on a structural element, typically calculated as the product of force and the perpendicular distance from a specified point, essential for designing beams and columns" << endl;
    } else if (term == "Geotechnical Engineering") {
        cout << "A branch of civil engineering that focuses on the behavior of earth materials (soil and rock) and their interaction with man-made structures, including site investigations and foundation design" << endl;
    } else {
        cout << "Sorry, the term is not in the dictionary." << endl;
    }
    
    return 0;
}