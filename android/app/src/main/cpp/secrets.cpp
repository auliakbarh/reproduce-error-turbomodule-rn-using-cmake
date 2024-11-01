/**
 * Created by Aulia Akbar Harahap on 01/11/2024, auliaakbarharahaap@gmail.com
 **/

// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.
//
// For instance,
//
// In MainActivity.java:
//    static {
//       System.loadLibrary("secrets");
//    }
//
// Or, in MainActivity.kt:
//    companion object {
//      init {
//         System.loadLibrary("secrets")
//      }
//    }

#include <jni.h>
#include <string>
#include <iostream>

extern "C" {
    JNIEXPORT jstring JNICALL
    Java_com_awesomeproject_MainActivity_getApiKey(JNIEnv *env, jobject) {
        return env->NewStringUTF("exampleApiKey");
    }
}
