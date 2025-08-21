#ifndef org_apache_lucene_util_QueryBuilder$TermAndBoost_H
#define org_apache_lucene_util_QueryBuilder$TermAndBoost_H

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
      namespace util {

        class QueryBuilder$TermAndBoost : public ::java::lang::Record {
         public:
          enum {
            mid_init$_e531809cd19a6789,
            mid_boost_9b6c3480dac00edf,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_term_9740fddd1c7df148,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryBuilder$TermAndBoost(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryBuilder$TermAndBoost(const QueryBuilder$TermAndBoost& obj) : ::java::lang::Record(obj) {}

          QueryBuilder$TermAndBoost(const ::org::apache::lucene::util::BytesRef &, jfloat);

          jfloat boost() const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::org::apache::lucene::util::BytesRef term() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(QueryBuilder$TermAndBoost);
        extern PyTypeObject *PY_TYPE(QueryBuilder$TermAndBoost);

        class t_QueryBuilder$TermAndBoost {
        public:
          PyObject_HEAD
          QueryBuilder$TermAndBoost object;
          static PyObject *wrap_Object(const QueryBuilder$TermAndBoost&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
