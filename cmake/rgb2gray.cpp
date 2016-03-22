#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    
    Mat image,gray;
    image = imread("test.png", CV_LOAD_IMAGE_COLOR);   // Read the file

    cvtColor(image, gray, CV_BGR2GRAY);
    
    namedWindow( "Grayimage", WINDOW_AUTOSIZE );// Create a window for display.
    imshow( "Display window", gray );                   // Show our image inside it.

    waitKey(0);                                          // Wait for a keystroke in the window
    return 0;
}
