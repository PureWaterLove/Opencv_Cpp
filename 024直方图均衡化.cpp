///*
//	equalizeHist   (   
//		InputArray      src,		//8-bit单通道 输入图像
//		OutputArray     dst			//目标图像，与原图像有相同的尺寸和类型。
//    )   
//
//*/
//
//#define INPUT_TITLE "input image"
//#define OUTPUT_TITLE "直方图均衡化"
//
//#include<iostream>
//#include<opencv2\opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main024() {
//	Mat img, src;
//	src = imread("D:/个人/学习/c++/测试程序/ConsoleApplication6/image/equalizeHist.jpg");
//	if (!src.data)
//	{
//		cout << "ERROR : could not load image.";
//		return -1;
//	}
//	cvtColor(src, img,CV_BGR2GRAY);
//	equalizeHist(img, img);
//	namedWindow(INPUT_TITLE, CV_WINDOW_AUTOSIZE);
//	namedWindow(OUTPUT_TITLE, CV_WINDOW_AUTOSIZE);
//
//	imshow(INPUT_TITLE, src);
//	imshow(OUTPUT_TITLE, img);
//
//
//
//	waitKey(0);
//	return 0;
//}