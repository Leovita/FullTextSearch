#ifndef org_apache_lucene_document_LongRangeDocValuesField_H
#define org_apache_lucene_document_LongRangeDocValuesField_H

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

        class LongRangeDocValuesField : public ::org::apache::lucene::document::BinaryRangeDocValuesField {
         public:
          enum {
            mid_init$_3f569b0deb60acc0,
            mid_getMax_7b22650fccb5d574,
            mid_getMin_7b22650fccb5d574,
            mid_newSlowIntersectsQuery_2e1f01af3550a891,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongRangeDocValuesField(jobject obj) : ::org::apache::lucene::document::BinaryRangeDocValuesField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongRangeDocValuesField(const LongRangeDocValuesField& obj) : ::org::apache::lucene::document::BinaryRangeDocValuesField(obj) {}

          LongRangeDocValuesField(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);

          jlong getMax(jint) const;
          jlong getMin(jint) const;
          static ::org::apache::lucene::search::Query newSlowIntersectsQuery(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);
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
        extern PyType_Def PY_TYPE_DEF(LongRangeDocValuesField);
        extern PyTypeObject *PY_TYPE(LongRangeDocValuesField);

        class t_LongRangeDocValuesField {
        public:
          PyObject_HEAD
          LongRangeDocValuesField object;
          static PyObject *wrap_Object(const LongRangeDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
