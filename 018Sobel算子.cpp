//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img, gx, gy, src;
//	Scalar color = Scalar(0, 0, 255);
//	img = imread("E:/����/ѧϰ/���/C++/CPlusPlusTestProgram/LearnOpenCV/image/girl2.png");
//	if (!img.data)
//	{
//		cout << "could not load image !";
//		return -1;
//	}
//	imshow("������ͼ��", img);
//
//	//Sobel(img, gx, CV_16S, 1, 0);
//	//Sobel(img, gy, CV_16S, 0, 1);
//
//	Scharr(img, gx, CV_16S, 1, 0);
//	Scharr(img, gy, CV_16S, 0, 1);
//
//	convertScaleAbs(gx, gx);
//	convertScaleAbs(gy, gy);
//	addWeighted(gx, 0.5, gy, 0.5, 0, src);
//	imshow("�����ͼ��", src);
//
//	waitKey(0);
//	return 0;
//}