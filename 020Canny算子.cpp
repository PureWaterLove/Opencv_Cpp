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
//	GaussianBlur(img, img, Size(5, 5), 0, 0);
//	//blur(img, img, Size(3, 3), Point(-1, -1), BORDER_DEFAULT);
//	Canny(img, src, 115, 255);
//
//	imshow("�����ͼ��", src);
//
//	waitKey(0);
//	return 0;
//}