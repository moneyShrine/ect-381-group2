//library created by
//Name: Ojong Catherine
//Matric Number: 19/097344117


//Name: Nwankwo Kelechukwu Divine
//Matric Number: 19/097344101


// Function to calculate individual grades based on marks
char calculateGrade(float marks) {
    if (marks >= 90.0) {
        return 'A';
    } else if (marks >= 80.0) {
        return 'B';
    } else if (marks >= 70.0) {
        return 'C';
    } else if (marks >= 60.0) {
        return 'D';
    } else {
        return 'F';
    }
}
