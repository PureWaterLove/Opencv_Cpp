//#include<opencv2\opencv.hpp>
//#include<iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat src, dst;
//	src = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/Girl2.png");
//	if (!src.data)
//	{
//		cout << "could not load image !";
//		return -1;
//	}
//	imshow("src", src);
//
//	//中值滤波
//	//medianBlur(src, dst, 7);
//	//imshow("medianBlur_src", dst);
//
//
//	//双边滤波
//	bilateralFilter(src, dst, 15, 150, 3);
//	imshow("bilateralFilter_src", dst);
//
//
//	waitKey(0);
//	return 0;
//}