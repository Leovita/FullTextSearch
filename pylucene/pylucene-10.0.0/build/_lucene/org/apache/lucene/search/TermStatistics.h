#ifndef org_apache_lucene_search_TermStatistics_H
#define org_apache_lucene_search_TermStatistics_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
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
      namespace search {

        class TermStatistics : public ::java::lang::Record {
         public:
          enum {
            mid_init$_21a316e27b6ef4ff,
            mid_docFreq_0f176418e3e16541,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_term_adbedbc1fa61c358,
            mid_toString_e7df854526d67fa3,
            mid_totalTermFreq_0f176418e3e16541,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermStatistics(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermStatistics(const TermStatistics& obj) : ::java::lang::Record(obj) {}

          TermStatistics(const ::org::apache::lucene::util::BytesRef &, jlong, jlong);

          jlong docFreq() const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::org::apache::lucene::util::BytesRef term() const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(TermStatistics);
        extern PyTypeObject *PY_TYPE(TermStatistics);

        class t_TermStatistics {
        public:
          PyObject_HEAD
          TermStatistics object;
          static PyObject *wrap_Object(const TermStatistics&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
