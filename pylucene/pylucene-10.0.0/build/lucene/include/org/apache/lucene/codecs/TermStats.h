#ifndef org_apache_lucene_codecs_TermStats_H
#define org_apache_lucene_codecs_TermStats_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class TermStats : public ::java::lang::Record {
         public:
          enum {
            mid_init$_1d43622e571bd043,
            mid_docFreq_bd89ce15dad49192,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            mid_totalTermFreq_0f176418e3e16541,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermStats(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermStats(const TermStats& obj) : ::java::lang::Record(obj) {}

          TermStats(jint, jlong);

          jint docFreq() const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::java::lang::String toString() const;
          jlong totalTermFreq() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(TermStats);
        extern PyTypeObject *PY_TYPE(TermStats);

        class t_TermStats {
        public:
          PyObject_HEAD
          TermStats object;
          static PyObject *wrap_Object(const TermStats&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
