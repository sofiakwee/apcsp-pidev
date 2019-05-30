struct Student {
  char firstname[256];
  char lastname[256];
  int age;
  int studentid;
};

void printStudentByVal(struct Student student);

void printStudentByPtr(struct Student* student);

