//#include<opencv2\opencv.hpp>
//#include<iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat src, dst;
//	src = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/Girl2.png");
//	if (!src.data)
//	{
//		cout << "could not load image !";
//		return -1;
//	}
//	//src.resize((11, 26));
//	//cvtColor(src, src, CV_RGB2GRAY);
//	//resize(src, src, Size(), 0.03, 0.05);
//	imshow("src", src);
//
//	Mat kernel = getStructuringElement(MORPH_RECT, Size(3,3), Point(-1,-1));
//
//	//dilate(src, dst, kernel);
//	//imshow("dilate-src", dst);
//
//	erode(src, dst, kernel);
//	imshow("erode-src", dst);
//	//cout << src.cols << endl << src.rows << endl;
//	//cout << src << endl;
//	//cout << endl;
//	//cout << dst << endl;
//	
//
//	waitKey(0);
//	return 0;
//}