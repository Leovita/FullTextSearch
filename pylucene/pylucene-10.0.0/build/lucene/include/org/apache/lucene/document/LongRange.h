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
            mid_init$_3f569b0deb60acc0,
            mid_getMax_7b22650fccb5d574,
            mid_getMin_7b22650fccb5d574,
            mid_newContainsQuery_2e1f01af3550a891,
            mid_newCrossesQuery_2e1f01af3550a891,
            mid_newIntersectsQuery_2e1f01af3550a891,
            mid_newWithinQuery_2e1f01af3550a891,
            mid_setRangeValues_4299757ff7ab3bc4,
            mid_toString_09a7afff1868fc5e,
            mid_verifyAndEncode_8d0448c54b3d760b,
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
