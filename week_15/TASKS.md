# Tasks - Week 15

### Задача 1 
Да се напише функция , която приема като аргументи указател към масив и размера на масива и го обръща . Например , а ={1, 2, 3, 4, 5} → reverse(a, 5) → a : 5, 4, 3, 2, 1. (Ще го направим и с динамичен масив)

### Задача 2
Да се напише функция , която след приемане на аргументи два символни низа, залепва втория низ за първия.(Да се напише отделна функция, която намира дължините им).

Примерен вход и изход при аргументи ala bala : alabala (След пускане на функцията ако принтираме първия низ трябва да изведе alabala)

### Моята прекрасна задача :)
Дадени са два символни низа с дължина най-много 15 символа и естествено число k. Напишете функция, приемаща двата символни низа и числото k, която трябва да върне символен низ, съставен от елементите на първия низ без последните k от него, конкатениран с първите k елемента от втория низ.

Пример:

str1: ‘hellomydear’

str2: ‘darling’

k = 4

result: ’hellomydarl’

### Задача 3

Да се дефинира структура Book определяща книгата по име на книгата , година, цена и име на автора . За структурата да бъдат реализирани

- функции, които връщат годината и цената на книга
- функция която определя дали дадена книга е нова (<2021)
- функция която разменя цените на 2 книги

Направете в main масив от книги и напишете функция, която сортира книгите по година. Напишете функция която намира броя на новите книги в масива.

### Задача 4
Да се напише рекурсивна функция, която приема естествено число n>0 и намира всички булеви вектори с дължина 2*n, такива че броят на единиците в първата и втората половина съвпада.  

Примери:
Вход: n = 3,

Изход: 
011011, 001001, 011101, 010001, 101011, 111111,
110011, 101101, 100001, 110101, 001010, 011110, 
010010, 001100, 000000, 010100, 101110, 100010, 
110110, 100100

Вход: n = 2,

Изход: 
0101, 1111, 1001, 0110, 0000, 1010