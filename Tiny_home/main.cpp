/*
Name : Hasna Hena Shimu
ID : 181-15-10682
*/
#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;



void myInit ()
{

    //glClearColor(0.0, 1.0, 0.0, 0.0);
    //glClearColor(184.0f/255.0f, 213.0f/255.0f, 238.0f/255.0f, 1.0f);
    //glColor3f(0.0, 0.2, 0.0);
    glClearColor(0, 0, 0, 1.0f);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glEnable( GL_POINT_SMOOTH );

    // setting window dimension in X- and Y- direction
    glOrtho(0, 600, 0, 600, -10.0, 10.0);

}

void display ()
{

    glClear(GL_COLOR_BUFFER_BIT);

    // under base

    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,204.0f/255.0f,153.0f/255.0f);
    glVertex2f( 130, 130 );
    glVertex2f( 120, 120 );
    glVertex2f( 480, 120);
    glVertex2f( 470, 130);
    glEnd();

    // middle base

    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,153.0f/255.0f,51.0f/255.0f);
    glVertex2f( 130, 150 );
    glVertex2f( 130, 130 );
    glVertex2f( 470, 130);
    glVertex2f( 470, 150);
    glEnd();

    // frame box

    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,255.0f/255.0f,204.0f/255.0f);
    glVertex2f( 160, 240 );
    glVertex2f( 160, 150 );
    glVertex2f( 440, 150 );
    glVertex2f( 440, 240);
    glEnd();

    // bim left

    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,128.0f/255.0f,0.0f/255.0f);
    glVertex2f( 150, 190 );
    glVertex2f( 150, 150 );
    glVertex2f( 180, 150 );
    glVertex2f( 180, 190);
    glEnd();


    // bim right

    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,128.0f/255.0f,0.0f/255.0f);
    glVertex2f( 420, 190 );
    glVertex2f( 420, 150 );
    glVertex2f( 450, 150 );
    glVertex2f( 450, 190);
    glEnd();


    // column left

    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,102.0f/255.0f,102.0f/255.0f);
    glVertex2f( 160, 240 );
    glVertex2f( 160, 190 );
    glVertex2f( 170, 190 );
    glVertex2f( 170, 240);
    glEnd();

    // column right

    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,102.0f/255.0f,102.0f/255.0f);
    glVertex2f( 430, 240 );
    glVertex2f( 430, 190 );
    glVertex2f( 440, 190 );
    glVertex2f( 440, 240);
    glEnd();

    // big inner roof

    glBegin(GL_QUADS);
    glColor3f(102.0f/255.0f,178.0f/255.0f,255.0f/255.0f);
    glVertex2f( 200, 270 );
    glVertex2f( 150, 240 );
    glVertex2f( 450, 240 );
    glVertex2f( 400, 270);
    glEnd();

    // inner frame box of ruf

    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,255.0f/255.0f,204.0f/255.0f);
    glVertex2f( 200, 300 );
    glVertex2f( 200, 270 );
    glVertex2f( 400, 270 );
    glVertex2f( 400, 300);
    glEnd();

    // final ruff top

    glBegin(GL_QUADS);
    glColor3f(102.0f/255.0f,102.0f/255.0f,250.0f/255.0f);
    glVertex2f( 250, 350 );
    glVertex2f( 180, 300 );
    glVertex2f( 420, 300 );
    glVertex2f( 350, 350 );
    glEnd();

    // semi roof top 1

    glBegin(GL_QUADS);
    glColor3f(178.0f/255.0f,102.0f/255.0f,250.0f/255.0f);
    glVertex2f( 300, 350 );
    glVertex2f( 250, 300 );
    glVertex2f( 260, 290 );
    glVertex2f( 300, 330 );
    glEnd();

    // semi roof top 2

    glBegin(GL_QUADS);
    glColor3f(178.0f/255.0f,102.0f/255.0f,250.0f/255.0f);
    glVertex2f( 300, 350 );
    glVertex2f( 300, 330 );
    glVertex2f( 340, 290 );
    glVertex2f( 350, 300 );
    glEnd();

    // roof inner triangle
    glBegin(GL_TRIANGLES);
    glColor3f(255.0f/255.0f,102.0f/255.0f,250.0f/255.0f);
    glVertex2f( 300, 330 );
    glVertex2f( 270, 300 );
    glVertex2f( 330, 300);
    glEnd();

    // inner frame box 3

    glBegin(GL_QUADS);
    glColor3f(0.0f/255.0f,51.0f/255.0f,102.0f/255.0f);
    glVertex2f( 270, 300 );
    glVertex2f( 270, 260 );
    glVertex2f( 330, 260 );
    glVertex2f( 330, 300 );
    glEnd();

    // inroom widndow left

    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,200.0f/255.0f,200.0f/255.0f);
    glVertex2f( 200, 210 );
    glVertex2f( 200, 160 );
    glVertex2f( 240, 160 );
    glVertex2f( 240, 210 );
    glEnd();

    // inroom widndow left (palla left)

    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,150.0f/255.0f,150.0f/255.0f);
    glVertex2f( 200, 210 );
    glVertex2f( 200, 160 );
    glVertex2f( 210, 170 );
    glVertex2f( 210, 200 );
    glEnd();

    // inroom widndow left (palla right)
    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,150.0f/255.0f,150.0f/255.0f);
    glVertex2f( 230, 200 );
    glVertex2f( 230, 170 );
    glVertex2f( 240, 160 );
    glVertex2f( 240, 210 );
    glEnd();



    // inroom widndow right

    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,200.0f/255.0f,200.0f/255.0f);
    glVertex2f( 360, 210 );
    glVertex2f( 360, 160 );
    glVertex2f( 400, 160 );
    glVertex2f( 400, 210 );
    glEnd();

    // inroom widndow ritht (palla left)

    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,150.0f/255.0f,150.0f/255.0f);
    glVertex2f( 360, 210 );
    glVertex2f( 360, 160 );
    glVertex2f( 370, 170 );
    glVertex2f( 370, 200 );
    glEnd();

    // inroom widndow ritht (palla right)

    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,150.0f/255.0f,150.0f/255.0f);
    glVertex2f( 390, 200 );
    glVertex2f( 390, 170 );
    glVertex2f( 400, 160 );
    glVertex2f( 400, 210 );
    glEnd();

    // big door

    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,200.0f/255.0f,200.0f/255.0f);
    glVertex2f( 280, 210 );
    glVertex2f( 280, 150 );
    glVertex2f( 320, 150 );
    glVertex2f( 320, 210 );
    glEnd();

    // door palla left
    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,150.0f/255.0f,150.0f/255.0f);
    glVertex2f( 280, 210 );
    glVertex2f( 280, 150 );
    glVertex2f( 290, 160 );
    glVertex2f( 290, 200 );
    glEnd();

    // door palla right
    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,150.0f/255.0f,150.0f/255.0f);
    glVertex2f( 310, 200 );
    glVertex2f( 310, 160 );
    glVertex2f( 320, 150 );
    glVertex2f( 320, 210 );
    glEnd();

    // roof top left window step 1
    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,128.0f/255.0f,0.0f/255.0f);
    glVertex2f( 220, 300 );
    glVertex2f( 220, 290 );
    glVertex2f( 240, 290 );
    glVertex2f(240, 300 );
    glEnd();
    // roof top left window step 2
    glBegin(GL_QUADS);
    glColor3f(128.0f/255.0f,255.0f/255.0f,0.0f/255.0f);
    glVertex2f( 220, 290 );
    glVertex2f( 220, 280 );
    glVertex2f( 240, 280 );
    glVertex2f( 240, 290 );
    glEnd();
    // roof top left window step 3
    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,128.0f/255.0f,0.0f/255.0f);
    glVertex2f( 220, 280 );
    glVertex2f( 220, 270 );
    glVertex2f( 240, 270 );
    glVertex2f( 240, 280 );
    glEnd();

    // ----

    // roof top right window step 1
    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,128.0f/255.0f,0.0f/255.0f);
    glVertex2f( 360, 300 );
    glVertex2f( 360, 290 );
    glVertex2f( 380, 290 );
    glVertex2f( 380, 300 );
    glEnd();
    // roof top right window step 2
    glBegin(GL_QUADS);
    glColor3f(128.0f/255.0f,255.0f/255.0f,0.0f/255.0f);
    glVertex2f( 360, 290 );
    glVertex2f( 360, 280 );
    glVertex2f( 380, 280 );
    glVertex2f( 380, 290 );
    glEnd();
    // roof top right  window step 3
    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,128.0f/255.0f,0.0f/255.0f);
    glVertex2f( 360, 280 );
    glVertex2f( 360, 270 );
    glVertex2f( 380, 270 );
    glVertex2f( 380, 280 );
    glEnd();

    // center window step 1 up
    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,255.0f/255.0f,0.0f/255.0f);
    glVertex2f( 280, 290 );
    glVertex2f( 280, 280 );
    glVertex2f( 300, 280 );
    glVertex2f( 300, 290 );
    glEnd();

    // down
    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,128.0f/255.0f,0.0f/255.0f);
    glVertex2f( 280, 280 );
    glVertex2f( 280, 270 );
    glVertex2f( 300, 270 );
    glVertex2f( 300, 280 );
    glEnd();

    // center window step 2 up
    glBegin(GL_QUADS);
    glColor3f(255.0f/255.0f,255.0f/255.0f,255.0f/255.0f);
    glVertex2f( 300, 290 );
    glVertex2f( 300, 280 );
    glVertex2f( 320, 280 );
    glVertex2f( 320, 290 );
    glEnd();

    // down
    glBegin(GL_QUADS);
    glColor3f(128.0f/255.0f,255.0f/255.0f,0.0f/255.0f);
    glVertex2f( 300, 280 );
    glVertex2f( 300, 270 );
    glVertex2f( 320, 270 );
    glVertex2f( 320, 280 );
    glEnd();





    glFlush();
}

int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // giving window size in X- and Y- direction
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 0);

    // Giving name to window
    glutCreateWindow("Hasna hena shimu_tinyhome assignment1 (ID:10682)");
    myInit();

    glutDisplayFunc(display);
    //glutTimerFunc(25, update, 0);

    glutMainLoop();
}
