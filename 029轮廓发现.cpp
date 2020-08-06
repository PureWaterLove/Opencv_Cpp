//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//Mat src, dst;
//const char* input_win = "【输入图像】";
//const char* output_win = "【输出图像】";
//int threshold_value = 100;
//int threshold_max = 255;
//RNG rng;
//
//void Demo_Contours(int, void*);
//
//int main()
//{
//	src = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/girl2.png");
//	if (!src.data)
//	{
//		cout << "could not load image !";
//		return -1;
//	}
//	namedWindow(input_win, CV_WINDOW_AUTOSIZE);
//	namedWindow(output_win, CV_WINDOW_AUTOSIZE);
//	imshow(input_win, src);
//	cvtColor(src, src, CV_BGR2GRAY);
//
//	const char* trackbar_title = "Threshold Value:";
//	createTrackbar(trackbar_title, output_win, &threshold_value, threshold_max, Demo_Contours);
//	Demo_Contours(0, 0);
//
//	waitKey(0);
//	return 0;
//}
//
//void Demo_Contours(int, void*) {
//	Mat canny_output;
//	vector<vector<Point>> contours;
//	vector<Vec4i> hierachy;
//	Canny(src, canny_output, threshold_value, threshold_value * 2, 3, false);
//	findContours(canny_output, contours, hierachy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));
//
//	dst = Mat::zeros(src.size(), CV_8UC3);
//	RNG rng(12345);
//	for (size_t i = 0; i < contours.size(); i++) {
//		Scalar color = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));
//		drawContours(dst, contours, i, color, 2, 8, hierachy, 0, Point(0, 0));
//	}
//	imshow(output_win, dst);
//}