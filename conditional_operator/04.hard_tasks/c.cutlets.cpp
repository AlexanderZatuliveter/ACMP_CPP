#include <iostream>
using namespace std;

string fn(int capacity, int min_for_1_side, int count) {
    if (count == 0) return "0";
    if (count <= capacity) return to_string(min_for_1_side * 2);

    int loops = (2 * count + capacity - 1) / capacity;
    return to_string(loops * min_for_1_side);
}

int main1() {
    int capacity, min_for_1_side, count;
    cin >> capacity >> min_for_1_side >> count;
    cout << fn(capacity, min_for_1_side, count);
    return 0;
}

void expect(string actual, string expected, string test_name = "") {
    if (actual == expected) {
        cout << "[OK] " << test_name << endl;
    } else {
        cout << "[FAIL] " << test_name << endl;
        cout << "   Expected: \"" << expected << "\"" << endl;
        cout << "   Got:      \"" << actual << "\"" << endl;
    }
}

int main() {
    // INPUT.TXT -> OUTPUT.TXT 
    // Формат: fn(k, m, n)
    
    // Базовые тесты из условия
    expect(fn(1, 1, 1), "2", "1 котлета, 1 место");
    expect(fn(2, 2, 1), "4", "1 котлета, 2 места");

    // Тест на "эффект перекладывания" (Classic Case)
    // Если k=2, m=5, n=3: 
    // 1-я партия (5 мин): К1 сторона А, К2 сторона А.
    // 2-я партия (5 мин): К1 сторона Б, К3 сторона А. (К2 убрали в сторону)
    // 3-я партия (5 мин): К2 сторона Б, К3 сторона Б.
    // Итого: 15 минут. Твоя функция сейчас выдаст 20.
    expect(fn(2, 5, 3), "15", "3 котлеты на 2 места (оптимально)");

    // Тест, когда котлет меньше, чем мест
    expect(fn(10, 5, 4), "10", "Котлет меньше, чем мест");

    // Крупные партии
    expect(fn(2, 1, 4), "4", "Четное количество котлет");
    expect(fn(3, 1, 5), "4", "Некратное количество котлет");

    // Краевые случаи
    expect(fn(30000, 30000, 30000), "60000", "Max constraints");
    expect(fn(1, 1, 10), "20", "Последовательная жарка");
    return 0;
}
