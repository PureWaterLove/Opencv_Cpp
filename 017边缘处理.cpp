//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img, src, kernel;
//	Scalar color = Scalar(0, 0, 255);
//	img = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/girl5.png");
//	if (!img.data)
//	{
//		cout << "could not load image !";
//		return -1;
//	}
//	imshow("【输入图像】", img);
//
//
//	//copyMakeBorder(img,src,5,5,5,5, BORDER_CONSTANT,color);
//	//copyMakeBorder(img, src, 55, 55, 55, 55, BORDER_REPLICATE);
//	copyMakeBorder(img, src, 55, 55, 55, 55, BORDER_WRAP);
//	imshow("【输出图像】", src);
//
//	waitKey(0);
//	return 0;
//}