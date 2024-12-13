# Create a module to track academic
# performance.
# Steps
# 1. Add a new course, along with its
# total credits and earned points.
# 2. Drop a course (some courses are
# heavy).
# 3. Print the whole academic record.
# 4. Know the current CGPA = sum of
# (credits * points) / sum of credits

academic_record = {}


def add_course(course_name, credits, points):
    academic_record[course_name] = (credits, points)
    print(f"Course '{course_name}' added successfully.")


def drop_course(course_name):
    if course_name in academic_record:
        del academic_record[course_name]
        print(f"Course '{course_name}' dropped successfully.")
    else:
        print(f"Course '{course_name}' not found in the record.")


def print_academic_record():
    if not academic_record:
        print("No courses found in the academic record.")
        return

    print("\nAcademic Record:")
    for course, (credits, points) in academic_record.items():
        print(f"Course: {course}, Credits: {credits}, Points: {points}")


def calculate_cgpa():
    total_credits = 0
    total_weighted_points = 0

    for credits, points in academic_record.values():
        total_credits += credits
        total_weighted_points += credits * points

    if total_credits == 0:
        print("No courses found to calculate CGPA.")
    else:
        cgpa = total_weighted_points / total_credits
        print(f"\nCurrent CGPA: {cgpa:.2f}")


while True:
    print("\n1. Add Course\n2. Drop Course\n3. Print Academic Record\n4. Calculate CGPA\n5. Exit")
    choice = int(input("Enter your choice: "))

    if choice == 1:
        course_name = input("Enter course name: ")
        credits = int(input("Enter total credits for the course: "))
        points = float(input(f"Enter earned points for {course_name}: "))
        add_course(course_name, credits, points)

    elif choice == 2:
        course_name = input("Enter course name to drop: ")
        drop_course(course_name)

    elif choice == 3:
        print_academic_record()

    elif choice == 4:
        calculate_cgpa()

    elif choice == 5:
        print("Exiting...")
        break

    else:
        print("Invalid choice. Please try again.")
