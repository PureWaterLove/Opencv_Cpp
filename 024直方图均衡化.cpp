///*
//	equalizeHist   (   
//		InputArray      src,		//8-bit��ͨ�� ����ͼ��
//		OutputArray     dst			//Ŀ��ͼ����ԭͼ������ͬ�ĳߴ�����͡�
//    )   
//
//*/
//
//#define INPUT_TITLE "input image"
//#define OUTPUT_TITLE "ֱ��ͼ���⻯"
//
//#include<iostream>
//#include<opencv2\opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main024() {
//	Mat img, src;
//	src = imread("D:/����/ѧϰ/c++/���Գ���/ConsoleApplication6/image/equalizeHist.jpg");
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