/*
Simple rogram for applying sobel fileter on a image
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

   image=imread("test.png",0);  // give the input image with path here
   imshow("OrginalImage",image);

   GaussianBlur( image, image, Size(3,3), 0, 0, BORDER_DEFAULT );
   imshow("BlurredImage",image);

   Sobel(image, res, CV_8U, 1, 0);
   imshow("Edges",res);

   waitKey(0);
   return 0;
}
   


 
