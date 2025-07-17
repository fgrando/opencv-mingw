//compile with:
//g++ cameras.cpp -o cameras `pkg-config --cflags --libs opencv4`
//g++ cameras.cpp -o cameras.exe  -IC:\opt\opencv4.9.0\install\include -LC:\opt\opencv4.9.0\install\x64\mingw\lib -llibopencv_videoio490

#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    int max_tested = 10; // how many indexes to try
    for (int i = 0; i < max_tested; ++i) {
        cv::VideoCapture cap(i);
        if (cap.isOpened()) {
            std::cout << "Found webcam at index: " << i << std::endl;
            cap.release();
        }
    }
    return 0;
}