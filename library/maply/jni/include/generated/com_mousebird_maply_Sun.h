/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebird_maply_Sun */

#ifndef _Included_com_mousebird_maply_Sun
#define _Included_com_mousebird_maply_Sun
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebird_maply_Sun
 * Method:    setTime
 * Signature: (DDDDDDD)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Sun_setTime
  (JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

/*
 * Class:     com_mousebird_maply_Sun
 * Method:    getDirection
 * Signature: ()Lcom/mousebird/maply/Point3d;
 */
JNIEXPORT jobject JNICALL Java_com_mousebird_maply_Sun_getDirection
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_Sun
 * Method:    getPosition
 * Signature: ()Lcom/mousebird/maply/Point2d;
 */
JNIEXPORT jobject JNICALL va_com_mousebird_maply_Sun_getPosition
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_Sun
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Sun_nativeInit
  (JNIEnv *, jclass);

/*
 * Class:     com_mousebird_maply_Sun
 * Method:    initialise
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Sun_initialise
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_Sun
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Sun_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
