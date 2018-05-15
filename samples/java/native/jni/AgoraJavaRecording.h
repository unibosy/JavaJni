/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class AgoraJavaRecording */

#ifndef _Included_AgoraJavaRecording
#define _Included_AgoraJavaRecording
#ifdef __cplusplus
extern "C" {
#endif
#undef AgoraJavaRecording_MIN_PRIORITY
#define AgoraJavaRecording_MIN_PRIORITY 1L
#undef AgoraJavaRecording_NORM_PRIORITY
#define AgoraJavaRecording_NORM_PRIORITY 5L
#undef AgoraJavaRecording_MAX_PRIORITY
#define AgoraJavaRecording_MAX_PRIORITY 10L
/*
 * Class:     AgoraJavaRecording
 * Method:    createChannel
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILRecordingConfig;)Z
 */
JNIEXPORT jboolean JNICALL Java_AgoraJavaRecording_createChannel
  (JNIEnv *, jobject, jstring, jstring, jstring, jint, jobject);

/*
 * Class:     AgoraJavaRecording
 * Method:    leaveChannel
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_AgoraJavaRecording_leaveChannel
  (JNIEnv *, jobject, jlong);

/*
 * Class:     AgoraJavaRecording
 * Method:    setVideoMixingLayout
 * Signature: (JLio/agora/recording/common/Common/VideoMixingLayout;)I
 */
JNIEXPORT jint JNICALL Java_AgoraJavaRecording_setVideoMixingLayout
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     AgoraJavaRecording
 * Method:    startService
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_AgoraJavaRecording_startService
  (JNIEnv *, jobject, jlong);

/*
 * Class:     AgoraJavaRecording
 * Method:    stopService
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_AgoraJavaRecording_stopService
  (JNIEnv *, jobject, jlong);

/*
 * Class:     AgoraJavaRecording
 * Method:    getProperties
 * Signature: (J)LRecordingEngineProperties;
 */
JNIEXPORT jobject JNICALL Java_AgoraJavaRecording_getProperties
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
