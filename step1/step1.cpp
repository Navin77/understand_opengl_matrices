/* create points on borders to check -1 to 1 is cordinates. 
  Without using any matrices.
  for compiling this code, type following in terminal
  g++ step1.cpp -lGL -lglut -o step1
*/

#include <GL/freeglut.h>

void renderScene()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 1.0);
    glPointSize(50.0f);

    glBegin(GL_POINTS);
    glVertex2s( 0, 0); //center point
    glVertex2s( 1, 1); //topRight point
    glVertex2s(-1, 1); //topLeft point
    glVertex2s( 1,-1); //bottomRight point
    glVertex2s(-1,-1); //bottomLeft point
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(10,10);
    glutInitWindowSize(500,500);
    glutCreateWindow("check borders");

    glutDisplayFunc(renderScene);

    glutMainLoop();

    return 0;
}