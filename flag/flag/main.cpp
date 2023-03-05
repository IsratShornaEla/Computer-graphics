#include <GL/gl.h>
#include <GL/glut.h>
void drawShape(void)
{
    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    *	(0.25, 0.25, 0.0) and (0.75, 0.75, 0.0) */
    glColor3f (1.0, 1.0, 1.0);//COLOR(RED,GREEN,BLUE)

//house
    glBegin(GL_POLYGON);
    glColor3f (0.7, 0.9, 0.0);
    glVertex3f (0.60f, 0.02f, 0.0f);
    glVertex3f (0.60f, 0.5f, 0.0f);
    glVertex3f (0.97f, 0.5f, 0.0f);
    glVertex3f (0.97f, 0.02f, 0.0f);
    glEnd();//body



    glBegin(GL_TRIANGLES);
    glColor3f (0.9, 0.2, 0.0);
    glVertex3f (0.60f, 0.5f, 0.0f);
    glVertex3f (0.78f, 0.7f, 0.0f);
    glVertex3f (0.97f, 0.5f, 0.0f);
    glEnd();//roof


     glBegin(GL_POLYGON);
    glColor3f (0.9, 0.2, 0.0);
    glVertex3f (0.72f, 0.02f, 0.0f);
    glVertex3f (0.72f, 0.350f, 0.0f);
    glVertex3f (0.87f, 0.350f, 0.0f);
    glVertex3f (0.87f, 0.02f, 0.0f);
    glEnd();//door


    glBegin(GL_QUADS);
    glColor3f (0.3, 0.2, 0.0);
    glVertex3f (0.0f, 0.0f, 0.0f);
    glVertex3f (0.0f, 0.03f, 0.0f);
    glVertex3f (1.0f, 0.03f, 0.0f);
    glVertex3f (1.0f, 0.00f, 0.0f);
    glEnd();//flag stand

    glBegin(GL_QUADS);
    glColor3f (0.8, 0.2, 0.0);
    glVertex3f (0.15f, 0.03f, 0.0f);
    glVertex3f (0.15f, 0.92f, 0.0f);
    glVertex3f (0.17f, 0.92f, 0.0f);
    glVertex3f (0.17f, 0.03f, 0.0f);
    glEnd();//flag

     glBegin(GL_POLYGON);
     glColor3f (0.0, 0.8, 0.2);
     glVertex3f (0.17f, 0.6f, 0.0f);
     glVertex3f (0.17f, 0.88f, 0.0f);
     glVertex3f (0.47f, 0.88f, 0.0f);
     glVertex3f (0.47f, 0.6f, 0.0f);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f (0.7, 0.0, 0.2);
     glVertex3f (0.27f, 0.68f, 0.0f);
     glVertex3f (0.27f, 0.80f, 0.0f);
     glVertex3f (0.37f, 0.80f, 0.0f);
     glVertex3f (0.37f, 0.68f, 0.0f);
     glEnd();//rec in flag




    /* don't wait!
    *	start processing buffered OpenGL routines */
    glFlush();
}
void init (void)
{
    /* select clearing (background) color */
    glClearColor (1.0, 1.0, 1.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
/*
*	Declare initial window size, position, and display mode
*	(single buffer & RGBA). Open window with "hello"
*	In its title bar. Call initialization routines.
*	Register callback function to display graphics.
*	Enter main loop and process events.
*/
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (20,20);
    glutCreateWindow ("Flag");
    init ();
    glutDisplayFunc(drawShape);
    glutMainLoop();
    return 0;

}
