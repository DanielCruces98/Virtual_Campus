#include <iostream>
#include "resource.h"
#include "course.h"
#include "fdp.h"
#include "seminar.h"
#include "user.h"
#include "student.h"
#include "professor.h"
#include "administrator.h"
#include "courses_list.h"
#include "seminars_list.h"
#include "students_list.h"


using namespace std;

int main()
{
    FDP f1;
    CoursesList cl1;
    SeminarsList sl1;
    Student s1("pass","id","electr",&f1,&cl1,&sl1);

    return 0;
}
