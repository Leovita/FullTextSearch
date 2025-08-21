#ifndef org_apache_lucene_sandbox_search_MultiRangeQuery$RangeClause_H
#define org_apache_lucene_sandbox_search_MultiRangeQuery$RangeClause_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class MultiRangeQuery$RangeClause : public ::java::lang::Object {
           public:
            enum {
              mid_init$_2cb2893631d74ced,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultiRangeQuery$RangeClause(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MultiRangeQuery$RangeClause(const MultiRangeQuery$RangeClause& obj) : ::java::lang::Object(obj) {}

            MultiRangeQuery$RangeClause(const JArray< jbyte > &, const JArray< jbyte > &);

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
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
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(MultiRangeQuery$RangeClause);
          extern PyTypeObject *PY_TYPE(MultiRangeQuery$RangeClause);

          class t_MultiRangeQuery$RangeClause {
          public:
            PyObject_HEAD
            MultiRangeQuery$RangeClause object;
            static PyObject *wrap_Object(const MultiRangeQuery$RangeClause&);
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
