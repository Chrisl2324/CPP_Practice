#include <iostream>

using namespace std;

class BouncingBall {
public:
    static int bouncingBall(double h, double bounce, double window) {
        // Validate input
        if (h <= 0 || bounce <= 0 || bounce >= 1 || window >= h) {
            return -1;
        }
        
        int count = 0;
        while (h > window) {
            count++;  // Ball falls past the window
            h *= bounce;
            if (h > window) {
                count++;  // Ball bounces back above the window
            }
        }
        return count;
    }
};

int main(void) {
    double h = 3;
    double bounce = 0.66;
    double window = 1.5;
    
    BouncingBall ball;
    int result = ball.bouncingBall(h, bounce, window);
    cout << result << endl;  // Expected output: 3
    
    return 0;
}
