//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img, src;
//	img = imread("E:/����/ѧϰ/���/C++/CPlusPlusTestProgram/LearnOpenCV/image/girl2.png");
//	if (!img.data)
//	{
//		cout << "could not load image !";
//		return -1;
//	}
//	imshow("������ͼ��", img);
//
//	Laplacian(img, src, CV_16S, 3);
//
//	convertScaleAbs(src, src);
//
//	imshow("�����ͼ��", src);
//
//	waitKey(0);
//	return 0;
//}