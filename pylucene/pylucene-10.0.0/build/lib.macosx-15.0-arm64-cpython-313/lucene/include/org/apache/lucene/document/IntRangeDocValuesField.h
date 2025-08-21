#ifndef org_apache_lucene_document_IntRangeDocValuesField_H
#define org_apache_lucene_document_IntRangeDocValuesField_H

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

        class IntRangeDocValuesField : public ::org::apache::lucene::document::BinaryRangeDocValuesField {
         public:
          enum {
            mid_init$_5ae04353bd4ad6a7,
            mid_getMax_3c9bba330f083871,
            mid_getMin_3c9bba330f083871,
            mid_newSlowIntersectsQuery_c107d1b8f0b8d4e3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntRangeDocValuesField(jobject obj) : ::org::apache::lucene::document::BinaryRangeDocValuesField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntRangeDocValuesField(const IntRangeDocValuesField& obj) : ::org::apache::lucene::document::BinaryRangeDocValuesField(obj) {}

          IntRangeDocValuesField(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);

          jint getMax(jint) const;
          jint getMin(jint) const;
          static ::org::apache::lucene::search::Query newSlowIntersectsQuery(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);
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
        extern PyType_Def PY_TYPE_DEF(IntRangeDocValuesField);
        extern PyTypeObject *PY_TYPE(IntRangeDocValuesField);

        class t_IntRangeDocValuesField {
        public:
          PyObject_HEAD
          IntRangeDocValuesField object;
          static PyObject *wrap_Object(const IntRangeDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
