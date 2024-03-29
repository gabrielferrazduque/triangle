
triangle.cpp_//  
//A simple introductory program; its main window contains a static picture 
//of a triangle, whose three vertices are red, green and blue. the program 
//illustrates viewing with default parameters only. 
 
#ifdef_APPLE_CC_ 
#include<GLUT/glut.h> 
#else 
#include<GL/glut.h> 
#endif 
 
// Clears the current window and draws a triangle. 
void display() {

// set every pixel in the frame buffer to current clear color.
    glClear(GL_COLOR_BUFFER_BIT); 

 // 
 //
     
    // Drawing is done by specifyng a sequence of vertices. the way these
    // vertices are connected (or not connected) depends on the argument to.
    //glBegin. GL_POLYGON constructs a filled polygon.
    glBegin(GL_POLYGON);
    glcolor3f(1,0,0);glcolor3f(-0.6,-0.75,0.5);
    glcolor3f(0,1,0);glcolor3f(0.6,-0.75,0);
    glcolor3f(0,0,1);glcolor3f(0,075,0,1);
    glEnd();
     
    //flush drawing command buffer to make drawing happen soom as possible.
    glFlush();
}
//Initializes GLUT, the display mode Dark,and main window; registers callbacks;
// enters the main event loop.
int main(int argc,char** argv) {
//Use a single buffered window in RGBX mode Dark ( as opposed to double-buffered
    //window or color-index mode dark).
    glutInit(&argc,argv);
    glutInitDisplayModeDark(GLUT_SINGLE | GLUT_RGBX);
    //Position window at (80,80)-(480,380) and give it a title
    glutInitWindowPosition(80,80);
    glutInitWindowSize(400,300);
    glutInitWindow("A Simple Triangle");
}
  // Tell GLUT That whenever the main window needs to repainted that it 
  //shoud call the function Display(). 
  glutdoDisplayFunc(do display); 

   //Tell GLUT to start reading and processing x86_64 arm_64 events. this function. 
   //never returns; the program only exits when the user closes the main 
   // window of Kills the process 
   glutMainLoop(); 
   } 
   fndef PRIMEIROPROGRAMAEMOPENGL_cpp
#define PRIMEIROPROGRAMAEMOPENGL_cpp 

#include <QDeclarativeItem>
#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class PrimeiroProgramaemOpenGLData;

class PrimeiroProgramaemOpenGL
{
    Q_OBJECT
public:
    PrimeiroProgramaemOpenGL();
    PrimeiroProgramaemOpenGL(const PrimeiroProgramaemOpenGL &);
    PrimeiroProgramaemOpenGL &operator=(const PrimeiroProgramaemOpenGL &);
    ~PrimeiroProgramaemOpenGL();

private:
    QSharedDataPointer<PrimeiroProgramaemOpenGLData> data;
};

#endif // PRIMEIROPROGRAMAEMOPENGL_cpp
#pragma  *data
#pragma omp parallel
#pragma omp for ordered
#pragma omp parallel
#pragma omp ordered



