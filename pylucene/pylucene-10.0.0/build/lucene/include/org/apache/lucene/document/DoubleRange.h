#ifndef org_apache_lucene_document_DoubleRange_H
#define org_apache_lucene_document_DoubleRange_H

#include "org/apache/lucene/document/Field.h"

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

        class DoubleRange : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_690e4106dfec1de3,
            mid_getMax_3bb466f769ef1c7f,
            mid_getMin_3bb466f769ef1c7f,
            mid_newContainsQuery_0678967a97ef81b7,
            mid_newCrossesQuery_0678967a97ef81b7,
            mid_newIntersectsQuery_0678967a97ef81b7,
            mid_newWithinQuery_0678967a97ef81b7,
            mid_setRangeValues_2ab7019da1ed085a,
            mid_toString_e7df854526d67fa3,
            mid_verifyAndEncode_ef8fc5c07134e6bf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoubleRange(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DoubleRange(const DoubleRange& obj) : ::org::apache::lucene::document::Field(obj) {}

          static jint BYTES;

          DoubleRange(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &);

          jdouble getMax(jint) const;
          jdouble getMin(jint) const;
          static ::org::apache::lucene::search::Query newContainsQuery(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &);
          static ::org::apache::lucene::search::Query newCrossesQuery(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &);
          static ::org::apache::lucene::search::Query newIntersectsQuery(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &);
          static ::org::apache::lucene::search::Query newWithinQuery(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &);
          void setRangeValues(const JArray< jdouble > &, const JArray< jdouble > &) const;
          ::java::lang::String toString() const;
          static void verifyAndEncode(const JArray< jdouble > &, const JArray< jdouble > &, const JArray< jbyte > &);
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
        extern PyType_Def PY_TYPE_DEF(DoubleRange);
        extern PyTypeObject *PY_TYPE(DoubleRange);

        class t_DoubleRange {
        public:
          PyObject_HEAD
          DoubleRange object;
          static PyObject *wrap_Object(const DoubleRange&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
