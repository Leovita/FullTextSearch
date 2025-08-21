#ifndef org_apache_lucene_search_similarities_BasicStats_H
#define org_apache_lucene_search_similarities_BasicStats_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class BasicStats : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8c2de08a6e50677a,
              mid_getAvgFieldLength_32caabaad86c508b,
              mid_getBoost_32caabaad86c508b,
              mid_getDocFreq_16939d9d0a9a9721,
              mid_getNumberOfDocuments_16939d9d0a9a9721,
              mid_getNumberOfFieldTokens_16939d9d0a9a9721,
              mid_getTotalTermFreq_16939d9d0a9a9721,
              mid_setAvgFieldLength_b5bc1a2fb9ff9e90,
              mid_setDocFreq_8b3d46852b435a94,
              mid_setNumberOfDocuments_8b3d46852b435a94,
              mid_setNumberOfFieldTokens_8b3d46852b435a94,
              mid_setTotalTermFreq_8b3d46852b435a94,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BasicStats(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BasicStats(const BasicStats& obj) : ::java::lang::Object(obj) {}

            BasicStats(const ::java::lang::String &, jdouble);

            jdouble getAvgFieldLength() const;
            jdouble getBoost() const;
            jlong getDocFreq() const;
            jlong getNumberOfDocuments() const;
            jlong getNumberOfFieldTokens() const;
            jlong getTotalTermFreq() const;
            void setAvgFieldLength(jdouble) const;
            void setDocFreq(jlong) const;
            void setNumberOfDocuments(jlong) const;
            void setNumberOfFieldTokens(jlong) const;
            void setTotalTermFreq(jlong) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(BasicStats);
          extern PyTypeObject *PY_TYPE(BasicStats);

          class t_BasicStats {
          public:
            PyObject_HEAD
            BasicStats object;
            static PyObject *wrap_Object(const BasicStats&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
