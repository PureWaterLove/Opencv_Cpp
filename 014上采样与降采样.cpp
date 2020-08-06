//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img, src;
//	img = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/girl3.png");
//	if (!img.data)
//	{
//		cout << "could not load image !";
//		return -1;
//	}
//	imshow("show img", img);
//	pyrUp(img, src, Size(img.cols * 2, img.rows * 2));
//	imshow("output up image", src);
//	pyrDown(img, src, Size(img.cols / 2, img.rows / 2));
//	imshow("output down image", src);
//	pyrDown(src, src, Size(src.cols / 2, src.rows / 2));
//	imshow("output down image2", src);
//	//pyrDown(img, img, Size(img.cols / 2, img.rows / 2));
//	//pyrUp(img, img, Size(img.cols * 2, img.rows * 2));
//	//imshow("output down image", img);
//
//	waitKey(0);
//	return 0;
//}