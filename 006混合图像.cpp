//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main(int argc, char** argv) {
//	Mat src1, src2, dst;
//	src1 = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/Boy.png");
//	src2 = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/Girl.png");
//	if (!src1.data) {
//		cout << "could not load image which named boy.png..." << endl;
//		return -1;
//	}
//	if (!src2.data) {
//		cout << "could not load image named girl.png..." << endl;
//		return -1;
//	}
//
//	double alpha = 0.5;
//	if (src1.rows == src2.rows && src1.cols == src2.cols && src1.type() == src2.type()) {
//		 addWeighted(src1, alpha, src2, (1.0 - alpha), 0.0, dst);
//		// multiply(src1, src2, dst, 1.0);
//
//		imshow("Boy", src1);
//		imshow("Girl", src2);
//		imshow("Boy and Girl", dst);
//	}
//	else {
//		printf("could not blend images , the size of images is not same...\n");
//		return -1;
//	}
//
//	waitKey(0);
//	return 0;
//}