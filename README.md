### maven打包小工具

#### 生成可执行文件
```
cmake . && cmake --build ./ --target all -- -j 2
```

#### 打包所有项目
```
./package_all
```

#### 打包多个项目
```
./package_modules projectA projectB projectC
```