//#define INPUT_TITLE "input image"
//#define OUTPUT_TITLE "remap image"
//
//#include<iostream>
//#include<opencv2\opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//void updata_map(Mat img, Mat map_x, Mat map_y, int index);
//
//int main023() {
//	Mat img, src;//img 输入图像 ; src 最终输出的图像
//	Mat map_x, map_y;
//	int index = 0;
//
//	img = imread("D:/个人/学习/c++/测试程序/ConsoleApplication6/image/circle1.bmp");
//	if (!img.data)
//	{
//		cout << "ERROR : could not load image.";
//		return -1;
//	}
//	namedWindow(INPUT_TITLE, CV_WINDOW_AUTOSIZE);
//	namedWindow(OUTPUT_TITLE, CV_WINDOW_AUTOSIZE);
//
//	imshow(INPUT_TITLE, img);
//
//	//建立映射表
//	map_x.create(img.size(), CV_32FC1);
//	map_y.create(img.size(), CV_32FC1);
//
//	int c = 0;
//	while (true)
//	{
//		c = waitKey(500);
//		index = c % 4;
//		if ((char)c == 27)
//		{
//			break;
//		}
//		updata_map(img, map_x, map_y, index);
//		remap(img, src, map_x, map_y, INTER_LINEAR, BORDER_CONSTANT, Scalar(0, 0, 255));
//		imshow(OUTPUT_TITLE, src);
//	}
//
//	
//	return 0;
//}
//
//void updata_map(Mat img,Mat map_x, Mat map_y, int index) {
//	for (int row = 0; row < img.rows; row++)
//	{
//		for (int col = 0; col < img.cols; col++)
//		{
//			switch (index)
//			{
//				//index = 0 ，图像的行跟列为为原来的1/2。
//				//index = 1，为左右翻转（列变换，行不变）
//				//index = 2，为上下翻转（行变换，列不变）
//				//index = 3，为中心旋转
//				
//			case 0:
//				if (col > (img.cols*0.25) && col<(img.cols*0.75) && row>(img.rows*0.25) && row < (img.rows*0.75)) {
//					map_x.at<float>(row, col) = 2 * (col - (img.cols*0.25));
//					map_y.at<float>(row, col) = 2 * (row - (img.rows*0.25)-0.25);
//				}
//				else
//				{
//					map_x.at<float>(row, col) = 0;
//					map_y.at<float>(row, col) = 0;
//				}
//				break;
//			case 1:
//				map_x.at<float>(row, col) = (img.cols - col - 1);
//				map_y.at<float>(row, col) = row;
//				break;
//			case 2:
//				map_x.at<float>(row, col) = col;
//				map_y.at<float>(row, col) = (img.rows - row - 1);
//				break;
//			case 3:
//				map_x.at<float>(row, col) = (img.cols - col - 1);
//				map_y.at<float>(row, col) = (img.rows - row - 1);
//				break;
//
//			default:
//				break;
//			}
//		}
//	}
//}
///*
//一、什么是像素重映射？
//	简单说就是把输入图像各点
//
//	
//*/