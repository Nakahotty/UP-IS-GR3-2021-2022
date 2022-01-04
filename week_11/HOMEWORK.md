## Динамична памет:
<br>

### Динамичен масив
<br>

Досега винаги ползвахме array[] с някакъв капацитет в квадратните скоби. Днес обаче ще се абстрахираме от това и ще мислим по - динамично.

Да се напише програма, която работи с някакъв масив от цели числа. За този масив да се направи меню от команди. Командите са следните: 

**0** - Приключване на програмата и принтиране на масива.

**1 - push back.** Потребителя е попитан за цяло число и след въвеждането му то да се залепи за края на масива. Ако капацитета на масива бъде надвишен да се използва динамична памет по подходящ начин!  

**2 - push front.** Потребителя е попитан за цяло число и след въвеждането му то да се залепи за началото на масива. Ако капацитета на масива бъде надвишен да се използва динамична памет по подходящ начин!  

**3 - copy.** Потребителят трябва да въведе нов масив и нашия масив да стане копие на въведения масив.  

**4 - pop_back.** Изтрива се последния елемент на масива.  

**5 - pop_front.** Изтрива се първия елемент на масива.

## За всяка команда да се напише функция!

-----------------------------
<br>

## Указатели:


### Task 2
Да се напише функция, която приема като аргументи указател към масив и размера на масива и го сортира във възходящ ред (като упражнение да се направи и за низходящ).

**Примерен вход и изход при аргументи {4, 3, 1, 5, 2} 5:** 1 2 3 4 5

**Примерен вход и изход при аргументи {3, 56, -2, 2, 55 ,2} 6:** -2 2 2 3 55 56

<br>

### Task 3

Да се напише функция , която , по подадени указатели към два масива и съответните им размери и подаден трети празен масив и размер 0 , слива първите два масива в третия , така че полученият масив отново да е сортиран. Приемаме , че масивите са от цели числа. (Обединяване на двата масива в един и след това прилагане на сортиране не се приема).
*Hint: Ще ни олесни ако двата масива са сортирани.*

**Примерен вход и изход при аргументи { } 0 {1, 3, 2} 3 {5, 4} 2:** 1 2 3 4 5

<br>

### Task 4

Да се напише функция , която по даден масив от дробни числа ( и неговият размер ) намира индекса на последния негов елемент , който е равен на средното аритметично от неговите съседни елементи ( да се има превдивд, че крайните елементи нямат два съседа)

**Примерен вход и изход при аргументи {1 2 3 4 5 6 3} 7:** Index 4 

**Примерен вход и изход при аргументи {3 2 3} 3:** No such index

<br>

### Task 5

Да се напише функция , която , по даден масив от цели числа ( и неговият размер ) и цяло число n, премахва от масива всички срещания на даденото число.

**Примерен вход и изход при аргументи {1 2 2 3 7} 5 2 :** {1 3 7}

<br>

### Task 6

Да се напише функция , която след приемане на аргументи два символни низа, залепва втория низ за първия.(Да се напише отделна функция, която намира дължините им).  

**Примерен вход и изход при аргументи ala bala :** alabala (След пускане на функцията ако принтираме първия низ трябва да изведе alabala)