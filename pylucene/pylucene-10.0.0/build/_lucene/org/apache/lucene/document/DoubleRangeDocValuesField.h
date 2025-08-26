#ifndef org_apache_lucene_document_DoubleRangeDocValuesField_H
#define org_apache_lucene_document_DoubleRangeDocValuesField_H

#include "org/apache/lucene/document/BinaryRangeDocValuesField.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class DoubleRangeDocValuesField : public ::org::apache::lucene::document::BinaryRangeDocValuesField {
         public:
          enum {
            mid_init$_690e4106dfec1de3,
            mid_getMax_3bb466f769ef1c7f,
            mid_getMin_3bb466f769ef1c7f,
            mid_newSlowIntersectsQuery_0678967a97ef81b7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoubleRangeDocValuesField(jobject obj) : ::org::apache::lucene::document::BinaryRangeDocValuesField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DoubleRangeDocValuesField(const DoubleRangeDocValuesField& obj) : ::org::apache::lucene::document::BinaryRangeDocValuesField(obj) {}

          DoubleRangeDocValuesField(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &);

          jdouble getMax(jint) const;
          jdouble getMin(jint) const;
          static ::org::apache::lucene::search::Query newSlowIntersectsQuery(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(DoubleRangeDocValuesField);
        extern PyTypeObject *PY_TYPE(DoubleRangeDocValuesField);

        class t_DoubleRangeDocValuesField {
        public:
          PyObject_HEAD
          DoubleRangeDocValuesField object;
          static PyObject *wrap_Object(const DoubleRangeDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
