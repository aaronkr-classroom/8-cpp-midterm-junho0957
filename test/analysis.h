
#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <algorithm>
#include <fstream> // 에런 (파일을 사용하기 위해)
#include <ios>
#include <iomanip>
#include <iostream> // cin/cout을 사용하기 위해
#include <stdexcept>
#include <string>
#include <vector>

#include "analysis.h"
#include "Student_info.h"
#include "grade.h"
#include "median.h"

using namespace std;

bool did_all_hw(const Student_info&);
double grade_aux(const Student_info&);

double median_analysis(const vector<Student_info>&);
double optimistic_median(const Student_info&);

double optimistic_median_analysis(const vector<Student_info>&);
double average(const vector<double>&);
double average_grade(const Student_info&);
double average_analysis(const vector<Student_info>&);

void write_analysis(ostream& out, const string& name,
	double analysis(const vector<Student_info>&),
	const vector<Student_info>& did,
	const vector<Student_info>& didnt);




#endif