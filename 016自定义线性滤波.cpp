#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat img, src, kernel;
	img = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/YiTian.jpg");
	if (!img.data)
	{
		cout << "could not load image !";
		return -1;
	}
	imshow("【输入图像】", img);
	//kernel = Mat::ones(Size(21, 21),CV_32F)/441;
	kernel = (Mat_<char>(5, 5) << 0, -1, 0, -1,0
								-1, 0, 5, 0, -1, 
								0, 0, -1, 0, 0);
	filter2D(img, src, -1, kernel, Point(-1, -1),0);
	cout << kernel << endl;


	imshow("【输出图像】", src);

	waitKey(0);
	return 0;
}