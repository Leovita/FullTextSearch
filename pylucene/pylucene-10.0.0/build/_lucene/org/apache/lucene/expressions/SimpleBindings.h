#ifndef org_apache_lucene_expressions_SimpleBindings_H
#define org_apache_lucene_expressions_SimpleBindings_H

#include "org/apache/lucene/expressions/Bindings.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        class Expression;
      }
      namespace search {
        class DoubleValuesSource;
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
            mid_init$_e7bdbe105ce1bafb,
            mid_add_d8572f0cbd977c36,
            mid_add_81b5de616e17c1ea,
            mid_getDoubleValuesSource_4dceecd0b9399ae8,
            mid_validate_e7bdbe105ce1bafb,
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
