make clean
make deps CC="x86_64-w64-mingw32-gcc --static" name="osus.exe" ldflags="-lstdc++ -Lvendor/raylib/src -lraylib -Lvendor/zip/build -lzip -lpthread -lwinmm -lgdi32 -lopengl32" -j12
make run CC="x86_64-w64-mingw32-gcc --static" name="osus.exe" ldflags="-lstdc++ -Lvendor/raylib/src -lraylib -Lvendor/zip/build -lzip -lpthread -lwinmm -lgdi32 -lopengl32" -j12