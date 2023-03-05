#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 1.0, 1.0);
    glPointSize(0.5);
    glColor3f(1.0,0.0,0.0);

     glBegin(GL_QUADS);
     //-----------Background---------
     //sky
     glColor3f (0.6 ,0.6, 1.0);//blue
     glVertex3f (0.0f, 0.4f, 0.0f);
     glVertex3f (0.0f, 2.0f, 0.0f);
     glVertex3f (2.0f, 2.0f, 0.0f);
     glVertex3f (2.0f, 0.4f, 0.0f);

     //grass
     glColor3f (0.0,0.7, 0.0);//green
     glVertex3f (0.0f, 0.0f, 0.0f);
     glVertex3f (0.0f, 0.4f, 0.0f);
     glVertex3f (2.0f, 0.4f, 0.0f);
     glVertex3f (2.0f, 0.0f, 0.0f);


     //building
     glColor3f(0.3,0.3,0.3);
     glVertex3f (0.0f, 0.4f, 0.0f);
     glVertex3f (0.45f, 0.4f, 0.0f);
     glVertex3f (0.45f, 1.67f, 0.0f);
     glVertex3f (0.0f, 1.67f, 0.0f);

     glColor3f(0.9,0.9,0.9);
     glVertex3f (0.150f, 0.4f, 0.0f);
     glVertex3f (0.60f, 0.4f, 0.0f);
     glVertex3f (0.60f, 1.30f, 0.0f);
     glVertex3f (0.150f, 1.30f, 0.0f);

     //windows1
     glColor3f(0.0,0.0,0.0);
     glVertex3f (0.20f, 1.03f, 0.0f);
     glVertex3f (0.20f, 1.20f, 0.0f);
     glVertex3f (0.55f, 1.20f, 0.0f);
     glVertex3f (0.55f, 1.03f, 0.0f);

     glColor3f(1.0,0.9,0.0);
     glVertex3f (0.21f, 1.04f, 0.0f);
     glVertex3f (0.21f, 1.19f, 0.0f);
     glVertex3f (0.54f, 1.19f, 0.0f);
     glVertex3f (0.54f, 1.04f, 0.0f);

     //windows2
     glColor3f(0.0,0.0,0.0);
     glVertex3f (0.20f, 0.77f, 0.0f);
     glVertex3f (0.20f, 0.95f, 0.0f);
     glVertex3f (0.55f, 0.95f, 0.0f);
     glVertex3f (0.55f, 0.77f, 0.0f);

     glColor3f(1.0,0.9,0.0);
     glVertex3f (0.21f, 0.78f, 0.0f);
     glVertex3f (0.21f, 0.94f, 0.0f);
     glVertex3f (0.54f, 0.94f, 0.0f);
     glVertex3f (0.54f, 0.78f, 0.0f);



//-----------------tin man------------------------
    //body
    glColor3f(.8,.8,.8);//light gray
    glVertex3f (1.2f, 0.89f, 0.0f);
    glVertex3f (1.5f, 0.89f, 0.0f);
    glVertex3f (1.5f, 0.3f, 0.0f);
    glVertex3f (1.2f, 0.3f, 0.0f);

     //head
    glVertex3f (1.25f, 1.1f, 0.0f);
    glVertex3f (1.45f, 1.1f, 0.0f);
    glVertex3f (1.45f, 0.91f, 0.0f);
    glVertex3f (1.25f, 0.91f, 0.0f);

    //neck
    glColor3f(.6,.6,.6);
    glVertex3f (1.28f, 0.91f, 0.0f);
    glVertex3f (1.42f, 0.91f, 0.0f);
    glVertex3f (1.42f, 0.89f, 0.0f);
    glVertex3f (1.28f, 0.89f, 0.0f);

    //cap part
    glColor3f(.7,.7,0.0);
    glVertex3f (1.338f, 1.4f, 0.0f);
    glVertex3f (1.367f, 1.4f, 0.0f);
    glVertex3f (1.367f, 1.2f, 0.0f);
    glVertex3f (1.338f, 1.2f, 0.0f);

    //left leg
     glColor3f(.7,.7,.7);
    glVertex3f (1.24f, 0.3f, 0.0f);
    glVertex3f (1.35f, 0.3f, 0.0f);
    glVertex3f (1.31f, 0.1f, 0.0f);
    glVertex3f (1.26f, 0.1f, 0.0f);

    //right leg
    glVertex3f (1.35f, 0.3f, 0.0f);
    glVertex3f (1.46f, 0.3f, 0.0f);
    glVertex3f (1.43f, 0.1f, 0.0f);
    glVertex3f (1.38f, 0.1f, 0.0f);

     //hand left anti clock
    glColor3f(.75,.75,.75);
    glVertex3f (0.96f, 0.43f, 0.0f);
    glVertex3f (1.2f, 0.66f, 0.0f);
    glVertex3f (1.2f, 0.85f, 0.0f);
    glVertex3f (0.98f, 0.51f, 0.0f);

    //right hand
    glColor3f(.75,.75,.75);
    glVertex3f (1.5f, 0.85f, 0.0f);
    glVertex3f (1.5f, 0.60f, 0.0f);
    glVertex3f (1.56f, 0.37f, 0.0f);
    glVertex3f (1.61f, 0.37f, 0.0f);

    glEnd();





    glBegin(GL_TRIANGLES);
    //-----------------tin man------------------------

     glColor3f(1,1,1);//eye, mouth color
    //eye
          //left
             glVertex3f (1.3f, 1.0525f, 0.0f);
             glVertex3f (1.32f, 1.009f, 0.0f);
             glVertex3f (1.28f, 1.009f, 0.0f);

          //right
             glVertex3f (1.4f, 1.0525f, 0.0f);
             glVertex3f (1.38f, 1.009f, 0.0f);
             glVertex3f (1.42f, 1.009f, 0.0f);

    //mouth
    glVertex3f (1.35f, 0.93f, 0.0f);
    glVertex3f (1.39f, 0.98f, 0.0f);
    glVertex3f (1.31f, 0.98f, 0.0f);

     glColor3f(.7,.7,.7);//foot ,cap color
     //foot
         //left
             glVertex3f (1.405f, 0.2f, 0.0f);
             glVertex3f (1.45f, 0.05f, 0.0f);
             glVertex3f (1.36f, 0.05f, 0.0f);

        //right
             glVertex3f (1.285f, 0.2f, 0.0f);
             glVertex3f (1.32f, 0.05f, 0.0f);
             glVertex3f (1.24f, 0.05f, 0.0f);

    //cap
    glColor3f(.7,.7,0.0);
    glVertex3f (1.21f, 1.1f, 0.0f);
    glVertex3f (1.49f, 1.1f, 0.0f);
    glVertex3f (1.35f, 1.3f, 0.0f);

    glEnd();



    glBegin(GL_QUADS);
//--------------------dog-----------------------
    //body
    glColor3f (1.0, 0.6, 0.0);//orange
    glVertex3f (0.3f, 0.3f, 0.0f);
    glVertex3f (0.3f, 0.6f, 0.0f);
    glVertex3f (0.65f, 0.6f, 0.0f);
    glVertex3f (0.65f, 0.3f, 0.0f);

    //belt
    glColor3f (0.2, 0.1, 0.3);
    glVertex3f (0.51f, 0.6f, 0.0f);
    glVertex3f (0.65f, 0.6f, 0.0f);
    glVertex3f (0.65f, 0.63f, 0.0f);
    glVertex3f (0.51f, 0.63f, 0.0f);

    //head
    glColor3f (1.0, 0.6, 0.0);
    glVertex3f (0.51f, 0.63f, 0.0f);
    glVertex3f (0.65f, 0.63f, 0.0f);
    glVertex3f (0.65f, 0.8f, 0.0f);
    glVertex3f (0.51f, 0.8f, 0.0f);

    //left eye
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f (0.53f, 0.72f, 0.0f);
    glVertex3f (0.56f, 0.72f, 0.0f);
    glVertex3f (0.56f, 0.75f, 0.0f);
    glVertex3f (0.53f, 0.75f, 0.0f);

    //right eye
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f (0.60f, 0.72f, 0.0f);
    glVertex3f (0.63f, 0.72f, 0.0f);
    glVertex3f (0.63f, 0.75f, 0.0f);
    glVertex3f (0.60f, 0.75f, 0.0f);

    //nose
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f (0.58f, 0.68f, 0.0f);
    glVertex3f (0.59f, 0.68f, 0.0f);
    glVertex3f (0.60f, 0.70f, 0.0f);
    glVertex3f (0.57f, 0.70f, 0.0f);

    glColor3f (0.0, 0.0, 0.0);
    glVertex3f (0.583f, 0.68f, 0.0f);
    glVertex3f (0.587f, 0.68f, 0.0f);
    glVertex3f (0.587f, 0.65f, 0.0f);
    glVertex3f (0.583f, 0.65f, 0.0f);

//legs

     //left 1st
    glColor3f (0.8, 0.4, 0.0);
    glVertex3f (0.30f, 0.1f, 0.0f);
    glVertex3f (0.32f, 0.3f, 0.0f);
    glVertex3f (0.36f, 0.3f, 0.0f);
    glVertex3f (0.33f, 0.1f, 0.0f);

   //left 2nd
    glColor3f (0.8, 0.3, 0.0);
    glVertex3f (0.37f, 0.3f, 0.0f);
    glVertex3f (0.41f, 0.3f, 0.0f);
    glVertex3f (0.44f, 0.115f, 0.0f);
    glVertex3f (0.41f, 0.115f, 0.0f);

    //right 1st

    glVertex3f (0.60f, 0.3f, 0.0f);
    glVertex3f (0.64f, 0.3f, 0.0f);
    glVertex3f (0.66f, 0.115f, 0.0f);
    glVertex3f (0.64f, 0.115f, 0.0f);

    //right 2nd
    glColor3f (0.8, 0.4, 0.0);
     //glColor3f (0.2, 0.1, 0.3);
    glVertex3f (0.53f, 0.3f, 0.0f);
    glVertex3f (0.57f, 0.3f, 0.0f);
    glVertex3f (0.60f, 0.1f, 0.0f);
    glVertex3f (0.57f, 0.1f, 0.0f);

    glEnd();


    glBegin(GL_TRIANGLES);
    //---------------ears-----------------------
    // glColor3f (1.0, 0.1, 0.0);
    glColor3f (0.8, 0.2, 0.0);
    glVertex3f (0.65f, 0.8f, 0.0f);
    glVertex3f (0.69f, 0.81f, 0.0f);
    glVertex3f (0.70f, 0.69f, 0.0f);

    glBegin(GL_TRIANGLES);
    glColor3f (0.8, 0.2, 0.0);
    glVertex3f (0.51f, 0.8f, 0.0f);
    glVertex3f (0.47f, 0.81f, 0.0f);
    glVertex3f (0.46f, 0.69f, 0.0f);

    //tail
    glColor3f (0.8, 0.2, 0.0);
    glVertex3f (0.3f, 0.6f, 0.0f);
    glVertex3f (0.25f, 0.57f, 0.0f);
    glVertex3f (0.18f, 0.69f, 0.0f);

    glEnd();


    glFlush();
}

void init(void)
{
    glClearColor (1.0, 1.0,1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 2.0, 0.0, 2.0, -2.0, 2.0);
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1200, 720);//THE SIZE OF THE RUNNED SHAPE WINDOW SIZE
    glutInitWindowPosition (0,3);//POSITION WHERE THE GLUT SHAPE WILL OPEN HERE(X,Y) Y IS VERTICAL UP DOWN
    glutCreateWindow ("tin_Man_And_His_Dog");// NAME OF THE WINDOW
    init ();//FUNCTION OF GL COLOR, MATRIX
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;

}
