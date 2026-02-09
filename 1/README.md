# Sine Array Sum

Заполняет массив из 10⁷ элементов значениями синуса (один полный период) и выводит сумму.

Теоретическая сумма = 0. На практике получаем небольшое отклонение из-за ошибок округления.

## Сборка

```bash
# Сборка с double (по умолчанию)
cmake -B build -DUSE_DOUBLE=ON
cmake --build build

Вывод: 4.89582e-11


```bash
# Сборка с float 
cmake -B build -DUSE_DOUBLE=OFF
cmake --build build


Вывод: -0.0277862