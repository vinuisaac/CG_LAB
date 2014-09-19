#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

GLint xOne,yOne,Xtwo,yTwo

void resize(int,int);
void setPixel(GLint,GLint);
void lineBres_L1(Glint,GLint,GLint,GLint,GLfloat);
void lineBres_GE1(int,GLint,GLint,GLint,GLfloat);
void display();

void main(int argc,char** argv)
{
  printf("Enter the starting vertex:");
  scanf("%d%d",&xOne,yOne);
  printf("Enter the ending vertex:");
  scanf("%d%d",&xTwo,yTwo);
 
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition(800,50);
  glutInitWindowSize(400,400);
  glutCreateWindow("Bresnham's Line Algorithm");
  glutDisplayFunc(display);
  glutReshapeFunc(resize);
  glutMainLoop();
}

void setPixel(int w,int h)
{
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2d(0.0,w,0.0,h);
  gl
}
