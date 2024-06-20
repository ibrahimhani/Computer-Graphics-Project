#include <windows.h>
#include <GL/glut.h>

int x = 1000; // Initial x position of the square
int y = 100; // Initial y position of the square
int direction = 1; // 1 for right, -1 for left

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glLoadIdentity();
    gluOrtho2D(0, 1600, 0, 1600);
    glClear(GL_COLOR_BUFFER_BIT);



    glBegin(GL_POLYGON);
    glColor3ub(100, 255, 255);
    glVertex2d(0, 0);
    glVertex2d(0, 1600);
    glVertex2d(1600, 1600);
    glVertex2d(1600, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(60, 1, 255);
    glVertex2d(40, 40);
    glVertex2d(40, 100);
    glVertex2d(760, 100);
    glVertex2d(760, 60);
    glVertex2d(860, 60);
    glVertex2d(860, 100);
    glVertex2d(1560, 100);
    glVertex2d(1560, 40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(60, 1, 255);
    glVertex2d(40, 40);
    glVertex2d(40, 1560);
    glVertex2d(100, 1560);
    glVertex2d(100, 40);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(60, 1, 255);
    glVertex2d(40, 1500);
    glVertex2d(40, 1560);
    glVertex2d(1560, 1560);
    glVertex2d(1560, 1500);

    glEnd();
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(60, 1, 255);
    glVertex2d(1500, 40);
    glVertex2d(1500, 1560);
    glVertex2d(1560, 1560);
    glVertex2d(1560, 40);

    glEnd();

    for (int i = 0; i < 14; ++i) {
        for (int j = 1; j < 15; ++j) {
            glBegin(GL_POLYGON);
            if ((i + j) % 2 == 0)
                glColor3ub(139, 69, 19); // Green
            else
                glColor3ub(0, 0, 0); // Blue
            glVertex2d(100 * j, 100 * (i + 1));
            glVertex2d(100 * j, 100 * (i + 2));
            glVertex2d(100 * (j + 1), 100 * (i + 2));
            glVertex2d(100 * (j + 1), 100 * (i + 1));
            glEnd();
        }
    }
    glBegin(GL_POLYGON);
    glColor3ub(60, 255, 255);

    glVertex2d(100, 250);
    glVertex2d(100, 300);
    glVertex2d(900, 300);
    glVertex2d(900, 250);



    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(60, 255, 255);

    glVertex2d(900, 250);
    glVertex2d(900, 1500);
    glVertex2d(950, 1500);
    glVertex2d(950, 250);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(60, 255, 255);

    glVertex2d(100, 900);
    glVertex2d(100, 850);
    glVertex2d(900, 850);
    glVertex2d(900, 900);
    glEnd();

    // Almira
    glBegin(GL_POLYGON);
    glColor3ub(255, 12, 0);
    glVertex2d(600 - 30, 700);
    glVertex2d(800 - 30, 700);
    glVertex2d(800 - 30, 830);
    glVertex2d(600 - 30, 830);

    glEnd();

    // Almira
    glBegin(GL_POLYGON);
    glColor3ub(255, 12, 0);
    glVertex2d(600 - 250, 700);
    glVertex2d(800 - 250, 700);
    glVertex2d(800 - 250, 830);
    glVertex2d(600 - 250, 830);

    glEnd();

    //sofa
    glBegin(GL_POLYGON);
    glColor3ub(200, 203, 201);
    glVertex2d(100, 1350);
    glVertex2d(300, 1350);
    glVertex2d(300, 1500);
    glVertex2d(100, 1500);

    glEnd();

    //sofa_sheet
    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2d(120, 1350);
    glVertex2d(280, 1350);
    glVertex2d(280, 1460);
    glVertex2d(120, 1460);

    glEnd();

    //sofa-2
    glBegin(GL_POLYGON);
    glColor3ub(200, 203, 201);
    glVertex2d(100 + 200, 1350);
    glVertex2d(300 + 200, 1350);
    glVertex2d(300 + 200, 1500);
    glVertex2d(100 + 200, 1500);

    glEnd();

    //sofa-2_sheet
    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2d(120 + 200, 1350);
    glVertex2d(280 + 200, 1350);
    glVertex2d(280 + 200, 1460);
    glVertex2d(120 + 200, 1460);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(200, 203, 201);
    glVertex2d(600 - 495, 700 - 90);
    glVertex2d(700 - 495, 700 - 90);
    glVertex2d(700 - 495, 830 - 90);
    glVertex2d(600 - 495, 830 - 90);

    glEnd();
    //BAD1
    glBegin(GL_POLYGON);
    glColor3ub(60, 1, 255);
    glVertex2d(100, 300);
    glVertex2d(100, 600);
    glVertex2d(600, 600);
    glVertex2d(600, 300);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(100, 310);
    glVertex2d(100, 600);
    glVertex2d(600, 600);
    glVertex2d(600, 310);
    glEnd();
    //PILO
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2d(100, 310);
    glVertex2d(100, 600);
    glVertex2d(200, 600);
    glVertex2d(200, 310);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(60, 1, 255);

    glVertex2d(100, 450);
    glVertex2d(200, 450);


    glEnd();
    //BAD2

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2d(100, 910);
    glVertex2d(100, 1200);
    glVertex2d(600, 1200);
    glVertex2d(600, 910);
    glEnd();
    //PILO
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2d(100, 910);
    glVertex2d(100, 1200);
    glVertex2d(200, 1200);
    glVertex2d(200, 910);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(60, 1, 255);

    glVertex2d(100, 1050);
    glVertex2d(200, 1050);


    glEnd();

    //vaccume

    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 255);
    glVertex2d(x, y);
    glVertex2d(x, y + 50);
    glVertex2d(x + 50, y + 50);
    glVertex2d(x + 50, y);
    glEnd();
    //Chair 1
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2d(1250, 680);
    glVertex2d(1250, 600);
    glVertex2d(1300, 600);
    glVertex2d(1300, 680);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 50, 0);
    glVertex2d(1250, 640);
    glVertex2d(1250, 630);
    glVertex2d(1230, 630);
    glVertex2d(1230, 640);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 50, 0);
    glVertex2d(1250, 650);
    glVertex2d(1250, 660);
    glVertex2d(1230, 660);
    glVertex2d(1230, 650);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 50, 0);
    glVertex2d(1200, 600);
    glVertex2d(1200, 680);
    glVertex2d(1230, 680);
    glVertex2d(1230, 600);
    glEnd();
    //Chair 2
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2d(1250, 780);
    glVertex2d(1250, 700);
    glVertex2d(1300, 700);
    glVertex2d(1300, 780);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 50, 0);
    glVertex2d(1250, 740);
    glVertex2d(1250, 730);
    glVertex2d(1230, 730);
    glVertex2d(1230, 740);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 50, 0);
    glVertex2d(1250, 750);
    glVertex2d(1250, 760);
    glVertex2d(1230, 760);
    glVertex2d(1230, 750);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 50, 0);
    glVertex2d(1200, 700);
    glVertex2d(1200, 780);
    glVertex2d(1230, 780);
    glVertex2d(1230, 700);
    glEnd();

    // table
    glBegin(GL_POLYGON);
    glColor3ub(255, 50, 0);
    glVertex2d(1300, 550);
    glVertex2d(1300, 850);
    glVertex2d(1500, 850);
    glVertex2d(1500, 550);
    glEnd();

    // Kitchen dimensions and position
    int kitchenX = 1100; // X position of the kitchen (right top corner)
    int kitchenY = 1200; // Y position of the kitchen (right top corner)
    int width = 350; // Width of the kitchen
    int height = 300; // Height of the kitchen

    // Countertop
    glBegin(GL_POLYGON);
    glColor3ub(139, 69, 19); // Brown color
    glVertex2d(kitchenX, kitchenY + height - 50);
    glVertex2d(kitchenX, kitchenY + height);
    glVertex2d(kitchenX + width, kitchenY + height);
    glVertex2d(kitchenX + width, kitchenY + height - 50);
    glEnd();

    // Left Cabinet
    glBegin(GL_POLYGON);
    glColor3ub(200, 200, 200); // Light gray color
    glVertex2d(kitchenX, kitchenY + 50);
    glVertex2d(kitchenX, kitchenY + height);
    glVertex2d(kitchenX + 100, kitchenY + height);
    glVertex2d(kitchenX + 100, kitchenY + 50);
    glEnd();

    // Right Cabinet
    glBegin(GL_POLYGON);
    glColor3ub(200, 200, 200); // Light gray color
    glVertex2d(kitchenX + width - 100, kitchenY + 50);
    glVertex2d(kitchenX + width - 100, kitchenY + height - 50);
    glVertex2d(kitchenX + width, kitchenY + height - 50);
    glVertex2d(kitchenX + width, kitchenY + 50);
    glEnd();

    // Sink
    glBegin(GL_POLYGON);
    glColor3ub(173, 216, 230); // Light blue color
    glVertex2d(kitchenX + 150, kitchenY + height - 50);
    glVertex2d(kitchenX + 150, kitchenY + height);
    glVertex2d(kitchenX + 250, kitchenY + height);
    glVertex2d(kitchenX + 250, kitchenY + height - 50);
    glEnd();

    // Faucet
    glBegin(GL_POLYGON);
    glColor3ub(169, 169, 169); // Dark gray color
    glVertex2d(kitchenX + 190, kitchenY + height);
    glVertex2d(kitchenX + 190, kitchenY + height + 30);
    glVertex2d(kitchenX + 210, kitchenY + height + 30);
    glVertex2d(kitchenX + 210, kitchenY + height);
    glEnd();



    // Stove
    glBegin(GL_POLYGON);
    glColor3ub(169, 169, 169); // Dark gray color
    glVertex2d(kitchenX + 300, kitchenY + 50);
    glVertex2d(kitchenX + 300, kitchenY + height - 30);
    glVertex2d(kitchenX + 400, kitchenY + height - 30);
    glVertex2d(kitchenX + 400, kitchenY + 50);
    glEnd();

    // Stove burners
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            glBegin(GL_POLYGON);
            glColor3ub(0, 0, 0); // Black color
            int x = kitchenX + 300 + (i * 60);
            int y = kitchenY + 120 + (j * 60);
            glVertex2d(x, y);
            glVertex2d(x, y + 40);
            glVertex2d(x + 40, y + 40);
            glVertex2d(x + 40, y);
            glEnd();
        }
    }
    glBegin(GL_POLYGON);
    // kitchen
    glColor3ub(60, 255, 255);

    glVertex2d(900, 1300);
    glVertex2d(900, 1250);
    glVertex2d(1500, 1250);
    glVertex2d(1500, 1300);
    glEnd();

    glBegin(GL_POLYGON);
    //washroom
    glColor3ub(60, 255, 255);

    glVertex2d(1100, 1300);
    glVertex2d(1100, 1500);
    glVertex2d(1150, 1500);
    glVertex2d(1150, 1300);
    glEnd();
    //bothtab
    glBegin(GL_POLYGON);
    glColor3ub(200, 200, 200); // Light gray color
    glVertex2d(kitchenX - 60, kitchenY + height - 100);
    glVertex2d(kitchenX - 60, kitchenY + height - 200);
    glVertex2d(kitchenX, kitchenY + height - 200);
    glVertex2d(kitchenX, kitchenY + height - 100);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 200); // Light gray color
    glVertex2d(kitchenX - 50, kitchenY + height - 110);
    glVertex2d(kitchenX - 50, kitchenY + height - 190);
    glVertex2d(kitchenX, kitchenY + height - 190);
    glVertex2d(kitchenX, kitchenY + height - 110);
    glEnd();

    // Toilet 
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255); // White color
    glVertex2d(kitchenX - 90, kitchenX + height + 100);
    glVertex2d(kitchenX - 90, kitchenX + height);
    glVertex2d(kitchenX - 130, kitchenX + height);
    glVertex2d(kitchenX - 130, kitchenX + height + 100);
    glEnd();

    //Toilet
    glBegin(GL_POLYGON);
    glColor3ub(169, 169, 169); // Dark gray color
    glVertex2d(kitchenX - 120, kitchenX + height + 70);
    glVertex2d(kitchenX - 120, kitchenX + height + 10);
    glVertex2d(kitchenX - 100, kitchenX + height + 10);
    glVertex2d(kitchenX - 100, kitchenX + height + 70);
    glEnd();
    // Sink
    glBegin(GL_POLYGON);
    glColor3ub(169, 169, 169); // Dark gray color
    glVertex2d(kitchenX - 150, kitchenX + height - 50);
    glVertex2d(kitchenX - 150, kitchenX + height - 40);
    glVertex2d(kitchenX - 100, kitchenX + height - 40);
    glVertex2d(kitchenX - 100, kitchenX + height - 50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(200, 200, 200); // Light gray color
    glVertex2d(kitchenX - 130, kitchenY + height - 120);
    glVertex2d(kitchenX - 130, kitchenY + height - 180);
    glVertex2d(kitchenX - 100, kitchenY + height - 180);
    glVertex2d(kitchenX - 100, kitchenY + height - 120);
    glEnd();


    glFlush();
}
void update(int value) {
    y += direction;

    // Check for boundaries and change direction
    if (y > 1200) { // 1580 because the square has a width of 20
        y = 1200;
        x += 20;
        direction = -1; // Change direction to left
    }
    else if (y < 100) {
        y = 100;
        x += 20;
        direction = 1; // Change direction to right
    }

    // If the square reaches the top, reset to the bottom (simulate continuous cleaning)
    if (x > 1500) {
        x = 1000;
    }

    // Redraw the scene
    glutPostRedisplay();

    // Call update function again after a certain interval (e.g., 10 milliseconds)
    glutTimerFunc(1, update, 0);
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("home interior design ");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    // Call update function for animation
    glutTimerFunc(0, update, 0);
    glutMainLoop();

    return 0;
}