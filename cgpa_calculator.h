//library created by
//Name: Adigor John Ipeh
//Matric Number: 19/097344002


//Name: Obi Prosper Dakim
//Matric Number: 19/097344104

//Name: Ogar Michael Manu
//Matric Number: 19/097344113


// Function to calculate CGPA based on individual grades and credit hours
float calculateCGPA(const char** grades, const int* creditHours, int numCourses) {
    float totalGradePoints = 0.0;
    int totalCreditHours = 0;

    for (int i = 0; i < numCourses; ++i) {
        std::string grade(grades[i]);

        if (grade == "A") {
            totalGradePoints += 4.0 * creditHours[i];
        } else if (grade == "B") {
            totalGradePoints += 3.0 * creditHours[i];
        } else if (grade == "C") {
            totalGradePoints += 2.0 * creditHours[i];
        } else if (grade == "D") {
            totalGradePoints += 1.0 * creditHours[i];
        } else if (grade == "F") {
            totalGradePoints += 0.0;
        } else {
            // Invalid grade
            return -1.0;
        }

        totalCreditHours += creditHours[i];
    }

    return totalGradePoints / totalCreditHours;
}


