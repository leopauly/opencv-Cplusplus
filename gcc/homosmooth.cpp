/*
Simple rogram for smoothening an image using homogeneousb blur
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
   image=imread("test.png",1);  // give the input image with path here
   blur(image,res,Size(10,10),Point(-1,1));
   imshow("smoothened",res);
   waitKey(0);
   return 0;
}
   


 
