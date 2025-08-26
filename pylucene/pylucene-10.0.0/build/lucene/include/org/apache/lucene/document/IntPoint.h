#ifndef org_apache_lucene_document_IntPoint_H
#define org_apache_lucene_document_IntPoint_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
    class Number;
    class String;
  }
  namespace util {
    class Collection;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class IntPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_bc39a7bef255d2b8,
            mid_decodeDimension_ae2551807aeb85ef,
            mid_encodeDimension_ad0ff3d807879a2c,
            mid_newExactQuery_5b565b82a300465b,
            mid_newRangeQuery_2c4c5245b1d1e81f,
            mid_newRangeQuery_68a5297c1fffb8f4,
            mid_newSetQuery_c38bda0e634d1eef,
            mid_newSetQuery_525d6c1fce01d552,
            mid_numericValue_b9665294ea488d3c,
            mid_pack_960e65328d63c8ec,
            mid_setBytesValue_920ce0cdf4259cc9,
            mid_setIntValue_8226bd0b0fc13dba,
            mid_setIntValues_5434f4e6ff59bff9,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntPoint(const IntPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          IntPoint(const ::java::lang::String &, const JArray< jint > &);

          static jint decodeDimension(const JArray< jbyte > &, jint);
          static void encodeDimension(jint, const JArray< jbyte > &, jint);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jint);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jint, jint);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jint > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          ::java::lang::Number numericValue() const;
          static ::org::apache::lucene::util::BytesRef pack(const JArray< jint > &);
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setIntValue(jint) const;
          void setIntValues(const JArray< jint > &) const;
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
        extern PyType_Def PY_TYPE_DEF(IntPoint);
        extern PyTypeObject *PY_TYPE(IntPoint);

        class t_IntPoint {
        public:
          PyObject_HEAD
          IntPoint object;
          static PyObject *wrap_Object(const IntPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
