// boundinx_boxes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>

typedef CGAL::Exact_predicates_inexact_constructions_kernel Kernel;
typedef Kernel::Point_2 Point2;
typedef Kernel::Triangle_2 Triangle2;

int main()
{

    Point2 p1(-5.2, 1.7);
    Point2 p2(-7.1, -6.3);
    Point2 p3(-0.9, -2.3);

    Point2 p4(-2.8, -4.5);
    Point2 p5(4.5, -1.1);
    Point2 p6(2.4, -7.6);

    Point2 p7(5.5, 8.8);
    Point2 p8(-7.7, 8.3);
    Point2 p9(1.3, 2.9);

    Triangle2 t1(p1, p2, p3);
    Triangle2 t2(p4, p5, p6);
    Triangle2 t3(p7, p8, p9);

    CGAL::Bbox_2 bb1 = t1.bbox();
    CGAL::Bbox_2 bb2 = t2.bbox();
    CGAL::Bbox_2 bb3 = t3.bbox();

    std::cout << CGAL::do_overlap(bb1, bb2) << "\n"; //true
    std::cout << CGAL::do_overlap(bb1, bb3) << "\n"; //false
    std::cout << CGAL::do_overlap(bb2, bb3) << "\n"; //false

    std::cout << CGAL::do_overlap(bb1, bb1) << "\n";
 
}

