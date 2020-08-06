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
//	Mat img, src;//img ����ͼ�� ; src ���������ͼ��
//	Mat map_x, map_y;
//	int index = 0;
//
//	img = imread("D:/����/ѧϰ/c++/���Գ���/ConsoleApplication6/image/circle1.bmp");
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
//	//����ӳ���
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
//				//index = 0 ��ͼ����и���ΪΪԭ����1/2��
//				//index = 1��Ϊ���ҷ�ת���б任���в��䣩
//				//index = 2��Ϊ���·�ת���б任���в��䣩
//				//index = 3��Ϊ������ת
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
//һ��ʲô��������ӳ�䣿
//	��˵���ǰ�����ͼ�����
//
//	
//*/