//#include<opencv2/opencv.hpp>
//#include<iostream>
//
//using namespace std;
//using namespace cv;
//Mat src1 = imread("E:/¸öÈË/Ñ§Ï°/±à³Ì/C++/CPlusPlusTestProgram/LearnOpenCV/image/Girl2.png");
//
//void addLine();
//void addCircle();
//void addPolygon();
//void addRectangle();
//void addEllipse();
//void RandomLineDemo();
//void addText();
//void main()
//{
//	if (!src1.data) {
//		printf("could not load image...\n");
//		return ;
//	}
//	imshow("¡¾input picture¡¿", src1);
//	//addLine();
//	//addRectangle();
//	//addEllipse();
//	//addCircle();
//	//addPolygon();
//	addText();
//	imshow("¡¾addText¡¿", src1);
//	waitKey(0);
//}
//void addLine()
//{
//	Point p1 = Point(src1.cols / 2, src1.rows / 2);
//	Point p2;
//	p2.x = 10;
//	p2.y = 10;
//	Scalar color = Scalar(0, 0, 255);
//	line(src1, p1, p2, color, 1, LINE_4);
//	
//}
//void addRectangle()
//{
//	Rect rect = Rect(20, 10, 150, 200);
//	Scalar color = Scalar(0, 0, 255);
//	rectangle(src1, rect, color, 1, 4);
//
//}
//void addEllipse()
//{
//	Point p1 = Point(src1.cols / 2, src1.rows / 2);
//	Size s1 = Size(src1.cols / 4, src1.rows / 4);
//	Scalar color = Scalar(242, 123, 215);
//	ellipse(src1, p1, s1, 40, 0, 360, color, 1, LINE_AA);
//}
//void addCircle()
//{
//	Point center = Point( src1.cols/2, src1.rows/2);
//	Scalar color = Scalar(0, 255, 255);
//	circle(src1, center, 50,color, 1, 4);
//
//}
//void addPolygon()
//{
//	Point pst[1][6];
//	pst[0][0] = Point(100, 100);
//	pst[0][1] = Point(60, 120);
//	pst[0][2] = Point(80, 150);
//	pst[0][3] = Point(120, 150);
//	pst[0][4] = Point(140, 120);
//	pst[0][5] = Point(100, 100);
//	const Point* ppst[] = { pst[0] };
//	int npt[] = { 6 };
//	Scalar color = Scalar(100, 255, 255);
//	fillPoly(src1, ppst, npt,1, color, 4);//Í¼ÏñÌî³ä
//
//}
//void RandomLineDemo() {//»­Ëæ»úÏßÌõ
//	
//	RNG rng(12345);
//	Point pt1, pt2;
//	for (int i = 0;i < 1000;i++){
//		pt1.x = rng.uniform(0, src1.cols);
//		pt1.y = rng.uniform(0, src1.rows);
//		pt2.x = rng.uniform(0, src1.cols);
//		pt2.y = rng.uniform(0, src1.rows);
//		Scalar color = Scalar(rng.uniform(0,255), rng.uniform(0, 255), rng.uniform(0, 255));
//		cout << "[ " << pt1.x << "," << pt1.y << " ]\tcolor: " <<color<<endl;
//		line(src1, pt1, pt2, color, 1, 8);
//		waitKey(100);
//		putText(src1, "³ÂîÚç÷¡ª¡ªÕÔÃô", Point(50, 200), CV_FONT_BLACK, 2, Scalar(12, 255, 255), 3, 8);
//		imshow("src1", src1);
//	}
//	
//}
//
//void addText() {
//	Point location = Point(200, src1.rows -10);
//	string text = "Yukee--ZhaoMin";
//	putText(src1, text, location, CV_FONT_BLACK, 2, Scalar(12, 255, 255), 3, 8);
//
//}