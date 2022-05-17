
##### В этом примере используется *gcc* компилятор

```sh
# 1 создать объектные файлы
gcc -c app.c src/options.c
# 2 собрать их в exe файл
gcc app.o options.o -o app
```