# ТиМП лаба 2

## Task 1

### 1. Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).

### 2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.
```
echo "# Timp2" >> README.md
git init	
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/Sxeigumen/Timp.git
git push -u origin main
```
### 3. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.

```
touch hello_world.cpp


#include <iostream>
using namespace std;
int main()
 {
  cout << "Hello world!";
  return 0;
}
```
### 4. Добавьте этот файл в локальную копию репозитория.
### 5. Закоммитьте изменения с осмысленным сообщением.
```
git commit -a -m ”New .cpp file”
```
### 6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение Hello world from @name, где @name имя пользователя.

```
cat > hello_world.cpp << EOF
#include <iostream>
#include<string>
using namespace std;
int main(){
string name;
cout << "What is your name?" ;
cin >> name;
cout << "Hello World from " << name;
return 0;
}
EOF
```
### 7. Закоммитьте новую версию программы. Почему не надо добавлять файл повторно git add?
```
git commit -a -m “Version new”
```
### 8. Запуште изменения в удалёный репозиторий.
```
git push
```

### 9. Проверьте, что история коммитов доступна в удалёный репозитории.



## Task 2


### 1. В локальной копии репозитория создайте локальную ветку patch1.
```
git checkout -b patch1
```
### 2. Внесите изменения в ветке patch1 по исправлению кода и избавления от using namespace std;.
```
cat > hello_world.cpp << EOF
#include <iostream>
#include<string>
int main(){
std::string name;
std::cout << “What is your name?” ;
std::cin >> name;
std::cout << “Hello World from ” << name;
return 0;}
EOF

```
### 3. commit, push локальную ветку в удалённый репозиторий.
```
git commit -a -m "hello_world.cpp without //using namespace std;// vers.3"
git push origin patch1
```
### 4. Проверьте, что ветка patch1 доступна в удалёный репозитории.
### 5. Создайте pull-request patch1 -> master.
### 6. В локальной копии в ветке patch1 добавьте в исходный код комментарии.
### 7. commit, push.
```
git commit -a -m "hello_world.cpp with comment"
git push origin patch1
```
### 8. Проверьте, что новые изменения есть в созданном на шаге 5 pull-request
### 9. В удалённый репозитории выполните слияние PR patch1 -> master и удалите ветку patch1 в удаленном репозитории.
### 10. Локально выполните pull.
```
Git pull
```
### 11. С помощью команды git log просмотрите историю в локальной версии ветки master.
```
Git log
```
### 12. Удалите локальную ветку patch1.
```
git branch -d patch1
```

## Task 2

### 1. Создайте новую локальную ветку patch2.
```
git checkout -b patch2
```
### 2. Измените code style с помощью утилиты clang-format. Например, используя опцию -style=Mozilla.
```
clang-format -style=Mozilla hello_world.cpp
```
### 3. commit, push, создайте pull-request patch2 -> master.
```
git commit -a -m "change code style"
git push origin patch2
```
### 4. В ветке master в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.
### 5. Убедитесь, что в pull-request появились конфликтны.
### 6. Для этого локально выполните pull + rebase (точную последовательность команд, следует узнать самостоятельно). Исправьте конфликты.
```
git pull origin main
git rebase main
```
### 7. Сделайте force push в ветку patch2
```
git push origin patch2 –force
```
### 8. Убедитель, что в pull-request пропали конфликтны.
### 9. Вмержите pull-request patch2 -> master.





