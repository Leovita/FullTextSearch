#ifndef org_apache_lucene_search_TermStatistics_H
#define org_apache_lucene_search_TermStatistics_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
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
            mid_init$_25ff7a0759a6ca17,
            mid_docFreq_16939d9d0a9a9721,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_term_9740fddd1c7df148,
            mid_toString_09a7afff1868fc5e,
            mid_totalTermFreq_16939d9d0a9a9721,
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
