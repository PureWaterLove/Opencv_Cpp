//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat src, src_gray, dst;
//	src = imread("E:/����/ѧϰ/���/C++/CPlusPlusTestProgram/LearnOpenCV/image/HoughLines.bmp");
//	if (!src.data)
//	{
//		cout << "could not load image !";
//		return -1;
//	}
//	imshow("������ͼ��", src);
//	 //extract edge
//	Canny(src, src_gray, 0, 255);
//	//medianBlur(src, src_gray, 3);
//	//cvtColor(src, src_gray, CV_BGR2GRAY);
//	cvtColor(src_gray, dst, CV_GRAY2BGR);
//	imshow("����ȡ��Ե��", src_gray);
//	vector<Vec2f> lines;
//	HoughLines(src_gray, lines, 1, CV_PI / 180, 100);
//
//	for (size_t i = 0; i < lines.size(); i++) {
//		float rho = lines[i][0]; // �������е�r����
//		float theta = lines[i][1]; // �������еĽǶ�
//		Point pt1, pt2;
//		double a = cos(theta), b = sin(theta);
//		double x0 = a*rho, y0 = b*rho;
//		// ת��Ϊƽ��������ĸ���
//		pt1.x = cvRound(x0 + 1000 * (-b));
//		pt1.y = cvRound(y0 + 1000 * (a));
//		pt2.x = cvRound(x0 - 1000 * (-b));
//		pt2.y = cvRound(y0 - 1000 * (a));
//		line(dst, pt1, pt2, Scalar(0, 0, 255), 5, CV_AA);
//	}
//	
//	//vector<Vec4f> plines;
//	//HoughLinesP(src_gray, plines, 1, CV_PI / 180.0, 10, 0, 10);
//	//cout << plines.size() << endl;
//	//Scalar color = Scalar(0, 0, 255);
//	//for (size_t i = 0; i < plines.size(); i++) {
//	//	Vec4f hline = plines[i];
//	//	line(dst, Point(hline[0], hline[1]), Point(hline[2], hline[3]), color, 3, LINE_AA);
//	//}
//
//
//
//	imshow("�����ͼ��", dst);
//
//	waitKey(0);
//	return 0;
//}