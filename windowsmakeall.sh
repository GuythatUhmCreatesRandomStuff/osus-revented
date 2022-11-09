make clean
make deps CC="i686-w64-mingw32-gcc --static -DGRAPHICS_API_OPENGL_11 -D_WIN32_WINNT=0x0501 -DL_ENDIAN -DOPENSSL_PIC -DOPENSSL_CPUID_OBJ" -j12
make run CC="i686-w64-mingw32-g++ --static -DGRAPHICS_API_OPENGL_11 -D_WIN32_WINNT=0x0501 -DL_ENDIAN -DOPENSSL_PIC -DOPENSSL_CPUID_OBJ" name="osus.exe" ldflags="-Lvendor/raylib/src -lraylib -Lvendor/zip/build -lzip -lpthread -lwinmm -lgdi32 -lopengl32" -j12