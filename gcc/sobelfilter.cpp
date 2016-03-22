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
   
   int ddepth=CV_16S;
   Mat grad_x, grad_y,grad;
   Mat abs_grad_x, abs_grad_y;

  
   Sobel( image, grad_x, ddepth, 1, 0, 3);
   convertScaleAbs( grad_x, abs_grad_x );

   Sobel( image, grad_y, ddepth, 0, 1, 3);
   convertScaleAbs( grad_y, abs_grad_y );

   addWeighted( abs_grad_x, 0.5, abs_grad_y, 0.5, 0, grad );


   imshow("Edges",grad);
   waitKey(0);
   return 0;
}
   


 
