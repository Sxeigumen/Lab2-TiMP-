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
### 8. git push











