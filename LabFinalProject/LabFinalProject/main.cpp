#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>

void init (void)
{
    glClearColor (0.980, 0.502, 0.447,0);//background pink
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 1350, 0, 700,0,500);
}

void drawShape(void)
{
    float theta1,theta2;
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 1.0, 1.0);



    ///-----------------------reflection of clouds-------------------------

    //=================1====================
    glBegin(GL_POLYGON);
    glColor3f (0.804, 0.361, 0.361);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1105+100*cos(theta1),161+110*sin(theta1));
        glVertex2f(1105+80*cos(theta1),161+80*sin(theta1));
    }
    glEnd();




    glBegin(GL_POLYGON);
    glColor3f (0.804, 0.361, 0.361);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1205+50*cos(theta1),135+50*sin(theta1));
        glVertex2f(1205+40*cos(theta1),135+40*sin(theta1));
    }
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f (0.804, 0.361, 0.361);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1280+50*cos(theta1),140+50*sin(theta1));
        glVertex2f(1280+40*cos(theta1),140+40*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.804, 0.361, 0.361);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1000+50*cos(theta1),157+50*sin(theta1));
        glVertex2f(1000+30*cos(theta1),157+30*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.804, 0.361, 0.361);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(930+40*cos(theta1),140+40*sin(theta1));
        glVertex2f(930+30*cos(theta1),140+30*sin(theta1));

    }
    glEnd();

    //=========================================


    //=================2=========================
    glBegin(GL_POLYGON);
    glColor3f (0.8, 0.361, 0.361);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1350+5*cos(theta1),50+5*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.804, 0.361, 0.361);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1330+30*cos(theta1),60*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.804, 0.361, 0.361);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1287+20*cos(theta1),30*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.804, 0.361, 0.361);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1255+15*cos(theta1),10*sin(theta1));
    }
    glEnd();
    //=================2=================
    ///---------------------------------------------------------



    ///=================SHADOW 1=====================

    glBegin(GL_POLYGON);
    glColor3f (0.941, 0.502, 0.502);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(336+153*cos(theta1),591+153*sin(theta1));
        glVertex2f(330+102*cos(theta1),580+102*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.941, 0.502, 0.502);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(490+123*cos(theta1),490+123*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.941, 0.502, 0.502);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(660+93*cos(theta1),420+93*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.941, 0.502, 0.502);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(850+173*cos(theta1),400+173*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.941, 0.502, 0.502);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1200+153*cos(theta1),480+153*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.941, 0.502, 0.502);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1350+123*cos(theta1),600+123*sin(theta1));
    }
    glEnd();
    ///===========================================



    ///=============1st Cloud layer============
    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.627, 0.478);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(336+150*cos(theta1),591+150*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.627, 0.478);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(490+120*cos(theta1),490+120*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.627, 0.478);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(660+90*cos(theta1),420+90*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.627, 0.478);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(850+170*cos(theta1),400+170*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.627, 0.478);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1200+150*cos(theta1),480+150*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.627, 0.478);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1350+120*cos(theta1),600+120*sin(theta1));
    }
    glEnd();
    ///============================================



    ///===================SHADOW 2====================
    glColor3f (0.941, 0.502, 0.502);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(180+103*cos(theta1),650+103*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(280+183*cos(theta1),430+183*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(500+103*cos(theta1),360+103*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(640+103*cos(theta1),260+103*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(840+153*cos(theta1),260+153*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1350+133*cos(theta1),480+183*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1200+123*cos(theta1),380+123*sin(theta1));
    }
    glEnd();
    ///===========================================




    ///=================2nd Cloud layer===============
    glBegin(GL_POLYGON);
    glColor3f (0.859, 0.439, 0.576);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(710+40*cos(theta1),190+50*sin(theta1));
        glVertex2f(710+20*cos(theta1),190+30*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.859, 0.439, 0.576);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(180+100*cos(theta1),650+100*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.859, 0.439, 0.576);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(280+180*cos(theta1),430+180*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.859, 0.439, 0.576);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(500+100*cos(theta1),360+100*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.859, 0.439, 0.576);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(640+100*cos(theta1),260+100*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.859, 0.439, 0.576);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(840+150*cos(theta1),260+150*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.859, 0.439, 0.576);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1350+130*cos(theta1),480+180*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.859, 0.439, 0.576);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1200+120*cos(theta1),380+120*sin(theta1));
    }
    glEnd();
    ///==========================================


    ///===============SHADOW 3==================
    glColor3f (0.941, 0.502, 0.502);

    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1250+83*cos(theta1),360+83*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1400+113*cos(theta1),420+113*sin(theta1));
    }
    glEnd();

    //sun
    glBegin(GL_POLYGON);
    glColor3f (1.000, 1.000, 0.878);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1030+153*cos(theta1),370+153*sin(theta1));
    }
    glEnd();

///=============================================



///===============3rd Cloud layer===============
    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.753, 0.796);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1250+80*cos(theta1),360+80*sin(theta1));
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.753, 0.796);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1400+110*cos(theta1),420+110*sin(theta1));
    }
    glEnd();


    ///-------------------SUN---------------------------------
    glBegin(GL_POLYGON);
    glColor3f (1.000, 1.000, 0.878);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1030+150*cos(theta1),370+150*sin(theta1));
    }
    glEnd();
    ///--------------------------------------------


    //==========After sun==============
    glBegin(GL_QUADS);
    glColor3f (	1.000, 1.000, 0.878);
    glVertex3f(0,206.667,0);
    glVertex3f(0,348.333,0);
    glVertex3f(1099.933,348.333,0);
    glVertex3f(868.119,206.667,0);

    glColor3f (1.000, 0.980, 0.804);
    glVertex3f(868.119,206.667,0);
    glVertex3f(1099.933,348.333,0);
    glVertex3f(1350,348.333,0);
    glVertex3f(1350,206.667,0);
    glEnd();
    //==================================


    ///===========1st Hill layer shadow===================
    //staring from right
    glColor3f (	1.000, 0.855, 0.725);

    glBegin(GL_POLYGON);
    glVertex3f(1030.933,  333,  0);
    glVertex3f(940,     403.336, 0);
    glVertex3f(900.933, 403.333, 0);
    glVertex3f(860.533, 457.333, 0);
    glVertex3f(826.533, 431.333, 0);
    glVertex3f(796.533, 433.333, 0);
    glVertex3f(780.533, 413.333, 0);
    glVertex3f(700.533, 343.333, 0);
    glVertex3f(684.533, 337.333, 0);
    glVertex3f(676.533, 333.333, 0);
    glVertex3f(680.533,   330,   0);
    glEnd();

    //staring from left
    glBegin(GL_POLYGON);;
    glVertex3f(980.933,  333,  0);
    glVertex3f(980.933,  363,  0);
    glVertex3f(1000.933, 385,  0);
    glVertex3f(1040.933, 393,  0);
    glVertex3f(1050.933, 397,  0);
    glVertex3f(1078.933, 378,  0);
    glVertex3f(1130.933, 383,  0);
    glVertex3f(1180.933, 403,  0);
    glVertex3f(1200.933, 397,  0);
    glVertex3f(1247.933, 413,  0);
    glVertex3f(1270.13, 410,  0);
    glVertex3f(1288.933, 403,  0);
    glVertex3f(1320,     373,  0);
    glVertex3f(1350,     333,  0);
    glVertex3f(1350,   333,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1050.933,  333,  0);
    glVertex3f(1174, 453,  0);
    glVertex3f(1300,   333,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(0.933,  331,  0);
    glVertex3f(100,  391,  0);
    glVertex3f(140,   351,   0);
    glVertex3f(240,   398,   0);
    glVertex3f(440,   341,   0);
    glVertex3f(680,   331,   0);
    glEnd();
    ///------------------------------------------------------



    ///============Hill layer 1==================
    //staring from right
    glBegin(GL_POLYGON);
    glColor3f (0.647, 0.165, 0.165);
    glVertex3f(1030.933,  330,  0);
    glVertex3f(940,     400.333, 0);
    glVertex3f(900.933, 400.333, 0);
    glVertex3f(860.533, 454.333, 0);
    glVertex3f(826.533, 428.333, 0);
    glVertex3f(796.533, 430.333, 0);
    glVertex3f(780.533, 410.333, 0);
    glVertex3f(700.533, 340.333, 0);
    glVertex3f(684.533, 337.333, 0);
    glVertex3f(676.533, 333.333, 0);
    glColor3f (1.000, 0.894, 0.710);
    glVertex3f(680.533,   330,   0);
    glEnd();

    //staring from left
    glBegin(GL_POLYGON);;
    glColor3f (0.647, 0.165, 0.165);
    glVertex3f(980.933,  330,  0);
    glVertex3f(980.933,  360,  0);
    glVertex3f(1000.933, 382,  0);
    glVertex3f(1040.933, 390,  0);
    glVertex3f(1050.933, 395,  0);
    glVertex3f(1078.933, 375,  0);
    glVertex3f(1130.933, 380,  0);
    glVertex3f(1180.933, 400,  0);
    glVertex3f(1200.933, 394,  0);
    glVertex3f(1247.933, 410,  0);
    glVertex3f(1270.13,  407,  0);
    glVertex3f(1288.933, 400,  0);
    glVertex3f(1350,     370,  0);
    glVertex3f(1350,     330,  0);
    glVertex3f(1350,     330,  0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.647, 0.165, 0.165);
    glVertex3f(1050.933,330,  0);
    glVertex3f(1174, 450,  0);
    glVertex3f(1300,  330,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.647, 0.165, 0.165);
    glVertex3f(0.933, 330,  0);
    glVertex3f(100,   390,  0);
    glVertex3f(140,   350,   0);
    glVertex3f(240,   397,   0);
    glVertex3f(440,   340,   0);
    glVertex3f(680,   330,   0);
    glEnd();

    ///=============================================




    ///========Hills 2nd layer shadow=====================

    glBegin(GL_POLYGON);//right
    glColor3f (0.698, 0.133, 0.133);
    glVertex3f( 810,  311,  0);
    glVertex3f( 701,  329,  0);
    glVertex3f( 657,  336,  0);
    glVertex3f( 640,  341,  0);
    glVertex3f( 638,  349,  0);
    glVertex3f( 636,  355,  0);
    glVertex3f( 580,  356,  0);
    glVertex3f( 570,  372,  0);
    glVertex3f( 530,  372,  0);
    glVertex3f( 510,  382,  0);
    glVertex3f( 510,  401,  0);
    glVertex3f( 490,  401,  0);
    glVertex3f( 470,  393,  0);
    glVertex3f( 450,  393,  0);
    glVertex3f( 440,  383,  0);
    glVertex3f( 423,  373,  0);
    glVertex3f( 410,  373,  0);
    glVertex3f( 385,  353,  0);
    glVertex3f( 325,  333,  0);
    glVertex3f(315,   313,   0);
    glEnd();

///=============================================



///===============hills 2nd layer=======================

    glBegin(GL_POLYGON);//right

    glVertex3f( 810,  310,  0);
    glColor3f (1.000, 0.894, 0.710);
    glVertex3f( 701,  326,  0);
    glColor3f (0.941, 0.502, 0.502);
    glVertex3f( 657,  333,  0);
    glVertex3f( 640,  339,  0);
    glVertex3f( 638,  346,  0);
    glVertex3f( 636,  352,  0);
    glVertex3f( 580,  353,  0);
    glVertex3f( 570,  369,  0);
    glVertex3f( 530,  369,  0);
    glVertex3f( 510,  379,  0);
    glVertex3f( 510,  399,  0);
    glVertex3f( 490,  399,  0);
    glVertex3f( 470,  390,  0);
    glVertex3f( 450,  390,  0);
    glVertex3f( 440,  380,  0);
    glVertex3f( 423,  370,  0);
    glVertex3f( 410,  370,  0);
    glVertex3f( 385,  350,  0);
    glVertex3f( 325,  330,  0);
    glColor3f (1.000, 0.894, 0.710);
    glVertex3f(315,   310,   0);
    glEnd();

///==============================================



///=================shadow==========================

    //--4th layer of clouds
    glColor3f (0.941, 0.502, 0.502);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(221.635+110*cos(theta1),336+53*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(100+113*cos(theta1),400+103*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(110+143*cos(theta1),580+123*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(0+43*cos(theta1),650+53*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(43*cos(theta1),459+53*sin(theta1));
    }
    glEnd();

    ///----------------------------------------------------------------------------------



    ///----------------------------------4th layer of clouds---------------------------------------------

    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.627, 0.478);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(218.632+110*cos(theta1),336+50*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.627, 0.478);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(100+110*cos(theta1),400+100*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.627, 0.478);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(110+140*cos(theta1),580+120*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.627, 0.478);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(0+40*cos(theta1),650+50*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.627, 0.478);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(40*cos(theta1),459+50*sin(theta1));
    }
    glEnd();

///-----------------------------------------------------------------------------------


///---------------------hill layer 3rd shadow--------------------------///

    glBegin(GL_POLYGON);//left
    glColor3f (0.545, 0.271, 0.075);
    glVertex3f( 730,   292,  0);
    glVertex3f( 800,   302,  0);
    glVertex3f( 810,   307,  0);
    glVertex3f( 815,   312,  0);
    glVertex3f( 835,   321,  0);
    glVertex3f( 837,   332,  0);
    glVertex3f( 837,   332,  0);
    glVertex3f( 870,   352,  0);
    glVertex3f( 878,   382,  0);
    glVertex3f( 910,   382,  0);
    glVertex3f( 935,   372,  0);
    glVertex3f( 970,   352,  0);
    glVertex3f( 988,   349,  0);
    glVertex3f( 1010,  342,  0);
    glVertex3f( 1020,  352,  0);
    glVertex3f( 1040,  360,  0);
    glVertex3f( 1050,  370,  0);
    glVertex3f( 1070,  360,  0);
    glVertex3f( 1094,  332,  0);
    glVertex3f( 1130,  347,  0);
    glVertex3f( 1170,  316,  0);
    glVertex3f( 1200,  330,  0);
    glVertex3f(1200,   292,  0);
    glEnd();

    glBegin(GL_POLYGON);//left
    glVertex3f(1110,   293,   0);
    glVertex3f(1220,   378,   0);
    glVertex3f(1280,   423,   0);
    glVertex3f(1320,   366,   0);
    glVertex3f(1320,   293,   0);
    glEnd();

    glBegin(GL_POLYGON);//left
    glVertex3f(1320,   293,   0);
    glVertex3f(1320,   366,   0);
    glVertex3f(1350,   378,   0);
    glVertex3f(1350,   293,   0);
    glEnd();

    ///--------------------------------------------------------------



    ///---------------------hill layer 3rd--------------------------///
    glColor3f (0.804, 0.361, 0.361);

    glBegin(GL_POLYGON);//left
    glVertex3f( 730,  290,  0);
    glColor3f (1.000, 0.894, 0.710);
    glVertex3f( 800,  300,  0);
    glColor3f (0.804, 0.361, 0.361);
    glVertex3f( 810,  305,  0);
    glVertex3f( 815,  310,  0);
    glVertex3f( 835,  319,  0);
    glVertex3f( 837,  330,  0);
    glVertex3f( 837,  330,  0);
    glVertex3f( 870,  350,  0);
    glVertex3f( 878,  380,  0);
    glVertex3f( 910,  380,  0);
    glVertex3f( 935,  370,  0);
    glVertex3f( 970,  350,  0);
    glVertex3f( 988,  347,  0);
    glVertex3f( 1010,  340,  0);
    glVertex3f( 1020,  350,  0);
    glVertex3f( 1040,  359,  0);
    glVertex3f( 1050,  369,  0);
    glVertex3f( 1070,  359,  0);
    glVertex3f( 1094,  330,  0);
    glVertex3f( 1130,  345,  0);
    glVertex3f( 1170,  315,  0);
    glVertex3f( 1200,  325,  0);
    glColor3f (1.000, 0.894, 0.710);
    glVertex3f(1200,   290,   0);
    glEnd();
    glColor3f (0.804, 0.361, 0.361);

    glBegin(GL_POLYGON);//left
    glVertex3f(1110,   290,   0);
    glVertex3f(1220,   375,   0);
    glVertex3f(1280,   420,   0);
    glVertex3f(1320,   363,   0);
    glVertex3f(1320,   290,   0);
    glEnd();

    glBegin(GL_POLYGON);//left
    glVertex3f(1320,   290,   0);
    glVertex3f(1320,   363,   0);
    glVertex3f(1350,   375,   0);
    glVertex3f(1350,   290,   0);
    glEnd();

   ///--------------------------------------------------------------



   ///------------hill behind the 4th layer -----------------------------

    glBegin(GL_POLYGON);//left
    glColor3f (1.000, 0.498, 0.314);
    glVertex3f(0,     270,   0);
    glVertex3f(0,     335,   0);
    glVertex3f(60,    355,   0);
    glColor3f (0.957, 0.643, 0.376);
    glVertex3f(140,   270,   0);
    glEnd();

    ///---------------------------------------------------------------------------------



    ///---------------------------hill 4th layer shadow--------------------------------///

    glColor3f (0.545, 0.271, 0.075);

    glBegin(GL_POLYGON);//left
    glVertex3f(40,   273,   0);
    glVertex3f(150,   343,   0);
    glVertex3f(190,   273,   0);
    glEnd();

    glBegin(GL_POLYGON);//left
    glVertex3f(190,   263,   0);
    glVertex3f(150,   343,   0);
    glVertex3f(200,   366,   0);
    glVertex3f(240,   383,   0);
    glVertex3f(260,   363,   0);
    glVertex3f(272,   357,   0);
    glVertex3f(289,   343,   0);
    glVertex3f(350,   337,   0);
    glVertex3f(369,   323,   0);
    glVertex3f(492,   263,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(300,   263,   0);
    glVertex3f(439,   323,   0);
    glVertex3f(449,   323,   0);
    glVertex3f(470,   323,   0);
    glVertex3f(485,   297,   0);
    glVertex3f(489,   297,   0);
    glVertex3f(500,   260,   0);
    glEnd();

    glBegin(GL_POLYGON);//left
    glVertex3f(440,263,0);
    glVertex3f(540,   373,   0);
    glVertex3f(547,   377,   0);
    glVertex3f(553,   373,   0);
    glVertex3f(630,   263,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(470,263,0);
    glVertex3f(660,   333,   0);
    glVertex3f(666,   333,   0);
    glVertex3f(815,   263,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(730,   263,   0);
    glVertex3f(724,   307,   0);
    glVertex3f(755,   333,   0);
    glVertex3f(762,   333,   0);
    glVertex3f(780,   323,   0);
    glVertex3f(789,   313,   0);
    glVertex3f(799,   303,   0);
    glVertex3f(815,   283,   0);
    glVertex3f(825,   277,   0);
    glVertex3f(890,   273,   0);
    glVertex3f(900,   269,  0);
    glVertex3f(1000,  260,   0);
    glEnd();

    ///-----------------------------------------------------------------------



    ///---------------------------hill 4th layer--------------------------------///

    glBegin(GL_POLYGON);//left
    glColor3f (1.000, 0.498, 0.314);
    glColor3f (0.957, 0.643, 0.376);
    glVertex3f(40,     270,   0);
    glVertex3f(150,    340,   0);
    glVertex3f(190,    270,   0);
    glEnd();

    glBegin(GL_POLYGON);//left
    glVertex3f(190,   260,   0);
    glVertex3f(150,   340,   0);
    glVertex3f(200,   363,   0);
    glColor3f (1.000, 0.498, 0.314);
    glVertex3f(240,   380,   0);
    glVertex3f(260,   360,   0);
    glVertex3f(272,   354,   0);
    glVertex3f(289,   340,   0);
    glColor3f (0.957, 0.643, 0.376);
    glVertex3f(350,   334,   0);
    glVertex3f(369,   320,   0);
    glVertex3f(492,   260,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(300,   260,   0);
    glVertex3f(439,   320,   0);
    glVertex3f(449,   320,   0);
    glVertex3f(470,   320,   0);
    glColor3f (1.000, 0.498, 0.314);
    glVertex3f(485,   295,   0);
    glVertex3f(489,   294,   0);
    glColor3f (0.957, 0.643, 0.376);
    glVertex3f(500,   260,   0);
    glColor3f (0.957, 0.643, 0.376);
    glEnd();

    glBegin(GL_POLYGON);//left
    glVertex3f(440,260,0);
    glVertex3f(540,   370,   0);
    glVertex3f(547,   375,   0);
    glVertex3f(553,   370,   0);
    glColor3f (1.000, 0.498, 0.314);
    glVertex3f(630,   260,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(470,260,0);
    glColor3f (0.957, 0.643, 0.376);
    glVertex3f(660,   330,   0);
    glVertex3f(666,   330,   0);
    glColor3f (0.957, 0.643, 0.376);
    glVertex3f(815,   260,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.957, 0.643, 0.376);
    glVertex3f(730,   260,   0);
    glVertex3f(724,   305,   0);
    glColor3f (1.000, 0.498, 0.314);
    glVertex3f(755,   330,   0);
    glColor3f (0.957, 0.643, 0.376);
    glVertex3f(762,   330,   0);
    glVertex3f(780,   320,   0);
    glVertex3f(789,   310,   0);
    glVertex3f(799,   300,   0);
    glVertex3f(815,   280,   0);
    glVertex3f(825,   275,   0);
    glColor3f (1.000, 0.498, 0.314);
    glVertex3f(890,   270,   0);
    glVertex3f(900,   266,  0);
    glVertex3f(1000,   260,  0);
    glEnd();

    ///-----------------------------------------------------------------------



    ///-------------------layar 5 hill shadow 1------------------
    glColor3f (1.000, 0.871, 0.678);

    glBegin(GL_POLYGON);//right
    glColor3f (1.000, 0.871, 0.678);
    glVertex3f(677,   257,   0);
    glVertex3f(757,   297,   0);
    glVertex3f(792,   282,   0);
    glVertex3f(822,   302,   0);
    glVertex3f(837,   281,   0);
    glVertex3f(845,   281,   0);
    glVertex3f(851,   272,   0);
    glVertex3f(862,   268,   0);
    glVertex3f(871,   257,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.871, 0.678);
    glVertex3f(838,   257,   0);
    glVertex3f(883,   292,   0);
    glVertex3f(913,   289,   0);
    glVertex3f(920,   290,   0);
    glVertex3f(918,   291,   0);
    glVertex3f(921,   292,   0);
    glVertex3f(922,   294,   0);
    glVertex3f(928,   302,   0);
    glVertex3f(952,   307,   0);
    glVertex3f(992,   307,   0);
    glVertex3f(992,   257,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(992,   257,   0);
    glVertex3f(992,   322,   0);
    glVertex3f(1008,   322,   0);
    glVertex3f(1008,   303,   0);
    glVertex3f(1079,   303,   0);
    glVertex3f(1083,   312,   0);
    glVertex3f(1090,   303,   0);
    glVertex3f(1153,   292,   0);
    glVertex3f(1153,   257,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1003,   255,   0);
    glVertex3f(1173,   312,   0);
    glVertex3f(1353,   255,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1202,   255,   0);
    glVertex3f(1253,   342,   0);
    glVertex3f(1293,   312,   0);
    glVertex3f(1333,   308,   0);
    glVertex3f(1358,   282,   0);
    glVertex3f(1353,   257,   0);
    glEnd();

    ///-------------------------------------------------------------




    ///-----------layar 5 hill shadow 2---------
    glColor3f (0.627, 0.322, 0.176);

    glBegin(GL_POLYGON);
    glVertex3f(535,   225,   0);
    glVertex3f(600,   240,   0);
    glVertex3f(1350,   240,   0);
    glVertex3f(1350,   224,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(600,   240,   0);
    glVertex3f(675,   255,   0);
    glVertex3f(1350,   255,   0);
    glVertex3f(1350,   240,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(675,   255,   0);
    glVertex3f(755,   295,   0);
    glVertex3f(790,   280,   0);
    glVertex3f(820,   300,   0);
    glVertex3f(835,   279,   0);
    glVertex3f(843,   279,   0);
    glVertex3f(849,   270,   0);
    glVertex3f(860,   266,   0);
    glVertex3f(869,   255,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(835,   255,   0);
    glVertex3f(880,   290,   0);
    glVertex3f(910,   287,   0);
    glVertex3f(917,   288,   0);
    glVertex3f(915,   289,   0);
    glVertex3f(917,   290,   0);
    glVertex3f(919,   292,   0);
    glVertex3f(925,   300,   0);
    glVertex3f(949,   305,   0);
    glVertex3f(989,   305,   0);
    glVertex3f(989,   255,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(989,   255,   0);
    glVertex3f(989,   320,   0);
    glVertex3f(1005,   320,   0);
    glVertex3f(1005,   301,   0);
    glVertex3f(1076,   301,   0);
    glVertex3f(1080,   310,   0);
    glVertex3f(1087,   301,   0);
    glVertex3f(1150,   290,   0);
    glVertex3f(1150,   255,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1000,   255,   0);
    glVertex3f(1170,   310,   0);
    glVertex3f(1350,   255,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1199,   255,   0);
    glVertex3f(1250,   340,   0);
    glVertex3f(1290,   310,   0);
    glVertex3f(1330,   306,   0);
    glVertex3f(1355,   280,   0);
    glVertex3f(1350,   255,   0);
    glEnd();

    ///-------------------------------------------------------------



    ///---------------layar 5 hill----------------------
    glColor3f (0.647, 0.165, 0.165);

    glBegin(GL_POLYGON);
    glColor3f (1.000, 0.894, 0.710);
    glVertex3f(535,   220,   0);
    glColor3f (0.647, 0.165, 0.165);
    glVertex3f(600,   235,   0);
    glVertex3f(1350,  235,   0);
    glColor3f (1.000, 0.894, 0.710);
    glVertex3f(1350,  220,   0);
    glEnd();

    glColor3f (0.647, 0.165, 0.165);
    glBegin(GL_POLYGON);
    glVertex3f(600,    235,   0);
    glVertex3f(675,    250,   0);
    glVertex3f(1350,   250,   0);
    glVertex3f(1350,   235,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.647, 0.165, 0.165);
    glVertex3f(675,   250,   0);
    glVertex3f(755,   290,   0);
    glVertex3f(790,   275,   0);
    glVertex3f(818,   295,   0);
    glVertex3f(820,   295,   0);
    glVertex3f(835,   274,   0);
    glVertex3f(843,   274,   0);
    glVertex3f(849,   265,   0);
    glVertex3f(860,   261,   0);
    glVertex3f(869,   250,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(835,   250,   0);
    glVertex3f(880,   285,   0);
    glVertex3f(910,   282,   0);
    glVertex3f(917,   283,   0);
    glVertex3f(915,   284,   0);
    glVertex3f(917,   285,   0);
    glVertex3f(919,   287,   0);
    glVertex3f(925,   295,   0);
    glVertex3f(949,   300,   0);
    glVertex3f(989,   300,   0);
    glVertex3f(989,   250,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(989,   250,   0);
    glVertex3f(989,   315,   0);
    glVertex3f(1005,   315,   0);
    glVertex3f(1005,   296,   0);
    glVertex3f(1076,   296,   0);
    glVertex3f(1080,   305,   0);
    glVertex3f(1087,   296,   0);
    glVertex3f(1150,   285,   0);
    glVertex3f(1150,   250,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1000,   250,   0);
    glVertex3f(1170,   305,   0);
    glVertex3f(1350,   250,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1199,   250,   0);
    glVertex3f(1250,   335,   0);
    glVertex3f(1330,   301,   0);
    glVertex3f(1355,   275,   0);
    glVertex3f(1350,   250,   0);
    glEnd();

    ///-------------------------------------------------------------


    ///============river side================================
    glBegin(GL_QUADS);
    glColor3f (1.000, 0.894, 0.710);
    glVertex3f(0,206.667,0);
    glVertex3f(0,216.667,0);
    glVertex3f(1350,216.667,0);
    glVertex3f(1350,206.667,0);
    glEnd();


    ///---------------------------------reflection of hills---------------------------

    glColor3f (0.647, 0.15, 0.165);

    glBegin(GL_POLYGON);
    glVertex3f(1350,   206,   0);
    glVertex3f(1350,   170,   0);
    glVertex3f(790,    170,   0);
    glVertex3f(350,    206,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(890,   206,   0);
    glVertex3f(730,   155,   0);
    glVertex3f(600,   206,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(650,   206,   0);
    glVertex3f(790,   150,   0);
    glVertex3f(890,   206,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(830,   206,   0);
    glVertex3f(890,   150,   0);
    glVertex3f(910,   152,   0);
    glVertex3f(910,   206,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(910,   206,   0);
    glVertex3f(910,   152,   0);
    glVertex3f(950,   147,   0);
    glVertex3f(1350,  147,   0);
    glVertex3f(1350,  206,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(990,  147,   0);
    glVertex3f(990,  136,   0);
    glVertex3f(1010, 136,   0);
    glVertex3f(1010, 147,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1070,  147,   0);
    glVertex3f(1090,  136,   0);
    glVertex3f(1100,  147,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1100,   147,   0);
    glVertex3f(1190,   127,   0);
    glVertex3f(1250,   147,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1230,   147,   0);
    glVertex3f(1280,   108,   0);
    glVertex3f(1330,   147,   0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1270,   147,   0);
    glVertex3f(1290,   116,   0);
    glVertex3f(1350,   135,   0);
    glVertex3f(1350,   147,   0);
    glEnd();


    ///---------------front hill clip----------------
    //====1=================
    glColor3f (0.55,0.27,0.075);
    glBegin(GL_POLYGON);
    glVertex3f (0.00, 0.00, 0.00);
    glVertex3f (290.0, 0.00, 0.00);
    glVertex3f (290.0, 250.0, 0.0);
    glVertex3f (270.00, 270.0, 0.0);
    glVertex3f (0.00, 290.0, 0.0);
    glEnd();
//=====2================
    glColor3f (0.55,0.27,0.075);
    glBegin(GL_POLYGON);//
    glVertex3f (290.0, 0.00, 0.00);
    glVertex3f (370.0, 0.00, 0.0);
    glVertex3f (370.00, 250.0, 0.0);
    glVertex3f (290.00, 250.0, 0.0);
    glEnd();
    //=====12   above 3================
    glColor3f (0.3026, 0.1226, 0.185);
    glBegin(GL_POLYGON);//
    glVertex3f (370.00, 170.00, 0.0);
    glVertex3f (590.00, 170.0, 0.0);
    glVertex3f (630.00, 240.0, 0.0);
    glVertex3f (370.00, 240.0, 0.0);
    glEnd();
//=====3================
    glColor3f (0.55,0.27,0.075);
    glBegin(GL_POLYGON);//
    glVertex3f (370.0, 210.00, 0.0);
    glVertex3f (550.00, 210.0, 0.0);
    glVertex3f (630.00, 240.0, 0.0);
    glVertex3f (550.00, 250.0, 0.0);
    glVertex3f (370.00, 250.0, 0.0);
    glEnd();
    //=====4================
    glColor3f (0.55,0.27,0.075);
    glBegin(GL_POLYGON);//
    glVertex3f (370.0, 180.00, 0.0);
    glVertex3f (550.00, 180.0, 0.0);
    glVertex3f (570.00, 200.0, 0.0);
    glVertex3f (550.00, 220.0, 0.0);
    glVertex3f (370.00, 220.0, 0.0);
    glEnd();
//=====5================
    glColor3f (0.55,0.27,0.075);
    glBegin(GL_POLYGON);//
    glVertex3f (370.0, 170.00, 0.0);
    glVertex3f (600.00, 170.0, 0.0);
    glVertex3f (590.00, 180.0, 0.0);
    glVertex3f (550.00, 182.0, 0.0);
    glVertex3f (370.00, 182.0, 0.0);
    glEnd();
    //=====11 above 6,7 ================
    glColor3f (0.3026, 0.1226, 0.185);
    glBegin(GL_POLYGON);//
    glVertex3f (370.00, 100.0, 0.0);
    glVertex3f (690.00, 100.0, 0.0);
    glVertex3f (700.00, 155.00, 0.0);
    glVertex3f (370.00, 155.0, 0.0);
    glEnd();
//=====10 above 6,7 ================
    glColor3f (0.3026, 0.1226, 0.185);
    glBegin(GL_POLYGON);
    glVertex3f (370.00, 60.00, 0.0);
    glVertex3f (580.00, 60.0, 0.0);
    glVertex3f (690.00, 100.0, 0.0);
    glVertex3f (370.00, 100.0, 0.0);
    glEnd();
//=====6================
    glColor3f (0.55,0.27,0.075);
    glBegin(GL_POLYGON);
    glVertex3f (370.00, 70.00, 0.0);
    glVertex3f (450.00, 70.00, 0.0);
    glVertex3f (590.00, 90.00, 0.0);
    glVertex3f (570.00, 110.00, 0.0);
    glVertex3f (600.00, 170.0, 0.0);
    glVertex3f (370.00, 170.0, 0.0);
    glEnd();
    //=====7================
    glColor3f (0.55,0.27,0.075);
    glBegin(GL_POLYGON);
    glVertex3f (570.00, 110.00, 0.0);
    glVertex3f (685.00, 130.0, 0.0);
    glVertex3f (700.00, 155.0, 0.0);
    glVertex3f (600.00, 170.0, 0.0);
    glEnd();
    //=====8================
    glColor3f (0.3026, 0.1226, 0.185);
    glBegin(GL_POLYGON);
    glVertex3f (370.00, 20.00, 0.0);
    glVertex3f (590.00, 20.00, 0.0);
    glVertex3f (600.00, 70.0, 0.0);
    glVertex3f (370.00, 70.0, 0.0);
    glEnd();
    //=====9================
    glColor3f (0.55,0.27,0.075);
    glBegin(GL_POLYGON);
    glVertex3f (370.00, 20.00, 0.0);
    glVertex3f (515.00, 60.0, 0.0);
    glVertex3f (450.00, 70.0, 0.0);
    glVertex3f (370.00, 70.0, 0.0);
    glEnd();

    //========10=============
    glColor3f (0.3026,0.1226, 0.185);
    glBegin(GL_POLYGON);
    glVertex3f (370.00, 0.00, 0.0);
    glVertex3f (370.00, 20.00, 0.0);
    glVertex3f (589.00, 20.00, 0.0);
    glVertex3f (583.00, 0.0, 0.0);
    glEnd();

    //========11=============
    glBegin(GL_POLYGON);
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f (512.00, 00.00, 0.0);
    glVertex3f (513.00, 50.00, 0.0);
    glVertex3f (512.00, 50.00, 0.0);
    glVertex3f (512.00, 0.00, 0.0);
    glEnd();

    glColor3f (0.55,0.27,0.075);
    glBegin(GL_POLYGON);
    glVertex3f (370.00, 0.00, 0.0);
    glVertex3f (370.00, 20.00, 0.0);
    glVertex3f (450.00, 0.00, 0.0);
    glEnd();

    ///----------------------------------------


    ///=========tree====================================

    glColor3f (0.5, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (00.00, 120.00, 0.0);
    glVertex3f (50.0,120.00, 0.0);
    glVertex3f (50.00, 350.0, 0.0);
    glVertex3f (00.00, 350.0, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.0,0.3,0.1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/45;
        glVertex2f(0+90*cos(theta1),300+90*sin(theta1));
    }
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f (0.0,0.3,0.1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/45;
        glVertex2f(10+120*cos(theta1),500+120*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.0,0.3,0.1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/45;
        glVertex2f(50+150*cos(theta1),400+130*sin(theta1));
    }
    glEnd();


///========SHADOW Tree Bike=========

    glBegin(GL_POLYGON);
    glColor3f (0.1,0,0);
    glVertex3f (250.00, 165.0, 0.0);
    glColor3f (0.55,0.27,0.075);
    glVertex3f (150.00, 140.00, 0.0);
    glColor3f (0.1,0,0);
    glVertex3f (250.00, 150.00, 0.0);
    glVertex3f (330.00, 152.00, 0.0);
    glVertex3f (360.00, 154.00, 0.0);
    glColor3f (0.55,0.27,0.075);
    glVertex3f (380.00, 145.00, 0.0);
    glColor3f (0.1,0,0);
    glColor3f (0.55,0.27,0.075);
    glVertex3f (420.00, 110.00, 0.0);
    glColor3f (0.1,0,0);
    glVertex3f (500.00, 165.0, 0.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f (0.1,0,0);
    glVertex3f (0.00, 120.0, 0.0);
    glColor3f (0.55,0.27,0.075);
    glVertex3f (0.00, 50.0, 0.0);
    glColor3f (0.1,0,0);
    glVertex3f (55.00, 120.0, 0.0);
    glVertex3f (55.00, 125.0, 0.0);
    glVertex3f (0.00, 130.0, 0.0);
    glEnd();


    ///==========bi cycle wheel-1================

//1
    glBegin(GL_POLYGON);
    glColor3f (1.0,0.0,0.0);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/360;
        glVertex2f(275+49*cos(theta1),200+49*sin(theta1));
    }
    glEnd();

//2
    glBegin(GL_POLYGON);
    glColor3f (0.0,0.0,0.0);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(275+40*cos(theta1),200+40*sin(theta1));
    }
    glEnd();


//3
    glBegin(GL_POLYGON);
    glColor3f (0.55,0.27,0.075);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(275+35*cos(theta1),200+35*sin(theta1));
    }
    glEnd();
//-----------------
    glColor3f (0,0,0);
    glBegin(GL_LINES);
    glVertex2f (275.00, 164.0);
    glVertex2f (275.00, 234.0);
    glEnd();
//----------------
    glColor3f (0,0,0);
    glBegin(GL_LINES);
    glVertex2f (241.00, 201.0);
    glVertex2f (322.00, 201.0);
    glEnd();
//-----------------
    glColor3f (0,0,0);
    glBegin(GL_LINES);
    glVertex2f (250.00, 223.0);
    glVertex2f (305.00, 180.0);
    glEnd();
//----------------
    glColor3f (0,0,0);
    glBegin(GL_LINES);
    glVertex2f (250.00, 176.0);
    glVertex2f (305.00, 222.0);
    glEnd();

//lathi===
    glColor3f (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (275.00, 199.00, 0.0);
    glVertex3f (360.00, 199.0, 0.0);
    glVertex3f (360.00, 205.0, 0.0);
    glVertex3f (275.00, 205.0, 0.0);
    glEnd();

//lathi===
    glColor3f (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (360.00, 210.0, 0.0);
    glVertex3f (367.00, 210.0, 0.0);
    glVertex3f (414.00, 265.0, 0.0);
    glVertex3f (408.00, 265.00, 0.0);
    glEnd();

//lathi===
    glColor3f (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (360.00, 205.0, 0.0);
    glVertex3f (366.00, 205.0, 0.0);
    glVertex3f (280.00, 295.0, 0.0);
    glVertex3f (274.00, 295.00, 0.0);
    glEnd();


    //coach===
    glColor3f (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (260.00, 295.00, 0.0);
    glVertex3f (290.00, 295.0, 0.0);
    glVertex3f (290.00, 305.0, 0.0);
    glVertex3f (260.00, 305.00, 0.0);
    glEnd();

//lathi===
    glColor3f (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (275.00, 200.00, 0.0);
    glVertex3f (281.00, 200.0, 0.0);
    glVertex3f (310.00, 260.0, 0.0);
    glVertex3f (304.00, 265.00, 0.0);
    glEnd();

//lathi===
    glColor3f (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (303.00, 260.00, 0.0);
    glVertex3f (409.00, 260.0, 0.0);
    glVertex3f (409.00, 266.0, 0.0);
    glVertex3f (303.00, 266.00, 0.0);
    glEnd();

//4
    glBegin(GL_POLYGON);
    glColor3f (0.0,0.0,0.6);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(275+9*cos(theta1),200+9*sin(theta1));
    }
    glEnd();

//lathi===
    glColor3f (0,0,0);
    glBegin(GL_POLYGON);

    glVertex3f (360.00, 200.00, 0.0);
    glVertex3f (363.00, 200.0, 0.0);
    glVertex3f (363.00, 240.0, 0.0);
    glVertex3f (360.00, 240.00, 0.0);

    glEnd();

//lathi===
    glColor3f (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (355.00, 240.00, 0.0);
    glVertex3f (367.00, 240.0, 0.0);
    glVertex3f (367.00, 244.0, 0.0);
    glVertex3f (355.00, 244.00, 0.0);
    glEnd();



//lathi===
    glColor3f (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (333.00, 170.00, 0.0);
    glVertex3f (346.00, 170.0, 0.0);
    glVertex3f (346.00, 166.0, 0.0);
    glVertex3f (333.00, 166.00, 0.0);
    glEnd();

///==========bi cycle middle================

    glBegin(GL_POLYGON);
    glColor3f (1.0,0,0);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(360+15*cos(theta1),200+15*sin(theta1));
    }
    glEnd();

    //lathi===
    glColor3f (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (360.00, 201.00, 0.0);
    glVertex3f (363.00, 201.0, 0.0);
    glVertex3f (343.00, 170.0, 0.0);
    glVertex3f (340.00, 170.00, 0.0);
    glEnd();

    //==========bi cycle wheel-2================

//1
    glBegin(GL_POLYGON);
    glColor3f (1.0,0.0,0.0);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/360;
        glVertex2f(460+49*cos(theta1),200+49*sin(theta1));
    }
    glEnd();

//2
    glBegin(GL_POLYGON);
    glColor3f (0.0,0.0,0.0);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(460+40*cos(theta1),200+40*sin(theta1));
    }
    glEnd();
//3
    glBegin(GL_POLYGON);
    glColor3f (0.55,0.27,0.075);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(460+35*cos(theta1),200+35*sin(theta1));
    }
    glEnd();

//lathi===
    glColor3f (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (460.00, 199.00, 0.0);
    glVertex3f (466.00, 199.0, 0.0);
    glVertex3f (385.00, 300.0, 0.0);
    glVertex3f (379.00, 300.0, 0.0);
    glEnd();

//lathi===
    glColor3f (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (385.00, 300.0, 0.0);
    glVertex3f (412.00, 300.0, 0.0);
    glVertex3f (412.00, 294.00, 0.0);
    glVertex3f (385.00, 294.0, 0.0);
    glEnd();

//lathi===
    glColor3f (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (385.00, 300.0, 0.0);
    glVertex3f (412.00, 300.0, 0.0);
    glVertex3f (412.00, 294.00, 0.0);
    glVertex3f (385.00, 294.0, 0.0);
    glEnd();

//handle===
    glBegin(GL_POLYGON);
    glColor3f (0,0,0);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(415+9*cos(theta1),298+9*sin(theta1));
    }
    glEnd();

//-----------------
    glColor3f (0,0,0);
    glBegin(GL_LINES);
    glVertex2f (463.00, 165.0);
    glVertex2f (463.00, 236.0);
    glEnd();
//-----------------
    glColor3f (0,0,0);
    glBegin(GL_LINES);
    glVertex2f (425.00, 201.0);
    glVertex2f (495.00, 201.0);
    glEnd();
//-----------------
    glColor3f (0,0,0);
    glBegin(GL_LINES);
    glVertex2f (432.00, 223.0);
    glVertex2f (490.00, 180.0);
    glEnd();
//-----------------
    glColor3f (0,0,0);
    glBegin(GL_LINES);
    glVertex2f (432.00, 176.0);
    glVertex2f (488.00, 222.0);
    glEnd();


//4
    glBegin(GL_POLYGON);
    glColor3f (0.0,0.0,0.6);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(460+9*cos(theta1),200+9*sin(theta1));
    }
    glEnd();



///----------------------sky-----------------------------
//--------------------starts------------------------------
    glBegin(GL_POLYGON);
    glColor3f (1, 1, 1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(860+2*cos(theta1),600+2*sin(theta1));
        glVertex2f(860+1*cos(theta1),600+1*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1, 1, 1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(660+3*cos(theta1),600+2*sin(theta1));
    }
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f (1, 1, 1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(650+3*cos(theta1),530+2*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1, 1, 1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(550+1*cos(theta1),600+1*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1, 1, 1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(750+3*cos(theta1),550+3*sin(theta1));
    }
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f (1, 1, 1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1100+3*cos(theta1),650+2*sin(theta1));
    }
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f (1, 1, 1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(900+2*cos(theta1),650+2*sin(theta1));
    }
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f (1, 1, 1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(610+2*cos(theta1),650+2*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1, 1, 1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(539+3*cos(theta1),680+2*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1, 1, 1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(769+2*cos(theta1),680+2*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1, 1, 1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(999+2*cos(theta1),680+3*sin(theta1));
    }
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f (1, 1, 1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(999+2*cos(theta1),550+2*sin(theta1));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (1, 1, 1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(970+2*cos(theta1),610+2*sin(theta1));
    }
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f (1, 1, 1);
    for(int i=0; i<360; i++)
    {
        theta1=i*3.142/180;
        glVertex2f(1200+3*cos(theta1),680+2*sin(theta1));
    }
    glEnd();

//-------------------------------------------------------


    glFlush();
}
/* Program entry point */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1350, 700);
    glutInitWindowPosition (0,0);
    glutCreateWindow ("Sun-Set");
    init ();
    glutDisplayFunc(drawShape);
    glutMainLoop();
    return 0;
}
