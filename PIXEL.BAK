// Borland C++ - (C) Copyright 1991 by Borland International

/* PIXEL.CPP--Example from Getting Started */

// PIXEL.CPP demonstrates the Point and Location classes
// compile with POINT2.CPP and link with GRAPHICS.LIB

#include <graphics.h>   // declarations for graphics library
#include <conio.h>      // for getch() function
// Borland C++ - (C) Copyright 1991 by Borland International

/* point.h--Example from Getting Started */

// point.h contains two classes:
// class Location describes screen locations in X and Y coordinates
// class Point describes whether a point is hidden or visible

enum Boolean {false, true};

class Location {
protected:          // allows derived class to access private data
   int X;
   int Y;

public:             // these functions can be accessed from outside
   Location(int InitX, int InitY);
   int GetX();
   int GetY();
};
class Point : public Location {      // derived from class Location
// public derivation means that X and Y are protected within Point

protected:
   Boolean Visible;  // classes derived from Point will need access    

public:
   Point(int InitX, int InitY);      // constructor
   void Show();
   void Hide();
   Boolean IsVisible();
   void MoveTo(int NewX, int NewY);
};     // declarations for Point and Location classes

int main()
{
   // initialize the graphics system
   int graphdriver = DETECT, graphmode;
   initgraph(&graphdriver, &graphmode, "..\\bgi");

   // move a point across the screen
   Point APoint(100, 50);   // Initial X, Y at 100, 50
   APoint.Show();           // APoint turns itself on
   getch();                 // Wait for keypress
   APoint.MoveTo(300, 150); // APoint moves to 300,150
   getch();                 // Wait for keypress
   APoint.Hide();           // APoint turns itself off
   getch();                 // Wait for keypress
   closegraph();            // Restore original screen
   return 0;
}
