//#define INPUT_TITLE "Input Image"
//#define OUTPUT_TITLE "Back Projection"
//#define HIST_TITLE "Histogram"
//
//#include<iostream>
//#include<opencv2/opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//
//
///*��������������������������������������弰��ʼ������������������������ */
//Mat src, hsv_src, hue, backProjectionImg;
//int bins = 12;
//int nchannels[] = { 0,0 };
//
///*�����������������������������������躯�������������������������������� */
//void Hist_And_BackProjection(int, void*);
//
//
//int main027() {
//	/*��������������������������ȫ�ֱ����ĸ�ֵ�������������������������� */
//	//1.ͼ������
//	src = imread("E:/����/ѧϰ/���/C++/CPlusPlusTestProgram/LearnOpenCV/image/SunWuKong.jpg");
//	if (!src.data)
//	{
//		cout << "ERROR : could not load image.\n";
//		return -1;
//	}
//	//2.��ͼ��ת��ΪHSVͼ��
//	cvtColor(src, hsv_src, CV_BGR2HSV);
//
//	//3.����һ��ͼ��
//	hue.create(hsv_src.size(), hsv_src.depth());
//
//	//��������
//	namedWindow(INPUT_TITLE, CV_WINDOW_AUTOSIZE);
//	namedWindow(OUTPUT_TITLE, CV_WINDOW_AUTOSIZE);
//	namedWindow(HIST_TITLE, CV_WINDOW_AUTOSIZE);
//
//	//������ͼ���п���ĳͨ�������ͼ�����ض���ͨ��
//	mixChannels(&hsv_src, 1, &hue, 1, nchannels, 1);
//
//	//��̬����ֱ��ͼ�� bins ����������ͶӰ
//	createTrackbar("Histogram Bins", INPUT_TITLE, &bins, 180, Hist_And_BackProjection);
//	Hist_And_BackProjection(0, 0);
//
//	imshow(INPUT_TITLE, src);
//
//	waitKey(0);
//	return 0;
//}
//
//
///*�����������������������������������躯��ʵ�֡������������������������� */
//void Hist_And_BackProjection(int, void*) {
//
//	//�ֲ�����
//	float range[] = { 0,180 };
//	const float *histRanges = { range };
//	int hist_h = 400;
//	int hist_w = 400;
//	int bin_w = hist_w / bins;
//	Mat h_hist;
//	Mat histImage(hist_w, hist_h, CV_8UC3, Scalar(0, 0, 0));
//
//	//ֱ��ͼ���㼰��һ������
//	calcHist(&hue, 1, 0, Mat(), h_hist, 1, &bins, &histRanges, true, false);
//	normalize(h_hist, h_hist, 0, 255, NORM_MINMAX, -1, Mat());
//
//	//ֱ��ͼ����ͶӰ
//	calcBackProject(&hue, 1, 0, h_hist, backProjectionImg, &histRanges, 1, true);
//
//	//��ֱ��ͼ�ֲ�ͼ
//	for (int i = 0; i < bins; i++)
//	{
//		/*rectangle(histImage,
//			Point((i - 1)*bin_w, (hist_h - cvRound(h_hist.at<float>(i - 1)*(400 / 255)))),
//			Point(i*bin_w, (hist_h - cvRound(h_hist.at<float>(i)*(400 / 255)))),
//			Scalar(0, 0, 255),
//			-1);*/
//
//		rectangle(histImage,
//			Point((i - 1)*bin_w, (hist_h - cvRound(h_hist.at<float>(i - 1)*(400 / 255)))),
//			Point(i*bin_w, hist_h),
//			Scalar(0, 0, 255),
//			-1);
//	}
//
//	imshow(OUTPUT_TITLE, backProjectionImg);
//	imshow(HIST_TITLE, histImage);
//
//}
