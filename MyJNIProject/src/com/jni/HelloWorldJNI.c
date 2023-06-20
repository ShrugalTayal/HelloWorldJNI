#include <stdio.h>
#include <jni.h>
#include "HelloWorldJNI.h"

// Implementation of the native C functions

// Prints a greeting message
void sayHello() {
    printf("Hello from C!!\n");
}

// Starts the probe
void startProbe() {
    printf("startProbe!!\n");
}

// Stops the probe
void stopProbe() {
    printf("stopProbe!!\n");
}

// Adds an item to the collection
void addToCollection() {
    printf("addToCollection!!\n");
}

// Deletes an item from the collection
void deleteFromCollection() {
    printf("deleteFromCollection!!\n");
}

// JNI method implementations

// Implementation of the sayHello method
JNIEXPORT void JNICALL Java_HelloWorldJNI_sayHello(JNIEnv* env, jobject thisObject) {
    sayHello();
}

// Implementation of the startProbe method
JNIEXPORT void JNICALL Java_HelloWorldJNI_startProbe(JNIEnv* env, jobject thisObject) {
    startProbe();
}

// Implementation of the stopProbe method
JNIEXPORT void JNICALL Java_HelloWorldJNI_stopProbe(JNIEnv* env, jobject thisObject) {
    stopProbe();
}

// Implementation of the addToCollection method
JNIEXPORT void JNICALL Java_HelloWorldJNI_addToCollection(JNIEnv* env, jobject thisObject) {
    addToCollection();
}

// Implementation of the deleteFromCollection method
JNIEXPORT void JNICALL Java_HelloWorldJNI_deleteFromCollection(JNIEnv* env, jobject thisObject) {
    deleteFromCollection();
}
