#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//code to check the given sides form pythagorean triplet or not

int main()

{
     int side1,side2,side3;
     cin >> side1 >> side2 >> side3;
     int lenght,breadth;

     // calculating the maximum of three sides this will give hypotenuse

     int hypotenuse = max(side1,max(side2 ,side3)); 

     // assigning the other sides as length and breadth

     if (hypotenuse==side1)
    {
        lenght  =  side2;
        breadth =  side3;
    }

     else if (hypotenuse== side2)
    {
        lenght  = side1;
        breadth = side3;
    }

     else
    {
        lenght  = side1;
        breadth = side2;
    }

     // checking it satisfy the pythagorous theorem

     if (hypotenuse*hypotenuse == lenght*lenght + breadth*breadth)

     cout<<"true";

     else

     cout<<"false";
    
}