//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img, src;
//	img = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/girl2.png");
//	if (!img.data)
//	{
//		cout << "could not load image !";
//		return -1;
//	}
//	imshow("【输入图像】", img);
//
//	Laplacian(img, src, CV_16S, 3);
//
//	convertScaleAbs(src, src);
//
//	imshow("【输出图像】", src);
//
//	waitKey(0);
//	return 0;
//}