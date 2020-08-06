///*
//一、霍夫圆检测原理
//	1.参数方程
//	  x = a + Rcos(theta)
//*/
//#define INPUT_TITLE "input image"          // 宏定义，原始图片
//#define OUTPUT_TITLE "HoughCircle picture" // 宏定义，经过霍夫圆变换后的图片
//
//#include<iostream>
//#include<opencv2\opencv.hpp>
//#include<opencv2\core.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main () {
//	//img是最后经过霍夫圆变换的图片，src是通过imread读取的图片，change_src是src需要经过的变换的图片。
//	Mat img, src,change_src;
//	src = imread("E:/个人/学习/编程/C++/CPlusPlusTestProgram/LearnOpenCV/image/circle.bmp");
//	if (!src.data)
//	{
//		cout << "ERROR : could not load image.";
//		return -1;
//	}
//	namedWindow(INPUT_TITLE, CV_WINDOW_AUTOSIZE);
//	namedWindow(OUTPUT_TITLE, CV_WINDOW_AUTOSIZE);
//	imshow(INPUT_TITLE, src);
//
//	//中值滤波，去除椒盐噪声。并转为单通道。
//	medianBlur(src, change_src, 3);
//	cvtColor(change_src, change_src, CV_BGR2GRAY);
//
//	//霍夫圆变换
//	vector<Vec3f> pcircles;
//	HoughCircles(change_src, pcircles, CV_HOUGH_GRADIENT, 1, 10, 100, 30, 5, 70);
//
//	//
//	src.copyTo(img);
//	cout << "pcircles.size() = "<<pcircles.size() << endl;//为了了解HoughCircles中第二个参数的大小。
//	//将圆画在原图片上。
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
////第一个参数，InputArray类型的image，输入图像，即源图像，需为8位的灰度单通道图像。
////第二个参数，InputArray类型的circles，经过调用HoughCircles函数后此参数存储了检测到的圆的输出矢量，每个矢量由包含了3个元素的浮点矢量(x, y, radius)表示。
////第三个参数，int类型的method，即使用的检测方法，目前OpenCV中就霍夫梯度法一种可以使用，它的标识符为CV_HOUGH_GRADIENT，在此参数处填这个标识符即可。
////第四个参数，double类型的dp，用来检测圆心的累加器图像的分辨率于输入图像之比的倒数，且此参数允许创建一个比输入图像分辨率低的累加器。上述文字不好理解的话，来看例子吧。例如，如果dp= 1时，累加器和输入图像具有相同的分辨率。如果dp=2，累加器便有输入图像一半那么大的宽度和高度。
////第五个参数，double类型的minDist，为霍夫变换检测到的圆的圆心之间的最小距离，即让我们的算法能明显区分的两个不同圆之间的最小距离。这个参数如果太小的话，多个相邻的圆可能被错误地检测成了一个重合的圆。反之，这个参数设置太大的话，某些圆就不能被检测出来了。
////第六个参数，double类型的param1，有默认值100。它是第三个参数method设置的检测方法的对应的参数。对当前唯一的方法霍夫梯度法CV_HOUGH_GRADIENT，它表示传递给canny边缘检测算子的高阈值，而低阈值为高阈值的一半。
////第七个参数，double类型的param2，也有默认值100。它是第三个参数method设置的检测方法的对应的参数。对当前唯一的方法霍夫梯度法CV_HOUGH_GRADIENT，它表示在检测阶段圆心的累加器阈值。它越小的话，就可以检测到更多根本不存在的圆，而它越大的话，能通过检测的圆就更加接近完美的圆形了。
////第八个参数，int类型的minRadius,有默认值0，表示圆半径的最小值。
////第九个参数，int类型的maxRadius,也有默认值0，表示圆半径的最大值。
//
////需要注意的是，使用此函数可以很容易地检测出圆的圆心，但是它可能找不到合适的圆半径
//
//*/