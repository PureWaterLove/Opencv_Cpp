//#include <opencv2/core/core.hpp> 
//#include <opencv2/imgcodecs.hpp> 
//#include <opencv2/opencv.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <iostream>
//
//using namespace cv;
//using namespace std;
//int main(int argc, char** args) {
//	Mat image = imread("E:/����/ѧϰ/���/C++/CPlusPlusTestProgram/LearnOpenCV/image/hand.jpg", IMREAD_COLOR);
//	if (image.empty()) {
//		cout << "could not find the image resource..." << std::endl;
//		return -1;
//	}
//
//	//image = Scalar(0);
//	int height = image.rows;
//	int width = image.cols;
//	int channels = image.channels();
//	printf("height=%d width=%d channels=%d", height, width, channels);
//
//	Rect r(10, 10, 350, 200);  //����ѡ��
//	Mat smallImg = image(r);  //ͼ��ָ�
//
//	for (int row = 0; row < height; row++) {
//		for (int col = 0; col < width; col++) {
//			if (channels == 3) {
//				image.at<Vec3b>(row, col)[0] = 0; // blue
//				image.at<Vec3b>(row, col)[1] = 0; // green
//				
//
//			}
//		}
//	}
//	
//	namedWindow("My Image", CV_WINDOW_AUTOSIZE);
//	imshow("My Image", image);
//
//	namedWindow("Small Image", CV_WINDOW_AUTOSIZE);
//	imshow("Small Image", smallImg);
//	waitKey(0);
//	return 0;
//}