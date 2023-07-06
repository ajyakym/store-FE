/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_questdb_network_Net */

#ifndef _Included_com_questdb_network_Net
#define _Included_com_questdb_network_Net
#ifdef __cplusplus
extern "C" {
#endif
#undef com_questdb_network_Net_ERETRY
#define com_questdb_network_Net_ERETRY 0L
#undef com_questdb_network_Net_EPEERDISCONNECT
#define com_questdb_network_Net_EPEERDISCONNECT -1L
#undef com_questdb_network_Net_EOTHERDISCONNECT
#define com_questdb_network_Net_EOTHERDISCONNECT -2L
/*
 * Class:     com_questdb_network_Net
 * Method:    abortAccept
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_abortAccept
        (JNIEnv *, jclass, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    accept
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_accept0
        (JNIEnv *, jclass, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    bindTcp
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_io_questdb_network_Net_bindTcp
        (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    bindUdp
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_io_questdb_network_Net_bindUdp
        (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    configureNonBlocking
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_configureNonBlocking
        (JNIEnv *, jclass, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    connect
 * Signature: (IJ)J
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_connect
        (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     com_questdb_network_Net
 * Method:    freeMsgHeaders
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_questdb_network_Net_freeMsgHeaders
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_questdb_network_Net
 * Method:    freeSockAddr0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_questdb_network_Net_freeSockAddr0
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_questdb_network_Net
 * Method:    getPeerIP
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_getPeerIP
        (JNIEnv *, jclass, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    getPeerPort
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_getPeerPort
        (JNIEnv *, jclass, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    isDead
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_io_questdb_network_Net_isDead
        (JNIEnv *, jclass, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    join
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_io_questdb_network_Net_join
        (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    listen
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_io_questdb_network_Net_listen
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    msgHeaders
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_io_questdb_network_Net_msgHeaders
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    recv
 * Signature: (IJI)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_recv
        (JNIEnv *, jclass, jint, jlong, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    recvmmsg
 * Signature: (IJI)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_recvmmsg
        (JNIEnv *, jclass, jint, jlong, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    send
 * Signature: (IJI)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_send
        (JNIEnv *, jclass, jint, jlong, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    sendTo
 * Signature: (IJIJ)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_sendTo
        (JNIEnv *, jclass, jint, jlong, jint, jlong);

/*
 * Class:     com_questdb_network_Net
 * Method:    getRcvBuf
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_getRcvBuf
        (JNIEnv *, jclass, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    setRcvBuf
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_setRcvBuf
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    getSndBuf
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_getSndBuf
        (JNIEnv *, jclass, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    getTcpNoDelay
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_getTcpNoDelay
        (JNIEnv *, jclass, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    setSndBuf
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_setSndBuf
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    setTcpNoDelay
 * Signature: (IZ)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_setTcpNoDelay
        (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_questdb_network_Net
 * Method:    setMulticastInterface
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_setMulticastInterface
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    setMulticastLoop
 * Signature: (IZ)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_setMulticastLoop
        (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_questdb_network_Net
 * Method:    setReuseAddress
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_setReuseAddress
        (JNIEnv *, jclass, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    setReusePort
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_setReusePort
        (JNIEnv *, jclass, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    sockaddr0
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_io_questdb_network_Net_sockaddr0
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_questdb_network_Net
 * Method:    socketTcp
 * Signature: (Z)I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_socketTcp0
        (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_questdb_network_Net
 * Method:    socketUdp0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_socketUdp0
        (JNIEnv *, jclass);

/*
 * Class:     com_questdb_network_Net
 * Method:    getMsgHeaderSize
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_io_questdb_network_Net_getMsgHeaderSize
        (JNIEnv *, jclass);

/*
 * Class:     com_questdb_network_Net
 * Method:    getMsgHeaderBufferAddressOffset
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_io_questdb_network_Net_getMsgHeaderBufferAddressOffset
        (JNIEnv *, jclass);

/*
 * Class:     com_questdb_network_Net
 * Method:    getMsgHeaderBufferLengthOffset
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_io_questdb_network_Net_getMsgHeaderBufferLengthOffset
        (JNIEnv *, jclass);

/*
 * Class:     com_questdb_network_Net
 * Method:    getEwouldblock
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_io_questdb_network_Net_getEwouldblock
        (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
