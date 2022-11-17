
// standard lib
#include<iostream>
#include <fstream>


// opencv2 lib
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace std;

int main(int argc, char** argv) {

    if (argc != 2) {
        cout << "File not valid" << endl;
        return -1;
    }
    
    cv::Mat img = cv::imread(argv[1]);
    
    if (img.empty()) {
        cout << "Not a valid image file" << endl;
        return -1;
    }
    
    cv::namedWindow("Image", cv::WINDOW_AUTOSIZE);
    cv::imshow(argv[1], img);
    
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}