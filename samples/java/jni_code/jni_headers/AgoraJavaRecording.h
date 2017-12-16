/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class AgoraJavaRecording */

#ifndef _Included_AgoraJavaRecording
#define _Included_AgoraJavaRecording
#ifdef __cplusplus
extern "C" {
#endif
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
 * Signature: (JLheaders/EnumIndex/VideoMixingLayout;)I
 */
JNIEXPORT jint JNICALL Java_AgoraJavaRecording_setVideoMixingLayout
  (JNIEnv *, jobject, jlong, jobject);

#ifdef __cplusplus
}
#endif
#endif
