//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//Mat src; Mat templ; Mat result;
//char* src_window = "【输入图像】";
//char* result_window = "【结果窗口】";
//
//int match_method;
//int max_Trackbar = 5;
//
//// 函数声明
//void MatchingMethod(int, void*);
//
//int main()
//{	
//	src = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/girl2.png");
//	templ = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/girl2_1.png");
//	if (!src.data || !templ.data)
//	{
//		cout << "could not load image !";
//		return -1;
//	}
//
//	/// 创建窗口
//	namedWindow(src_window, CV_WINDOW_AUTOSIZE);
//	namedWindow(result_window, CV_WINDOW_AUTOSIZE);
//
//	imshow(src_window, src);
//
//	/// 创建滑动条
//	char* trackbar_label = "Method";
//	createTrackbar(trackbar_label, src_window, &match_method, max_Trackbar, MatchingMethod);
//	
//	MatchingMethod(0, 0);
//
//	waitKey(0);
//	return 0;
//}
//
//void MatchingMethod(int, void*)
//{
//	/// 将被显示的原图像
//	Mat src_display;
//	src.copyTo(src_display);
//
//	/// 创建输出结果的矩阵
//	int result_cols = src.cols - templ.cols + 1;
//	int result_rows = src.rows - templ.rows + 1;
//
//	result.create(result_cols, result_rows, CV_32FC1);
//
//	/// 进行匹配和标准化
//	matchTemplate(src, templ, result, match_method);
//	normalize(result, result, 0, 1, NORM_MINMAX, -1, Mat());
//
//	/// 通过函数 minMaxLoc 定位最匹配的位置
//	double minVal; double maxVal; Point minLoc; Point maxLoc;
//	Point matchLoc;
//
//	minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc, Mat());
//
//	/// 对于方法 SQDIFF 和 SQDIFF_NORMED, 越小的数值代表更高的匹配结果. 而对于其他方法, 数值越大匹配越好
//	if (match_method == CV_TM_SQDIFF || match_method == CV_TM_SQDIFF_NORMED)
//	{
//		matchLoc = minLoc;
//	}
//	else
//	{
//		matchLoc = maxLoc;
//	}
//
//	rectangle(src_display, matchLoc, Point(matchLoc.x + templ.cols, matchLoc.y + templ.rows), Scalar(0,0,255), 2, 8, 0);
//	rectangle(result, matchLoc, Point(matchLoc.x + templ.cols, matchLoc.y + templ.rows), Scalar(0, 0, 255), 2, 8, 0);
//
//	imshow(src_window, src_display);
//	imshow(result_window, result);
//
//	return;
//}