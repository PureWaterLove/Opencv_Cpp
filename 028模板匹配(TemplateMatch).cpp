//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//Mat src; Mat templ; Mat result;
//char* src_window = "������ͼ��";
//char* result_window = "��������ڡ�";
//
//int match_method;
//int max_Trackbar = 5;
//
//// ��������
//void MatchingMethod(int, void*);
//
//int main()
//{	
//	src = imread("E:/����/ѧϰ/���/C++/CPlusPlusTestProgram/LearnOpenCV/image/girl2.png");
//	templ = imread("E:/����/ѧϰ/���/C++/CPlusPlusTestProgram/LearnOpenCV/image/girl2_1.png");
//	if (!src.data || !templ.data)
//	{
//		cout << "could not load image !";
//		return -1;
//	}
//
//	/// ��������
//	namedWindow(src_window, CV_WINDOW_AUTOSIZE);
//	namedWindow(result_window, CV_WINDOW_AUTOSIZE);
//
//	imshow(src_window, src);
//
//	/// ����������
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
//	/// ������ʾ��ԭͼ��
//	Mat src_display;
//	src.copyTo(src_display);
//
//	/// �����������ľ���
//	int result_cols = src.cols - templ.cols + 1;
//	int result_rows = src.rows - templ.rows + 1;
//
//	result.create(result_cols, result_rows, CV_32FC1);
//
//	/// ����ƥ��ͱ�׼��
//	matchTemplate(src, templ, result, match_method);
//	normalize(result, result, 0, 1, NORM_MINMAX, -1, Mat());
//
//	/// ͨ������ minMaxLoc ��λ��ƥ���λ��
//	double minVal; double maxVal; Point minLoc; Point maxLoc;
//	Point matchLoc;
//
//	minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc, Mat());
//
//	/// ���ڷ��� SQDIFF �� SQDIFF_NORMED, ԽС����ֵ������ߵ�ƥ����. ��������������, ��ֵԽ��ƥ��Խ��
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