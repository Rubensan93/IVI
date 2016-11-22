int main (int argc, char *argv[]) {

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(400, 400);
glutInitWindowPosition(200,200);
glutCreateWindow("hola mundo OpenGL");
init();

glutDisplayFunc (render);
glutReshapeFunc (resize);

glutMainLoop();
return 0;


}
