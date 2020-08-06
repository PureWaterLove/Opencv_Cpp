//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace cv;
//int main(int argc, char** argv) {
//	Mat src, dst;
//	src = imread("E:/����/ѧϰ/���/C++/CPlusPlusTestProgram/LearnOpenCV/image/Girl.png");
//	if (!src.data) {
//		printf("could not load image...\n");
//		return -1;
//	}
//
//	imshow("��before��", src);
//
//	// contrast and brigthtness changes 
//	int height = src.rows;
//	int width = src.cols;
//	dst = Mat::zeros(src.size(), src.type());
//	float alpha = 1.1;
//	float beta = 3;
//
//	Mat m1;
//	src.convertTo(m1, CV_32F);
//	for (int row = 0; row < height; row++) {
//		for (int col = 0; col < width; col++) {
//			if (src.channels() == 3) {
//				float b = m1.at<Vec3f>(row, col)[0];// blue
//				float g = m1.at<Vec3f>(row, col)[1]; // green
//				float r = m1.at<Vec3f>(row, col)[2]; // red
//
//				// output
//				dst.at<Vec3b>(row, col)[0] = saturate_cast<uchar>(b*alpha + beta);
//				dst.at<Vec3b>(row, col)[1] = saturate_cast<uchar>(g*alpha + beta);
//				dst.at<Vec3b>(row, col)[2] = saturate_cast<uchar>(r*alpha + beta);
//			}
//			else if (src.channels() == 1) {
//				float v = src.at<uchar>(row, col);
//				dst.at<uchar>(row, col) = saturate_cast<uchar>(v*alpha + beta);
//			}
//		}
//	}
//
//	imshow("��after��", dst);
//
//	waitKey(0);
//	return 0;
//}