//#include<opencv2\opencv.hpp>
//#include<iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat src, dst;
//	src = imread("E:/����/ѧϰ/���/C++/CPlusPlusTestProgram/LearnOpenCV/image/Girl2.png");
//	if (!src.data)
//	{
//		cout << "could not load image !";
//		return -1;
//	}
//	imshow("src", src);
//
//	//�����˲�
//	//boxFilter(src, dst, -1, Size(5, 5));
//	//imshow("boxFilter_src", dst);
//
//
//	//��ֵ�˲�
//	//blur(src, dst, Size(3, 3), Point(-1, -1));
//	//imshow("blur_src", dst);
//
//	//��˹�˲�
//	GaussianBlur(src, dst, Size(3, 3), 0, 0);
//	imshow("GaussianBlur_src", dst);
//	waitKey(0);
//	return 0;
//}