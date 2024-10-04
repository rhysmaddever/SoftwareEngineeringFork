#include <stdio.h>

int main()
{
    // ************************ Using puts ******************************** 
    puts("Hello World!");   //Write Hello World to the terminal


    // ************************ Using printf ******************************* 
    printf("Hello Everyone. We are using C\nHow are things?\n");
    // TASK (a) - remove \n from the string above - what does this change? 
    
    // ******************* Using printf placeholders *********************** 
    int age = 23;
    printf("My age is %d\n", age);

    // Some other placeholders include %c for character and %f for floating point
    float radius = 10.0f;
    float area = 3.415926 * radius * radius;

    // TASK(b) - Use printf to display the value of the variable area. Look at the lecture slides and find out how to limit this to 3 decimal places
    // Write solution here
    printf("The area = %.4f\n", area);
    
    //

    // You can output complex strings to the terminal
    int p = 3;
    int q = 4;
    printf("p=%d, q=%d\n", p, q);

    // TASK(c) - using printf, display the radius and the area using a single printf statement
    // Write solution here
    printf("Radius = %.2f Area = %.4f", radius, area);

    // % this starts the placeholder and tells printf that a value is being inserted
    // . this indicates that you are about to define the precision (how many decimal places)
    // 4 this specifies the number of decimal places (precision)
    // f this tells printf that the value being inserted is a floating point number
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

