#ifndef org_apache_lucene_sandbox_search_MultiRangeQuery$Builder_H
#define org_apache_lucene_sandbox_search_MultiRangeQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          class MultiRangeQuery;
          class MultiRangeQuery$RangeClause;
          class MultiRangeQuery$Builder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class MultiRangeQuery$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_54573ef49c0daa22,
              mid_add_17dee36096c210bd,
              mid_add_a0e13d01da4ac12e,
              mid_build_83b684d3a7823a4f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultiRangeQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MultiRangeQuery$Builder(const MultiRangeQuery$Builder& obj) : ::java::lang::Object(obj) {}

            MultiRangeQuery$Builder(const ::java::lang::String &, jint, jint);

            MultiRangeQuery$Builder add(const ::org::apache::lucene::sandbox::search::MultiRangeQuery$RangeClause &) const;
            MultiRangeQuery$Builder add(const JArray< jbyte > &, const JArray< jbyte > &) const;
            ::org::apache::lucene::sandbox::search::MultiRangeQuery build() const;
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
          extern PyType_Def PY_TYPE_DEF(MultiRangeQuery$Builder);
          extern PyTypeObject *PY_TYPE(MultiRangeQuery$Builder);

          class t_MultiRangeQuery$Builder {
          public:
            PyObject_HEAD
            MultiRangeQuery$Builder object;
            static PyObject *wrap_Object(const MultiRangeQuery$Builder&);
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
