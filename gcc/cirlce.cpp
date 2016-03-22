/*
Simple rogram for detecting circles by applying hough transform on a image
By : @leopauly | meetleopauly@yahoo.com
*/

#include <iostream>
#include <vector>

#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/features2d/features2d.hpp"


using namespace std;
using namespace cv;

int main ()
{  int i;
   Mat image,res;

   image=imread("test3.jpg",0);  // give the input image with path here
   imshow("OrginalImage",image);

   GaussianBlur( image, image, Size(3,3), 0, 0, BORDER_DEFAULT );
   imshow("BlurredImage",image);

   vector<Vec3f> circles;
   HoughCircles(image, circles, CV_HOUGH_GRADIENT,2, image.rows/4, 200, 100 );
   
   for( size_t i = 0; i < circles.size(); i++ )
    {
         Point center(cvRound(circles[i][0]), cvRound(circles[i][1]));
         int radius = cvRound(circles[i][2]);
         // draw the circle center
         circle( image, center, 3, Scalar(0,255,0), -1, 8, 0 );
         // draw the circle outline
         circle( image, center, radius, Scalar(0,0,255), 3, 8, 0 );
    }

    
    imshow( "circles", image );  
    waitKey(0);
    return 0;
}
   


 
