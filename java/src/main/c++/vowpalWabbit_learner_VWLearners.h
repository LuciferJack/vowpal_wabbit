/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class vowpalWabbit_learner_VWLearners */

#ifndef _Included_vowpalWabbit_learner_VWLearners
#define _Included_vowpalWabbit_learner_VWLearners
#ifdef __cplusplus
extern "C"
{
#endif
/*
 * Class:     vowpalWabbit_learner_VWLearners
 * Method:    initialize
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_vowpalWabbit_learner_VWLearners_initialize
(JNIEnv *, jclass, jstring);

/*
 * Class:     vowpalWabbit_learner_VWLearners
 * Method:    seedVWModel
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_vowpalWabbit_learner_VWLearners_seedVWModel
(JNIEnv *, jclass, jlong);

/*
 * Class:     vowpalWabbit_learner_VWLearners
 * Method:    getReturnType
 * Signature: (J)LvowpalWabbit/learner/VWLearners/VWReturnType;
 */
JNIEXPORT jobject JNICALL Java_vowpalWabbit_learner_VWLearners_getReturnType
(JNIEnv *, jclass, jlong);

/*
 * Class:     vowpalWabbit_learner_VWLearners
 * Method:    closeInstance
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_vowpalWabbit_learner_VWLearners_closeInstance
(JNIEnv *, jclass, jlong);

/*
 * Class:     vowpalWabbit_learner_VWLearners
 * Method:    saveModel
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_vowpalWabbit_learner_VWLearners_saveModel
(JNIEnv *, jclass, jlong, jstring);

#ifdef __cplusplus
}
#endif
#endif
