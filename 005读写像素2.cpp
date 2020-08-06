//#include<opencv2/opencv.hpp>
//#include<iostream>
//
//using namespace std;
//using namespace cv;
//
//void main006()
//{
//	Mat src1,src2;
//	src1 = imread("1.jpg");
//	imshow("src1", src1);
//	int height = src1.rows;//ÐÐ
//	int width = src1.cols;//ÁÐ
//	float alpha = 1.2;
//	float beta = 70;
//	src2 = Mat::zeros(src1.size(), src1.type());
//	for (int row = 0;row < height;row++) {
//		for (int col = 0;col < width;col++) {
//			if (src1.channels() == 3) {
//				float b = src1.at<Vec3b>(row, col)[0];
//				float g = src1.at<Vec3b>(row, col)[1];
//				float r = src1.at<Vec3b>(row, col)[2];
//				src2.at<Vec3b>(row, col)[0] = saturate_cast<uchar>(b*alpha + beta);
//				src2.at<Vec3b>(row, col)[1] = saturate_cast<uchar>(g*alpha + beta);
//				src2.at<Vec3b>(row, col)[2] = saturate_cast<uchar>(r*alpha + beta);
//			}
//			else
//			{
//				float v = src1.at<uchar>(row, col);
//				src2.at<uchar>(row, col) = saturate_cast<uchar>(v*alpha + beta);
//			}
//			
//		}
//	}
//	imshow("src2", src2);
//
//	
//	waitKey(0);
//
//}