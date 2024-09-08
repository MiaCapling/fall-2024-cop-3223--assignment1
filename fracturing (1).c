// *********************************************************
// fracturing.c
// Author: Mia Capling  mi255002
// Date: 9/7/24
// Class: COP 3223, Professor Parra
// Purpose: to find the Distance, Perimeter, Area, Width,
//          and Height of two points. 
// Input: ask the user for x1, y1, x2, y2 points
// Output: returns; Distance, Perimeter, Area, Width, and 
//         Height. as they relate to the two points. 
// *********************************************************


#include <math.h>
#include <stdio.h>
#define pi 3.14159

// *********************************************************
// void askForUserInput(double *x1, double *y1, double *x2, double *y2){
//
// Purpose: is to ask the user x1, y1, x2, and y2. and restate them.   
// Output: prints user input in terminal
// Precondition: that x1, y1, x2, and y2 exist
// Postcondition: n/a
// *********************************************************
void askForUserInput(double *x1, double *y1, double *x2, double *y2){
   
    printf("What is your point #1 X? ");
    scanf("%lf", x1);
    printf("What is your point #1 Y? ");
    scanf("%lf", y1);
    printf("What is your point #2 X? ");
    scanf("%lf", x2);
    printf("What is your point #2 Y? ");
    scanf("%lf", y2);

    printf("Point #1 entered: x1= %.3lf; y1= %.3lf\n", *x1, *y1);
    printf("Point #2 entered: x2= %.3lf; y2= %.3lf\n", *x2, *y2);

}

// *********************************************************
// double calculateDistance
//
// Purpose: to calculate the ditance between the two points
//          that were inputted   
// Output: prints the distance between two points
// Precondition: askforuserinput is defined and called
// Postcondition: is to calculate distance for other functions
// *********************************************************
double calculateDistance(){
// initializing variables    
    double x1;
    double y1;
    double x2;
    double y2;
    
    askForUserInput(&x1, &y1, &x2, &y2); // running the askForUserInput function

    double distanceXY = sqrt(pow( x2 - x1, 2) + pow( y2 - y1, 2)); // calculating distance between points
    
    printf("The Distance between the two points is %.3lf\n", distanceXY);

    return distanceXY; // returning the value found for distance 

}

// *********************************************************
// double calculatePerimeter
//
// Purpose: to calculate perimeter between points inputted 
// Output: states the perimeter between points
// Precondition: that calculateDistance is defined and called
// Postcondition: n/a
// *********************************************************
double calculatePerimeter(){
// initializing variables
    double x1;
    double y1;
    double x2;
    double y2;

    double perimeter = calculateDistance()*pi; // calculating perimeter

    printf("The Perimeter of the city encompassed by your request is %.3lf\n", perimeter);

    return 3.1; // returning how difficult i found it to write formula 

}

// *********************************************************
// double calculateArea
//
// Purpose: to calculate the are between the two points inputted  
// Output: states the area between the points
// Precondition: that calculateDistance is defined and called
// Postcondition: n/a
// *********************************************************
double calculateArea(){
// initializing variables
    double x1;
    double y1;
    double x2;
    double y2;
     
    double area = pi * pow((calculateDistance()/2), 2); // calculating area 

    printf("The Area of the city encompassed by your request is %.3lf\n", area);

    return 3.1; // returning how difficult i found it to write formula 

}

// *********************************************************
// double calculateWidth
//
// Purpose: to "calculate" width between two inputted points
// Output: states the width of the city in circle
// Precondition: that calculateDistance is defined and called
// Postcondition: n/a
// *********************************************************
double calculateWidth(){
// initializing variables
    double x1;
    double y1;
    double x2;
    double y2;

    double width = calculateDistance(); // using distance as width because circle means same

    printf("The Width of the city encompassed by your request is %.3lf\n", width);

    return 1.1; // returning how difficult i found it to write formula 
}

// *********************************************************
// double calculateHeight
//
// Purpose: to "calculate" height between two inputted points
// Output: states the height of the city in circle
// Precondition: that calculateDistance is defined and called
// Postcondition: n/a
// *********************************************************
double calculateHeight(){
// initializing variables
    double x1;
    double y1;
    double x2;
    double y2;

    double height = calculateDistance(); // using distance as height because circle means same

    printf("The Height of the city encompassed by your request is %.3lf\n", height);

    return 1.1; // returning how difficult i found it to write formula 
}

// *********************************************************
// int main(int argc,char **argv)
//
// Purpose: to call other functions   
// Output: n/a
// Precondition: that functions called exist
// Postcondition: n/a
// *********************************************************
int main(int argc,char **argv){
    
// calling all functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}