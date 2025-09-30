// Консольний застосунок для виконання трьох завдань.
// Коментарі українською. Увесь інший текст (підказки/вивід) — англійською.

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    using std::cin;
    using std::cout;
    using std::endl;

    // =========================
    // Task 1. Integer38
    // Для N пасажирів знайти кількість повних автобусів і скільки пасажирів
    // поїдуть «зайвим» автобусом (вмістимість автобуса 45 місць).
    // Використати цілочисельне ділення та залишок від ділення.
    // =========================
    cout << "Task 1. Integer38" << endl;
    int passengers = 0;            // кількість пасажирів N
    const int busCapacity = 45;    // місткість автобуса
    cout << "Enter number of passengers (N): ";
    cin >> passengers;

    // Повні автобуси: ділення націло; пасажири у «зайвому» автобусі: залишок
    int fullBuses = passengers / busCapacity;
    int extraBusPassengers = passengers % busCapacity;

    cout << "Full buses: " << fullBuses << endl;
    cout << "Passengers in extra bus: " << extraBusPassengers << endl << endl;

    // =========================
    // Task 2. Boolean24
    // Перевірити, чи квадратне рівняння Ax^2 + Bx + C = 0 має дійсні корені.
    // Для цього дискримінант D = B^2 - 4AC має бути >= 0.
    // Вивести true/false з використанням std::boolalpha.
    // =========================
    cout << "Task 2. Boolean24" << endl;
    int A = 0, B = 0, C = 0; // коефіцієнти рівняння (A != 0 за умовою)
    cout << "Enter A, B, C (A != 0): ";
    cin >> A >> B >> C;

    // Обчислення дискримінанта
    long long discriminant = static_cast<long long>(B) * B - 4LL * A * C;
    bool hasRealRoots = (discriminant >= 0);
    cout << std::boolalpha << "Has real roots: " << hasRealRoots << endl << endl;

    // =========================
    // Task 3. Math21 (з таблиці 3)
    // Обчислити y = (arctg(x^2) + 1/3) / sqrt(x^4 + 1)
    // де arctg — це atan() з <cmath>.
    // Число PI визначити як константу дійсного типу 3.141592 (за вимогою).
    // =========================
    cout << "Task 3. Math21" << endl;
    const double PI = 3.141592; // константа PI (хоч у формулі не використовується явно, додано за вимогою)
    (void)PI; // щоб уникнути попередження про невикористану змінну, якщо PI не потрібна далі

    double x = 0.0; // змінна дійсного типу
    cout << "Enter x (double): ";
    cin >> x;

    // Обчислення проміжних значень для читабельності
    double x2 = x * x;          // x^2
    double x4 = x2 * x2;        // x^4
    double numerator = std::atan(x2) + (1.0 / 3.0);
    double denominator = std::sqrt(x4 + 1.0);

    double y = numerator / denominator;
    cout << std::fixed << std::setprecision(6);
    cout << "y = " << y << endl;

    return 0;
}


