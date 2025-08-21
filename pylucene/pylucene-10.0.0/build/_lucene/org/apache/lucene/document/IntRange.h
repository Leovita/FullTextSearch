#ifndef org_apache_lucene_document_IntRange_H
#define org_apache_lucene_document_IntRange_H

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

        class IntRange : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_5ae04353bd4ad6a7,
            mid_getMax_3c9bba330f083871,
            mid_getMin_3c9bba330f083871,
            mid_newContainsQuery_c107d1b8f0b8d4e3,
            mid_newCrossesQuery_c107d1b8f0b8d4e3,
            mid_newIntersectsQuery_c107d1b8f0b8d4e3,
            mid_newWithinQuery_c107d1b8f0b8d4e3,
            mid_setRangeValues_09cea1ab2441144f,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntRange(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntRange(const IntRange& obj) : ::org::apache::lucene::document::Field(obj) {}

          static jint BYTES;

          IntRange(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);

          jint getMax(jint) const;
          jint getMin(jint) const;
          static ::org::apache::lucene::search::Query newContainsQuery(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);
          static ::org::apache::lucene::search::Query newCrossesQuery(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);
          static ::org::apache::lucene::search::Query newIntersectsQuery(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);
          static ::org::apache::lucene::search::Query newWithinQuery(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);
          void setRangeValues(const JArray< jint > &, const JArray< jint > &) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(IntRange);
        extern PyTypeObject *PY_TYPE(IntRange);

        class t_IntRange {
        public:
          PyObject_HEAD
          IntRange object;
          static PyObject *wrap_Object(const IntRange&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
