#ifndef org_apache_lucene_document_LongRange_H
#define org_apache_lucene_document_LongRange_H

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

        class LongRange : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_e89bb31d1592d697,
            mid_getMax_49af390f180d8ee7,
            mid_getMin_49af390f180d8ee7,
            mid_newContainsQuery_83653169e610b239,
            mid_newCrossesQuery_83653169e610b239,
            mid_newIntersectsQuery_83653169e610b239,
            mid_newWithinQuery_83653169e610b239,
            mid_setRangeValues_694256c3370a551a,
            mid_toString_e7df854526d67fa3,
            mid_verifyAndEncode_19d2656ffc974933,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongRange(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongRange(const LongRange& obj) : ::org::apache::lucene::document::Field(obj) {}

          static jint BYTES;

          LongRange(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);

          jlong getMax(jint) const;
          jlong getMin(jint) const;
          static ::org::apache::lucene::search::Query newContainsQuery(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);
          static ::org::apache::lucene::search::Query newCrossesQuery(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);
          static ::org::apache::lucene::search::Query newIntersectsQuery(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);
          static ::org::apache::lucene::search::Query newWithinQuery(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);
          void setRangeValues(const JArray< jlong > &, const JArray< jlong > &) const;
          ::java::lang::String toString() const;
          static void verifyAndEncode(const JArray< jlong > &, const JArray< jlong > &, const JArray< jbyte > &);
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
        extern PyType_Def PY_TYPE_DEF(LongRange);
        extern PyTypeObject *PY_TYPE(LongRange);

        class t_LongRange {
        public:
          PyObject_HEAD
          LongRange object;
          static PyObject *wrap_Object(const LongRange&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
