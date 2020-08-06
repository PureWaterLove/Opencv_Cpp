///*
//һ������Բ���ԭ��
//	1.��������
//	  x = a + Rcos(theta)
//*/
//#define INPUT_TITLE "input image"          // �궨�壬ԭʼͼƬ
//#define OUTPUT_TITLE "HoughCircle picture" // �궨�壬��������Բ�任���ͼƬ
//
//#include<iostream>
//#include<opencv2\opencv.hpp>
//#include<opencv2\core.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main () {
//	//img����󾭹�����Բ�任��ͼƬ��src��ͨ��imread��ȡ��ͼƬ��change_src��src��Ҫ�����ı任��ͼƬ��
//	Mat img, src,change_src;
//	src = imread("E:/����/ѧϰ/���/C++/CPlusPlusTestProgram/LearnOpenCV/image/circle.bmp");
//	if (!src.data)
//	{
//		cout << "ERROR : could not load image.";
//		return -1;
//	}
//	namedWindow(INPUT_TITLE, CV_WINDOW_AUTOSIZE);
//	namedWindow(OUTPUT_TITLE, CV_WINDOW_AUTOSIZE);
//	imshow(INPUT_TITLE, src);
//
//	//��ֵ�˲���ȥ��������������תΪ��ͨ����
//	medianBlur(src, change_src, 3);
//	cvtColor(change_src, change_src, CV_BGR2GRAY);
//
//	//����Բ�任
//	vector<Vec3f> pcircles;
//	HoughCircles(change_src, pcircles, CV_HOUGH_GRADIENT, 1, 10, 100, 30, 5, 70);
//
//	//
//	src.copyTo(img);
//	cout << "pcircles.size() = "<<pcircles.size() << endl;//Ϊ���˽�HoughCircles�еڶ��������Ĵ�С��
//	//��Բ����ԭͼƬ�ϡ�
//	for (int i = 0; i < pcircles.size(); i++)
//	{
//		Vec3f cc = pcircles[i];
//		circle(img, Point(cc[0], cc[1]), cc[2], Scalar(0, 0, 255), 2, LINE_AA);
//		circle(img, Point(cc[0], cc[1]), 2, Scalar(255, 0, 4), 2, LINE_AA);
//	}
//
//	imshow(OUTPUT_TITLE, img);
//
//	waitKey(0);
//	return 0;
//}
//
///*
//
////��һ��������InputArray���͵�image������ͼ�񣬼�Դͼ����Ϊ8λ�ĻҶȵ�ͨ��ͼ��
////�ڶ���������InputArray���͵�circles����������HoughCircles������˲����洢�˼�⵽��Բ�����ʸ����ÿ��ʸ���ɰ�����3��Ԫ�صĸ���ʸ��(x, y, radius)��ʾ��
////������������int���͵�method����ʹ�õļ�ⷽ����ĿǰOpenCV�оͻ����ݶȷ�һ�ֿ���ʹ�ã����ı�ʶ��ΪCV_HOUGH_GRADIENT���ڴ˲������������ʶ�����ɡ�
////���ĸ�������double���͵�dp���������Բ�ĵ��ۼ���ͼ��ķֱ���������ͼ��֮�ȵĵ������Ҵ˲���������һ��������ͼ��ֱ��ʵ͵��ۼ������������ֲ������Ļ����������Ӱɡ����磬���dp= 1ʱ���ۼ���������ͼ�������ͬ�ķֱ��ʡ����dp=2���ۼ�����������ͼ��һ����ô��Ŀ�Ⱥ͸߶ȡ�
////�����������double���͵�minDist��Ϊ����任��⵽��Բ��Բ��֮�����С���룬�������ǵ��㷨���������ֵ�������ͬԲ֮�����С���롣����������̫С�Ļ���������ڵ�Բ���ܱ�����ؼ�����һ���غϵ�Բ����֮�������������̫��Ļ���ĳЩԲ�Ͳ��ܱ��������ˡ�
////������������double���͵�param1����Ĭ��ֵ100�����ǵ���������method���õļ�ⷽ���Ķ�Ӧ�Ĳ������Ե�ǰΨһ�ķ��������ݶȷ�CV_HOUGH_GRADIENT������ʾ���ݸ�canny��Ե������ӵĸ���ֵ��������ֵΪ����ֵ��һ�롣
////���߸�������double���͵�param2��Ҳ��Ĭ��ֵ100�����ǵ���������method���õļ�ⷽ���Ķ�Ӧ�Ĳ������Ե�ǰΨһ�ķ��������ݶȷ�CV_HOUGH_GRADIENT������ʾ�ڼ��׶�Բ�ĵ��ۼ�����ֵ����ԽС�Ļ����Ϳ��Լ�⵽������������ڵ�Բ������Խ��Ļ�����ͨ������Բ�͸��ӽӽ�������Բ���ˡ�
////�ڰ˸�������int���͵�minRadius,��Ĭ��ֵ0����ʾԲ�뾶����Сֵ��
////�ھŸ�������int���͵�maxRadius,Ҳ��Ĭ��ֵ0����ʾԲ�뾶�����ֵ��
//
////��Ҫע����ǣ�ʹ�ô˺������Ժ����׵ؼ���Բ��Բ�ģ������������Ҳ������ʵ�Բ�뾶
//
//*/