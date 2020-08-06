//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//Mat src, src_gray, dst;
//const char* input_win = "【输入图像】";
//const char* output_win = "【输出图像】";
//const char* trackbar_title = "Threshold:";
//int threshold_value = 100;
//int threshold_max = 255;
//RNG rng(12345);
//
//void Threshold_Callback(int, void*);
//
//int main()
//{
//	src = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/ConvexHull1.png");
//	if (!src.data)
//	{
//		cout << "could not load image !";
//		waitKey(0);
//		return -1;
//	}
//	namedWindow(input_win, CV_WINDOW_AUTOSIZE);
//	namedWindow(output_win, CV_WINDOW_AUTOSIZE);
//	imshow(input_win, src);
//	cvtColor(src, src_gray, CV_BGR2GRAY);
//	blur(src_gray, src_gray, Size(3, 3));
//
//	createTrackbar(trackbar_title, output_win, &threshold_value, threshold_max, Threshold_Callback);
//	Threshold_Callback(0, 0);
//
//	waitKey(0);
//	return 0;
//}
//
//
//void Threshold_Callback(int, void*) {
//	Mat src_copy = src.clone();
//	Mat threshold_output;
//	vector<vector<Point> > contours;
//	vector<Vec4i> hierarchy;
//
//	threshold(src_gray, threshold_output, threshold_value, 255, THRESH_BINARY);
//
//	findContours(threshold_output, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, Point(0, 0));
//
//	vector<vector<Point> >hull(contours.size());
//	for (int i = 0; i < contours.size(); i++)
//	{
//		convexHull(Mat(contours[i]), hull[i], false);
//	}
//
//	//Mat drawing = Mat::zeros(threshold_output.size(), CV_8UC3);
//	for (int i = 0; i< contours.size(); i++)
//	{
//		Scalar color = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));
//		//drawContours(drawing, contours, i, color, 2, 8, vector<Vec4i>(), 0, Point());
//		drawContours(src, hull, i, color, 2, 8, vector<Vec4i>(), 0, Point());
//	}
//
//	imshow(output_win, src);
//}
