//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
////ȫ�ֱ���
//Mat src, dst, gray_src;
//int thresholdValue = 127;
//int thresholdMax = 255;
//int typeValue = 2;
//int typeMax = 4;
//const char* output_title = "binary img";//�������ơ���ֵ��ͼ��
//
//void Threshold_Demo(int, void*);//��ֵ����ʾ����
//
////���������
//int main()
//{
//	src = imread("E:/����/ѧϰ/���/C++/CPlusPlusTestProgram/LearnOpenCV/image/girl2.png");
//	if (!src.data)
//	{
//		cout << "could not load image..." << endl;
//		return -1;
//	}
//	imshow("show image", src);
//	namedWindow(output_title, CV_WINDOW_AUTOSIZE);
//	createTrackbar("Threshold Value", output_title, &thresholdValue, thresholdMax, Threshold_Demo);//��̬����
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
//	//		cout << "typeValue Ϊ��������ֵ"  << endl;
//	//		break;
//	//	case 1:
//	//		cout << "typeValue Ϊ����������ֵ " << endl;
//	//		break;
//	//	case 2 :
//	//		cout << "typeValue Ϊ�ض���ֵ "  << endl;
//	//		break;
//	//	case 3:
//	//		cout << "typeValue Ϊ0��ֵ "  << endl;
//	//		break;
//	//	case 4:
//	//		cout << "typeValue Ϊ��0��ֵ "  << endl;
//	//		break;
//	//	default:
//	//		break;
//	//}
//	imshow(output_title, dst);
//
//	
//}