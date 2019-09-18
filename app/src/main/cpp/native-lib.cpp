#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_io_github_birjuvachhani_ndksecurekeys_Keys_apiKey(JNIEnv *env, jobject object) {
    std::string api_key = "this_is_your_demo_api_key";
    return env->NewStringUTF(api_key.c_str());
}