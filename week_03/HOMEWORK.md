# Homework - Week 3


Task 1 - Уникални цифри (пренаписано)
----------
<br>

Пренапишете задачата за уникалните цифри, като трябва да вземете отделните цифри на числото БЕЗ да го разделяте на 10 няколко пъти, както го решихме в час:

```c++     
fourth = num % 10; 
num /= 10;
third = num % 10;
num /= 10;
second = num % 10;
first = num / 10;
```
Освен това, напишете булевия израз <b>hasUniqueDigits</b> по противположен начин от написаното в час (сетете се за законите на Де Морган): 
```c++
bool hasUniqueDigits =  (first != second) && 
                        (second != third) &&
                        (third != fourth) && 
                        (fourth != first) &&
                        (first != third)  &&
                        (second != fourth);
```

<br>

Task 2 - Три числа
----------
<br>

Напишете програма, гкоято прочита три числа и трябва да изведе най-голямото от трите.

<b> Нека задачата бъде написана по два варианта: </b>

- с помощна променлива
- само с булеви изрази


Пример

Вход: 5 4 12

Изход: 12

<br>

Task 3 - Триъгълник
----------
<br>

Да се напише програма, която въвежда от клавиатурата три цели числа <b>a, b и c</b>.

Програмата да проверява дали съществува триъгълник със страни a, b и c и ако съществува да се определи видът му: равностранен, равнобедрен или разностранен.

Пример

Вход: 3 3 5 

Изход: exist, isosceles

Пример 

Вход: 3 6 10 

Изход: does not exist
