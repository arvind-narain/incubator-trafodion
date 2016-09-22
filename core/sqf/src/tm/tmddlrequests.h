/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_hadoop_hbase_client_transactional_RMInterface */

#ifndef _Included_org_apache_hadoop_hbase_client_transactional_RMInterface
#define _Included_org_apache_hadoop_hbase_client_transactional_RMInterface
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     org_apache_hadoop_hbase_client_transactional_RMInterface
 * Method:    createTableReq
 * Signature: ([B[[BIIJ[B)V
 */
JNIEXPORT jint JNICALL Java_org_apache_hadoop_hbase_client_transactional_RMInterface_createTableReq
  (JNIEnv *, jobject, jbyteArray, jobjectArray, jint, jint, jlong, jbyteArray);

/*
 * Class:     org_apache_hadoop_hbase_client_transactional_RMInterface
 * Method:    dropTableReq
 * Signature: ([BJ)V
 */
JNIEXPORT jint JNICALL Java_org_apache_hadoop_hbase_client_transactional_RMInterface_dropTableReq
  (JNIEnv *, jobject, jbyteArray, jlong);



/*
 * Class:     org_apache_hadoop_hbase_client_transactional_RMInterface
 * Method:    dropTableReq
 * Signature: ([BJ)V
 */
JNIEXPORT jint JNICALL Java_org_apache_hadoop_hbase_client_transactional_RMInterface_truncateOnAbortReq
  (JNIEnv *pp_env, jobject pv_object, jbyteArray pv_tblname, jlong pv_transid);


/* 
 * Class:     org_apache_hadoop_hbase_client_transactional_RMInterface
 * Method:    alterTableReq
 * Signature: ([B[Ljava/lang/Object;J)V
 */
JNIEXPORT jint JNICALL Java_org_apache_hadoop_hbase_client_transactional_RMInterface_alterTableReq
  (JNIEnv *pp_env, jobject pv_object, jbyteArray pv_tblName, jobjectArray pv_tableOptions, jlong pv_transID);


#ifdef __cplusplus
}
#endif
#endif
