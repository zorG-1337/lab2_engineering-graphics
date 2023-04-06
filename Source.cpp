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
        
        
        // перемещение
        /* 
        glLoadIdentity();  // команда, возвращающая матрицу в начальное состояние.
        glTranslatef(0.3, 0.2, 0); // команда, смещающая систему координат на каждой итерации цикла по трём осям на заданные значения.
        */
        

        // -----------масштабирование------------
        /*
        glLoadIdentity();  // команда, возвращающая матрицу в начальное состояние.

        glTranslatef(0.5, 0, 0); // смещение оси координат на каждой итерации цикла на 0.5 по оси х.
        glScalef(0.3, 0.3, 1);  // во сколько раз нужно изменить масштаб системы координат по трём осям
        */
        
        

        
        
       
        // -----------Вращение---------------
        glRotatef(45, 0, 0, 1); // первый параметр - угол поворота в градусах системы координат
        // остальные параметры - относительно каких осей вращать фигуру (если параметр равен единице, то относительно этой оси
        // будет идти поворот.)
       
        


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