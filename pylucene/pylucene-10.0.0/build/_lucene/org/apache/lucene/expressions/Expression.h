#ifndef org_apache_lucene_expressions_Expression_H
#define org_apache_lucene_expressions_Expression_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DoubleValuesSource;
        class DoubleValues;
        class Rescorer;
        class SortField;
      }
      namespace expressions {
        class Bindings;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {

        class Expression : public ::java::lang::Object {
         public:
          enum {
            mid_evaluate_b9218ff9f90e0d9b,
            mid_getDoubleValuesSource_a2952aaad5729b0d,
            mid_getRescorer_5f6d33441066bd57,
            mid_getSortField_d332000cf449950e,
            max_mid
          };

          enum {
            fid_sourceText,
            fid_variables,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Expression(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Expression(const Expression& obj) : ::java::lang::Object(obj) {}

          ::java::lang::String _get_sourceText() const;
          JArray< ::java::lang::String > _get_variables() const;

          jdouble evaluate(const JArray< ::org::apache::lucene::search::DoubleValues > &) const;
          ::org::apache::lucene::search::DoubleValuesSource getDoubleValuesSource(const ::org::apache::lucene::expressions::Bindings &) const;
          ::org::apache::lucene::search::Rescorer getRescorer(const ::org::apache::lucene::expressions::Bindings &) const;
          ::org::apache::lucene::search::SortField getSortField(const ::org::apache::lucene::expressions::Bindings &, jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(Expression);
        extern PyTypeObject *PY_TYPE(Expression);

        class t_Expression {
        public:
          PyObject_HEAD
          Expression object;
          static PyObject *wrap_Object(const Expression&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
