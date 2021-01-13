#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat img = imread("./Images/a.jpg");
	if (img.empty())
	{
		cout << "Error !!!" << endl << "No image to Read...";
		return -1;
	}
	imshow("image", img);
	Mat img1 = imread("./Images/a.jpg", IMREAD_GRAYSCALE);
	imshow("Grayscale Image", img1);
	waitKey();
	return 0;
}