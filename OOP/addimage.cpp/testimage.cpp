#include <opencv2/opencv.hpp>

int main() {
    cv::Mat image = cv::imread("image.jpg"); // Load image
    if (image.empty()) {
        std::cout << "Could not open or find the image" << std::endl;
        return -1;
    }
    cv::imshow("Display Window", image); // Show image
    cv::waitKey(0); // Wait for key press
    return 0;
}
