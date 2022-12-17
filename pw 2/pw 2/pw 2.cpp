
// ПІБ
string studentFullName = "Студетт 1";
// Індитифікатор студента/залікової книжки
unsigned int studentID = 1;
// Вік студента
unsigned short int studentAge = 18;
// Поточний рік навчання (курс)
unsigned short int currentStudyYear = 1;
// Чи навчається студент?
bool isStuding = true;
// Адреса прописки студента
string originAddress = "Київ, Україна";
// Освітній ступінь студента
string degree = "Бакалавр";
// Навчальна група
string group = degree + to_string(currentStudyYear);

unsigned int totalMemoryInBytes = sizeof(studentFullName) +
sizeof(group) +
sizeof(studentID) +
sizeof(studentAge) +
sizeof(currentStudyYear) +
sizeof(isStuding) +
sizeof(originAddress) +
sizeof(degree);

count << "ПІБ студента:\t\t" << studentFullName << endl;
count << "Група:\t\t\t" << group << endl;
count << "Номер залікової книжки:\t" << studentID << endl;
count << "Вік студента:\t\t" << studentAge << endl;
count << "Рік навчання:\t\t" << currentStudyYear << endl;
count << "Чи ще навчається:\t" << ((isStuding)) << endl;
count << "Адреса:\t\t\t" << originAddress << endl;
count << "Освітній ступінь\t" << degree << endl;

count << "Загальний об'єм використанної пам'яті (в байтах):\t" << totalMemoryInBytes << endl;
