#include <GLFW/glfw3.h>
#include <Windows.h>
int main(void)
{

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    GLFWwindow* window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClearColor(0.7f, 1.0f, 0.7f, 0.0);
        glClear(GL_COLOR_BUFFER_BIT);
        
        Sleep(150);
        
        
        // �����������
        /* 
        glLoadIdentity();  // �������, ������������ ������� � ��������� ���������.
        glTranslatef(0.3, 0.2, 0); // �������, ��������� ������� ��������� �� ������ �������� ����� �� ��� ���� �� �������� ��������.
        */
        

        // -----------���������������------------
        /*
        glLoadIdentity();  // �������, ������������ ������� � ��������� ���������.

        glTranslatef(0.5, 0, 0); // �������� ��� ��������� �� ������ �������� ����� �� 0.5 �� ��� �.
        glScalef(0.3, 0.3, 1);  // �� ������� ��� ����� �������� ������� ������� ��������� �� ��� ����
        */
        
        

        
        
       
        // -----------��������---------------
        glRotatef(45, 0, 0, 1); // ������ �������� - ���� �������� � �������� ������� ���������
        // ��������� ��������� - ������������ ����� ���� ������� ������ (���� �������� ����� �������, �� ������������ ���� ���
        // ����� ���� �������.)
       
        


        glBegin(GL_TRIANGLES);
            glColor3f(0, 0, 0); glVertex2f(0, 0);
            glColor3f(1, 0, 0); glVertex2f(0.5, 0);
            glColor3f(0, 1, 0); glVertex2f(0, 0.5);
        glEnd();
        



        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}