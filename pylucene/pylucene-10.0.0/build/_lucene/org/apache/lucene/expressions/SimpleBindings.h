#ifndef org_apache_lucene_expressions_SimpleBindings_H
#define org_apache_lucene_expressions_SimpleBindings_H

#include "org/apache/lucene/expressions/Bindings.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DoubleValuesSource;
      }
      namespace expressions {
        class Expression;
      }
    }
  }
}
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
      namespace expressions {

        class SimpleBindings : public ::org::apache::lucene::expressions::Bindings {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_add_972386f8e1fec758,
            mid_add_2a5b548f6bb1716c,
            mid_getDoubleValuesSource_fc4fee8eaa090fbd,
            mid_validate_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleBindings(jobject obj) : ::org::apache::lucene::expressions::Bindings(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleBindings(const SimpleBindings& obj) : ::org::apache::lucene::expressions::Bindings(obj) {}

          SimpleBindings();

          void add(const ::java::lang::String &, const ::org::apache::lucene::expressions::Expression &) const;
          void add(const ::java::lang::String &, const ::org::apache::lucene::search::DoubleValuesSource &) const;
          ::org::apache::lucene::search::DoubleValuesSource getDoubleValuesSource(const ::java::lang::String &) const;
          void validate() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        extern PyType_Def PY_TYPE_DEF(SimpleBindings);
        extern PyTypeObject *PY_TYPE(SimpleBindings);

        class t_SimpleBindings {
        public:
          PyObject_HEAD
          SimpleBindings object;
          static PyObject *wrap_Object(const SimpleBindings&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
