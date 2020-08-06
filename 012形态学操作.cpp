//#include<opencv2\opencv.hpp>
//#include<iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat src, dst;
//	src = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/girl2.png");
//	if (!src.data)
//	{
//		cout << "could not load image !";
//		return -1;
//	}
//	//src.resize((11, 26));
//	//cvtColor(src, src, CV_RGB2GRAY);
//	//resize(src, src, Size(), 0.03, 0.05);
//	imshow("src", src);
//
//	Mat kernel = getStructuringElement(MORPH_RECT, Size(7, 7), Point(-1, -1));
//
//	morphologyEx(src, dst, CV_MOP_OPEN,kernel);
//	imshow("open-src", dst);
//
//	morphologyEx(src, dst, CV_MOP_CLOSE, kernel);
//	imshow("close-src", dst);
//
//	morphologyEx(src, dst, CV_MOP_GRADIENT, kernel);
//	imshow("gradient-src", dst);
//
//	morphologyEx(src, dst, CV_MOP_TOPHAT, kernel);
//	imshow("tophat-src", dst);
//
//	morphologyEx(src, dst, CV_MOP_BLACKHAT, kernel);
//	imshow("blackhat-src", dst);
//
//	waitKey(0);
//	return 0;
//}