//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
////全局变量
//Mat src, dst, gray_src;
//int thresholdValue = 127;
//int thresholdMax = 255;
//int typeValue = 2;
//int typeMax = 4;
//const char* output_title = "binary img";//窗口名称“二值化图像”
//
//void Threshold_Demo(int, void*);//二值化演示函数
//
////主函数入口
//int main()
//{
//	src = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/girl2.png");
//	if (!src.data)
//	{
//		cout << "could not load image..." << endl;
//		return -1;
//	}
//	imshow("show image", src);
//	namedWindow(output_title, CV_WINDOW_AUTOSIZE);
//	createTrackbar("Threshold Value", output_title, &thresholdValue, thresholdMax, Threshold_Demo);//动态调整
//	createTrackbar("Type Value", output_title, &typeValue, typeMax, Threshold_Demo);
//
//	Threshold_Demo(0, 0);
//	imshow(output_title, dst);
//	waitKey(0);
//	return 0;
//}
//void Threshold_Demo(int, void*)
//{
//	//cvtColor(src, gray_src, CV_BGR2GRAY);
//	threshold(src, dst, thresholdValue, thresholdMax, typeValue);
//	//switch (typeValue)
//	//{
//	//	case 0:
//	//		cout << "typeValue 为二进制阈值"  << endl;
//	//		break;
//	//	case 1:
//	//		cout << "typeValue 为反二进制阈值 " << endl;
//	//		break;
//	//	case 2 :
//	//		cout << "typeValue 为截断阈值 "  << endl;
//	//		break;
//	//	case 3:
//	//		cout << "typeValue 为0阈值 "  << endl;
//	//		break;
//	//	case 4:
//	//		cout << "typeValue 为反0阈值 "  << endl;
//	//		break;
//	//	default:
//	//		break;
//	//}
//	imshow(output_title, dst);
//
//	
//}