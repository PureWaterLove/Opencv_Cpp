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
//	//��ֵ�˲�
//	//medianBlur(src, dst, 7);
//	//imshow("medianBlur_src", dst);
//
//
//	//˫���˲�
//	bilateralFilter(src, dst, 15, 150, 3);
//	imshow("bilateralFilter_src", dst);
//
//
//	waitKey(0);
//	return 0;
//}