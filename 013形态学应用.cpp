//#include<opencv2\opencv.hpp>
//#include<iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat src, dst;
//char inimg[] = "【inputImage】";
//char outimg[] = "【outputImage】";
//void changeTrackbar(int pos, void*usrdata) {
//	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5), Point(-1, -1));
//	morphologyEx(src, dst, pos, kernel);
//	imshow(outimg, dst);
//}
//int main()
//{
//	src = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/girl2.png");
//	if (!src.data)
//	{
//		cout << "could not load image !";
//		return -1;
//	}
//
//	namedWindow(inimg,CV_WINDOW_AUTOSIZE);
//	namedWindow(outimg,CV_WINDOW_AUTOSIZE);
//
//	imshow(inimg, src);
//
//	int initValue = 2;
//	int maxSize = 6;
//	createTrackbar("kernel", outimg, &initValue, maxSize, changeTrackbar);
//
//	waitKey(0);
//	return 0;
//}
//
